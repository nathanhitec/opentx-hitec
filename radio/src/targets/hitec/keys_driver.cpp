/*
 * Copyright (C) OpenTX
 *
 * Based on code named
 *   th9x - http://code.google.com/p/th9x
 *   er9x - http://code.google.com/p/er9x
 *   gruvin9x - http://code.google.com/p/gruvin9x
 *
 * License GPLv2: http://www.gnu.org/licenses/gpl-2.0.html
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include "opentx.h"



uint32_t readKeys()
{
  uint32_t result = 0;

  if (~KEYS_GPIO_REG_ENTER & KEYS_GPIO_PIN_ENTER)
    result |= 1 << KEY_ENTER;

#if defined(KEYS_GPIO_PIN_MENU)
  if (~KEYS_GPIO_REG_MENU & KEYS_GPIO_PIN_MENU)
    result |= 1 << KEY_MENU;
#endif

#if defined(KEYS_GPIO_PIN_PAGE)
  if (~KEYS_GPIO_REG_PAGE & KEYS_GPIO_PIN_PAGE)
    result |= 1 << KEY_PAGE;
#endif

#if defined(KEYS_GPIO_PIN_PAGEUP)
  if (~KEYS_GPIO_REG_PAGEUP & KEYS_GPIO_PIN_PAGEUP)
    result |= 1 << KEY_PAGEUP;
#endif

#if defined(KEYS_GPIO_PIN_PAGEDN)
  if (~KEYS_GPIO_REG_PAGEDN & KEYS_GPIO_PIN_PAGEDN)
    result |= 1 << KEY_PAGEDN;
#endif

#if defined(KEYS_GPIO_PIN_SYS)
  if (~KEYS_GPIO_REG_SYS & KEYS_GPIO_PIN_SYS)
    result |= 1 << KEY_SYS;
#endif

#if defined(KEYS_GPIO_PIN_MDL)
  if (~KEYS_GPIO_REG_MDL & KEYS_GPIO_PIN_MDL)
    result |= 1 << KEY_MODEL;
#endif

#if defined(KEYS_GPIO_PIN_TELE)
  if (~KEYS_GPIO_REG_TELE & KEYS_GPIO_PIN_TELE)
    result |= 1 << KEY_TELE;
#endif

  if (~KEYS_GPIO_REG_EXIT & KEYS_GPIO_PIN_EXIT)
    result |= 1 << KEY_EXIT;

#if defined(KEYS_GPIO_PIN_PLUS)
  if (~KEYS_GPIO_REG_PLUS & KEYS_GPIO_PIN_PLUS)
    result |= 1 << KEY_PLUS;
  if (~KEYS_GPIO_REG_MINUS & KEYS_GPIO_PIN_MINUS)
    result |= 1 << KEY_MINUS;
#endif

#if defined(KEYS_GPIO_PIN_LEFT)
  if (~KEYS_GPIO_REG_LEFT & KEYS_GPIO_PIN_LEFT)
    result |= 1 << KEY_LEFT;
  if (~KEYS_GPIO_REG_RIGHT & KEYS_GPIO_PIN_RIGHT)
    result |= 1 << KEY_RIGHT;
  if (~KEYS_GPIO_REG_UP & KEYS_GPIO_PIN_UP)
    result |= 1 << KEY_UP;
  if (~KEYS_GPIO_REG_DOWN & KEYS_GPIO_PIN_DOWN)
    result |= 1 << KEY_DOWN;
#endif

#if defined(KEYS_GPIO_PIN_SHIFT)
  if (~KEYS_GPIO_REG_SHIFT & KEYS_GPIO_PIN_SHIFT)
    result |= 1 << KEY_SHIFT;
#endif

#if defined(KEYS_GPIO_PIN_BIND)
  if (~KEYS_GPIO_REG_BIND & KEYS_GPIO_PIN_BIND)
    result |= 1 << KEY_BIND;
#endif
  // if (result != 0) TRACE("readKeys(): result=0x%02x", result);

  return result;
}

uint32_t readTrims()
{
  uint32_t result = 0;
  //No Trims
  return result;
}

bool trimDown(uint8_t idx)
{
  return readTrims() & (1 << idx);
}

bool keyDown()
{
  return readKeys() || readTrims();
}

/* TODO common to ARM */
void readKeysAndTrims()
{
  uint8_t index = 0;
  uint32_t keys_input = readKeys();
  for (unsigned i = 1; i != unsigned(1 << TRM_BASE); i <<= 1) {
    keys[index++].input(keys_input & i);
  }

  uint32_t trims_input = readTrims();
  for (uint8_t i = 1; i != uint8_t(1 << 8); i <<= 1) {
    keys[index++].input(trims_input & i);
  }

#if defined(PWR_BUTTON_PRESS)
  if ((keys_input || trims_input || pwrPressed()) && (g_eeGeneral.backlightMode & e_backlight_mode_keys)) {
#else
  if ((keys_input || trims_input) && (g_eeGeneral.backlightMode & e_backlight_mode_keys)) {
#endif
    // on keypress turn the light on
    resetBacklightTimeout();
  }
}


  #define ADD_2POS_CASE(x) \
    case SW_S ## x ## 2: \
      xxx = SWITCHES_GPIO_REG_ ## x  & SWITCHES_GPIO_PIN_ ## x ; \
      break; \
    case SW_S ## x ## 0: \
      xxx = ~SWITCHES_GPIO_REG_ ## x  & SWITCHES_GPIO_PIN_ ## x ; \
      break


#define ADD_3POS_CASE(x, i) \
  case SW_S ## x ## 0: \
    xxx = (SWITCHES_GPIO_REG_ ## x ## _H & SWITCHES_GPIO_PIN_ ## x ## _H); \
    if (IS_CONFIG_3POS(i)) { \
      xxx = xxx && (~SWITCHES_GPIO_REG_ ## x ## _L & SWITCHES_GPIO_PIN_ ## x ## _L); \
    } \
    break; \
  case SW_S ## x ## 1: \
    xxx = (SWITCHES_GPIO_REG_ ## x ## _H & SWITCHES_GPIO_PIN_ ## x ## _H) && (SWITCHES_GPIO_REG_ ## x ## _L & SWITCHES_GPIO_PIN_ ## x ## _L); \
    break; \
  case SW_S ## x ## 2: \
    xxx = (~SWITCHES_GPIO_REG_ ## x ## _H & SWITCHES_GPIO_PIN_ ## x ## _H); \
    if (IS_CONFIG_3POS(i)) { \
      xxx = xxx && (SWITCHES_GPIO_REG_ ## x ## _L & SWITCHES_GPIO_PIN_ ## x ## _L); \
    } \
    break

#if !defined(BOOT)
//TODO: might need to change 
uint32_t switchState(uint8_t index)
{
  uint32_t xxx = 0;

  switch (index) {
      ADD_3POS_CASE(A, 0);
      ADD_3POS_CASE(B, 1);
      ADD_3POS_CASE(C, 2);
      ADD_3POS_CASE(D, 3);
      ADD_3POS_CASE(E, 4);
      ADD_3POS_CASE(G, 6);
      ADD_2POS_CASE(H);
      ADD_2POS_CASE(I);

    default:
      break;
  }

  // TRACE("switch %d => %d", index, xxx);
  return xxx;
}
#endif

void keysInit()
{
  GPIO_InitTypeDef GPIO_InitStructure;
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;
  GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
  GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN;

#if defined(KEYS_GPIOA_PINS)
  INIT_KEYS_PINS(GPIOA);
#endif

#if defined(KEYS_GPIOB_PINS)
  INIT_KEYS_PINS(GPIOB);
#endif

#if defined(KEYS_GPIOC_PINS)
  INIT_KEYS_PINS(GPIOC);
#endif

#if defined(KEYS_GPIOD_PINS)
  INIT_KEYS_PINS(GPIOD);
#endif

#if defined(KEYS_GPIOE_PINS)
  INIT_KEYS_PINS(GPIOE);
#endif

#if defined(KEYS_GPIOF_PINS)
  INIT_KEYS_PINS(GPIOF);
#endif

#if defined(KEYS_GPIOG_PINS)
  INIT_KEYS_PINS(GPIOG);
#endif
}
