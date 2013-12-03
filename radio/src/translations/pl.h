/*

 * Authors (alphabetical order)
 * - Bertrand Songis <bsongis@gmail.com>
 * - Bernet Andre <bernet.andre@gmail.com>
 * - Kjell Kernen <kjell.kernen@gmail.com>
 * - Martin Hotar <mhotar@gmail.com>
 * - Romolo Manfredini <romolo.manfredini@gmail.com>
 *
 * opentx is based on code named
 * gruvin9x by Bryan J. Rentoul: http://code.google.com/p/gruvin9x/,
 * er9x by Erez Raviv: http://code.google.com/p/er9x/,
 * and the original (and ongoing) project by
 * Thomas Husterer, th9x: http://code.google.com/p/th9x/
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 *
 *
 *
 * !!!!! DO NOT EDIT pl.h - EDIT pl.h.txt INSTEAD !!!!!!!
 *
 * In order to make translations easier pl.h.txt is parsed and national
 * characters are replaced by bitmap codes. The result is pl.h.
 * See translate.py in the util catalog for the list of character codes  
 *
 * !!!!! DO NOT EDIT pl.h - EDIT pl.h.txt INSTEAD !!!!!!!   
 *
 */

// NON ZERO TERMINATED STRINGS
#define LEN_OFFON              "\003"
#define TR_OFFON               "WY\214""ZA\214"

#define LEN_MMMINV             "\003"
#define TR_MMMINV              "---""INV"

#define LEN_NCHANNELS          "\004"
#define TR_NCHANNELS           "\0014CH\0016CH\0018CH10CH12CH14CH16CH"

#define LEN_VBEEPMODE          TR("\007","\016")
#define TR_VBEEPMODE           TR("Cichy\0 ""Alarm\0 ""BezPrz\0""Wszytko", "Cichy\0        ""Tylko alarm\0  ""Bez Przycisk\205w""Wszystko\0     ")

#define LEN_VBEEPLEN           "\005"
#define TR_VBEEPLEN            "O====""=O===""==O==""===O=""====O"

#define LEN_VRENAVIG           "\003"
#define TR_VRENAVIG            "Ne REaREb"

#define LEN_VBLMODE            TR("\006", "\011")
#define TR_VBLMODE             TR("Wy\203\0  ""Przyc.""Dr\200\207ki""Oba\0  ""Za\203\0  ", "Wy\203aczone""Przyciski""Dr\200zki\0  ""Oba\0     ""W\203\200czy\201\0 ")

#define LEN_TRNMODE            "\003"
#define TR_TRNMODE             " X "" +="" :="

#define LEN_TRNCHN             "\003"
#define TR_TRNCHN              "CH1CH2CH3CH4"

#define LEN_DATETIME           "\006"
#define TR_DATETIME            "DANA:""Czas:\0 "

#define LEN_VLCD               "\006"
#define TR_VLCD                "Normal""Optrex"

#define LEN_COUNTRYCODES       TR("\002", "\007")
#define TR_COUNTRYCODES        TR("US""JP""EU", "Ameryka""Japonia""Europa\0")

#define LEN_VTRIMINC           "\012"
#define TR_VTRIMINC            "Expo\0     ""B.Dok\203adny""Dok\203adny\0 ""\217redni\0   ""Zgrubny\0  "

#define LEN_VBEEPCOUNTDOWN     "\007"
#define TR_VBEEPCOUNTDOWN      "Cichy\0 ""Pikanie""D\210wi\202ki"

#define LEN_RETA123            "\001"

#if defined(PCBGRUVIN9X)
  #if ROTARY_ENCODERS > 2
    #define TR_RETA123         "KWGL123abcd"
  #else
    #define TR_RETA123         "KWGL123ab"
  #endif
#elif defined(PCBTARANIS)
  #define TR_RETA123           "KWGL12LR"
#else
  #define TR_RETA123           "KWGL123"
#endif

#define LEN_VPROTOS            "\006"

#if defined(PXX)
  #define TR_PXX              "PXX\0  "
#elif defined(DSM2) || defined(IRPROTOS)
  #define TR_PXX             "[PXX]\0"
#else
  #define TR_PXX
#endif

#if defined(DSM2)
  #define TR_DSM2            "LP45\0 ""DSM2\0 ""DSMX\0 "
#elif defined(IRPROTOS)
  #define TR_DSM2            "[LP45]""[DSM2]""[DSMX]"
#else
  #define TR_DSM2
#endif

#if defined(IRPROTOS)
  #define TR_IRPROTOS          "SILV  TRAC09PICZ  SWIFT\0"
#else
  #define TR_IRPROTOS
#endif

#if defined(CPUARM)
  #define TR_XPPM
#else
  #define TR_XPPM              "PPM16\0""PPMsim"
#endif

#define TR_VPROTOS             "PPM\0  " TR_XPPM TR_PXX TR_DSM2 TR_IRPROTOS

#define LEN_POSNEG             "\003"
#define TR_POSNEG              "POZ""NEG"

#define LEN_VCURVEFUNC         "\003"
#define TR_VCURVEFUNC          "---""x>0""x<0""|x|""f>0""f<0""|f|"

#define LEN_VMLTPX             "\006"
#define TR_VMLTPX              "Dodaj\0""Mn\205\207\0 ""Zast\200p"

#define LEN_VMLTPX2            "\002"
#define TR_VMLTPX2             "+=""*="":="

#define LEN_VMIXTRIMS          "\004"
#define TR_VMIXTRIMS           "WY\203\0""ZA\214\0""SK\0 ""SW\0 ""GAZ\0""Lotk"

#define LEN_VCSWFUNC           "\005"
#define TR_VCSWFUNC            "---\0 ""a{x\0 ""a>x\0 ""a<x\0 ""|a|>x""|a|<x""AND\0 ""OR\0  ""XOR\0 ""a=b\0 ""a>b\0 ""a<b\0 ""d}x\0 ""|d|}x""TIM\0"

#define LEN_VFSWFUNC           "\013"

#if defined(VARIO)
  #define TR_VVARIO            "Wario\0     "
#else
  #define TR_VVARIO            "[Wario]\0   "
#endif

#if defined(AUDIO)
  #define TR_SOUND             "\222 D\210wi\202k\0  "
#else
  #define TR_SOUND             "Pikanie\0  "
#endif

#if defined(PCBTARANIS)
  #define TR_HAPTIC
#elif defined(HAPTIC)
  #define TR_HAPTIC            "Wibracje\0  "
#else
  #define TR_HAPTIC            "[Wibracje] "
#endif

#if defined(VOICE)
  #if defined(PCBSKY9X)
    #define TR_PLAY_TRACK      "\222 \217cie\207ka  "
  #else
    #define TR_PLAY_TRACK      "\222 \217cie\207ka  "
  #endif
  #define TR_PLAY_BOTH         "\222 Oba\0     "
  #define TR_PLAY_VALUE        "\222 Warto\206\201\0 "
#else
  #define TR_PLAY_TRACK        "[\222]\217cie\207ka "
  #define TR_PLAY_BOTH         "[\222 Oba]\0  "
  #define TR_PLAY_VALUE        "[\222 Wart.]\0"
#endif

#define TR_CFN_VOLUME        "G\203o\206no\206\201\0  "
#define TR_CFN_BG_MUSIC      "Muz. t\203a   " "Muz. t\203a ||"

#if defined(SDCARD)
  #define TR_SDCLOGS         "Logi->SD \0 "
#else
  #define TR_SDCLOGS         "[Logowa\201]\0 "
#endif

#ifdef GVARS
  #define TR_CFN_ADJUST_GVAR     "Ustaw \0    "
#else
  #define TR_CFN_ADJUST_GVAR
#endif

#ifdef DEBUG
  #define TR_CFN_TEST            "Test\0     "
#else
  #define TR_CFN_TEST
#endif

#if defined(CPUARM)
  #define TR_VFSWFUNC          "Bezp.\0     ""Trener \0   ""Inst-Trim  " TR_SOUND TR_HAPTIC "Reset      " TR_VVARIO TR_PLAY_TRACK TR_PLAY_VALUE TR_SDCLOGS TR_CFN_VOLUME "Pod\206wietl. " TR_CFN_BG_MUSIC TR_CFN_ADJUST_GVAR TR_CFN_TEST
#elif defined(PCBGRUVIN9X)
  #define TR_VFSWFUNC          "Bezp.\0     ""Trener \0   ""Inst-Trim  " TR_SOUND TR_HAPTIC "Reset      " TR_VVARIO TR_PLAY_TRACK TR_PLAY_BOTH TR_PLAY_VALUE TR_SDCLOGS "Pod\206wietl. " TR_CFN_ADJUST_GVAR TR_CFN_TEST
#else
  #define TR_VFSWFUNC          "Bezp.\0     ""Trener \0   ""Inst-Trim  " TR_SOUND TR_HAPTIC "Reset       " TR_VVARIO TR_PLAY_TRACK TR_PLAY_BOTH TR_PLAY_VALUE "Pod\206wietl. " TR_CFN_ADJUST_GVAR TR_CFN_TEST
#endif

#define LEN_VFSWRESET           "\005"

#if defined(FRSKY)
  #define TR_FSW_RESET_TELEM    "Telem"
#else  
  #define TR_FSW_RESET_TELEM
#endif

#if ROTARY_ENCODERS == 2
  #define TR_FSW_RESET_ROTENC  TR("REa\0 ""REb\0 ", "RotEnc A\0""RotEnc B\0")
#elif ROTARY_ENCODERS == 1
  #define TR_FSW_RESET_ROTENC  TR("R.Enc", "RotEnc\0  ")
#else
#define TR_FSW_RESET_ROTENC
#endif

#define TR_VFSWRESET            "Tmr1\0""Tmr2\0""ALL\0 " TR_FSW_RESET_TELEM TR_FSW_RESET_ROTENC

#define LEN_FUNCSOUNDS         TR("\004", "\006")
#define TR_FUNCSOUNDS          TR("Bp1\0""Bp2\0""Bp3\0""Wrn1""Wrn2""Chee""Rata""Tick""Sirn""Ring""SciF""Robt""Chrp""Tada""Crck""Alrm", "Beep1 ""Beep2 ""Beep3 ""Warn1 ""Warn2 ""Cheep ""Ratata""Tick  ""Siren ""Ring  ""SciFi ""Robot ""Chirp ""Tada  ""Crickt""AlmClk")

#define LEN_VTELEMCHNS         "\004"
#if defined(PCBTARANIS)
  #define TR_RSSI_0            "SWR\0"
  #define TR_RSSI_1            "RSSI"
#else
  #define TR_RSSI_0            "Tx\0 "
  #define TR_RSSI_1            "Rx\0 "
#endif
#define TR_VTELEMCHNS          "---\0""Bat\0""Tmr1""Tmr2" TR_RSSI_0 TR_RSSI_1 "A1\0 ""A2\0 ""Alt\0""Rpm\0""Fuel""T1\0 ""T2\0 ""Spd\0""Dist""GAlt""Cell""Cels""Vfas""Curr""Cnsp""Powr""AccX""AccY""AccZ""Hdg\0""VSpd""A1-\0""A2-\0""Alt-""Alt+""Rpm+""T1+\0""T2+\0""Spd+""Dst+""Cur+""Pwr+""Acc\0""Time"

#if defined(CPUARM)
  #define LEN_VUNITSSYSTEM     TR("\006", "\012")
  #define TR_VUNITSSYSTEM      TR("Metr.\0""Imper.", "Metryczne\0""Imperialne")
  #define LEN_VTELEMUNIT_NORM  "\003"
  #define TR_VTELEMUNIT_NORM   "V\0 ""A\0 ""m/s""-\0 ""kmh""m\0 ""@\0 ""%\0 ""mA\0""mAh""W\0 "
  #define LEN_VTELEMUNIT_IMP   "\003"
  #define TR_VTELEMUNIT_IMP    "V\0 ""A\0 ""m/s""-\0 ""kts""ft\0""@\0 ""%\0 ""mA\0""mAh""W\0 "
#else
  #if defined(IMPERIAL_UNITS)
    #define LENGTH_UNIT        "ft\0"
    #define SPEED_UNIT         "kts"
  #else
    #define LENGTH_UNIT        "m\0 "
    #define SPEED_UNIT         "kmh"
  #endif
  #define LEN_VTELEMUNIT       "\003"
  #define TR_VTELEMUNIT        "v\0 ""A\0 ""m/s""-\0 " SPEED_UNIT LENGTH_UNIT "@\0 ""%\0 ""mA\0""mAh""W\0 "
#endif

#define STR_V                  (STR_VTELEMUNIT+1)
#define STR_A                  (STR_VTELEMUNIT+4)

#define LEN_VALARM             "\005"
#define TR_VALARM              "-----""\207\205\203ty""pomar""czerw"

#define LEN_VALARMFN           "\001"
#define TR_VALARMFN            "<>"

#define LEN_VTELPROTO          "\007"
#define TR_VTELPROTO           "---\0   ""Hub\0   ""WSHHigh""Halcyon"

#define LEN_VOLTSRC            "\003"
#define TR_VOLTSRC             "---""A1\0""A2\0""FAS""Cel"

#define LEN_VARIOSRC           "\005"
#if defined(FRSKY_SPORT)
  #define TR_VARIOSRC          "Vario""A1\0  ""A2\0"
#else
  #define TR_VARIOSRC          "Alti\0""Alti+""Vario""A1\0  ""A2\0"
#endif

#define LEN_VSCREEN            "\006"
#define TR_VSCREEN             "Liczby""Paski\0"

#define LEN_GPSFORMAT          "\004"
#define TR_GPSFORMAT           "HMS NMEA"

#define LEN2_VTEMPLATES        17
#define LEN_VTEMPLATES         "\021"
#define TR_VTEMPLATES          "Wyczy\206\201 miksery\0 ""Prosty. 4kanal\0  ""Prze\203\200cznik-T-Cut""V-Tail      \0    ""Elevon-Delta\0    ""eCCPM       \0    ""Heli Setup  \0    ""Test serwa  \0    "

#define LEN_VSWASHTYPE         "\004"
#define TR_VSWASHTYPE          "--- ""120 ""120X""140 ""90\0"

#define LEN_VKEYS              "\005"
#define TR_VKEYS               TR(" Menu"" Exit""W d\205\203""Wg\205r\202""Wpraw""Wlewo", " Menu"" Exit""W d\205\203""Wg\205r\202""Wpraw""Wlewo")

#define LEN_VRENCODERS         "\003"
#define TR_VRENCODERS          "REa""REb"

#define LEN_VSWITCHES          "\003"
#define LEN_VSRCRAW            "\004"

#if defined(PCBTARANIS)
  #define TR_POTS_VSRCRAW      "S1\0 ""S2\0 ""LS\0 ""RS\0 "
  #define TR_SW_VSRCRAW        "SA\0 ""SB\0 ""SC\0 ""SD\0 ""SE\0 ""SF\0 ""SG\0 ""SH\0 "
#elif defined(EXTRA_3POS)
  #define TR_POTS_VSRCRAW      "P1\0 ""P2\0 "
  #define TR_SW_VSRCRAW        "3P1\0""3P2\0"
  #define TR_9X_3POS_SWITCHES  "ID0""ID1""ID2""ID3""ID4""ID5"
#else
  #define TR_POTS_VSRCRAW      "P1\0 ""P2\0 ""P3\0 "
  #define TR_SW_VSRCRAW        "3POS"
  #define TR_9X_3POS_SWITCHES  "ID0""ID1""ID2"
#endif

#if defined(CPUARM)
  #define TR_CUSTOMSW          "PL1""PL2""PL3""PL4""PL5""PL6""PL7""PL8""PL9""PLA""PLB""PLC""PLD""PLE""PLF""PLG""PLH""PLI""PLJ""PLK""PLL""PLM""PLN""PLO""PLP""PLQ""PLR""PLS""PLT""PLU""PLV""PLW"
#elif defined(PCBGRUVIN9X) || defined(CPUM2561) || defined(CPUM128)
  #define TR_CUSTOMSW          "PL1""PL2""PL3""PL4""PL5""PL6""PL7""PL8""PL9""PLA""PLB""PLC""PLD""PLE""PLF"
#else
  #define TR_CUSTOMSW          "PL1""PL2""PL3""PL4""PL5""PL6""PL7""PL8""PL9""PLA""PLB""PLC"
#endif

#if defined(PCBTARANIS)
  #define TR_VSWITCHES         "SA\300""SA-""SA\301""SB\300""SB-""SB\301""SC\300""SC-""SC\301""SD\300""SD-""SD\301""SE\300""SE-""SE\301""SF\300""SF\301""SG\300""SG-""SG\301""SH\300""SH\301" TR_CUSTOMSW " * "
#else
  #define TR_VSWITCHES         TR_9X_3POS_SWITCHES "GAZ""SK ""LOT""SW ""GEA""TRN" TR_CUSTOMSW " * "
#endif

#if defined(PCBSKY9X)
  #define TR_ROTARY_ENCODERS_VSRCRAW "REnc"
#elif defined(PCBGRUVIN9X) && ROTARY_ENCODERS > 2
  #define TR_ROTARY_ENCODERS_VSRCRAW "REa ""REb ""REc ""REd "
#elif defined(PCBGRUVIN9X) && ROTARY_ENCODERS <= 2
  #define TR_ROTARY_ENCODERS_VSRCRAW "REa ""REb "
#else
  #define TR_ROTARY_ENCODERS_VSRCRAW
#endif

#if defined(HELI)
  #define TR_CYC_VSRCRAW       "CYC1""CYC2""CYC3"
#else
  #define TR_CYC_VSRCRAW       "[C1]""[C2]""[C3]"
#endif

#define TR_VSRCRAW             "---\0""SK\0 ""SW\0 ""Gaz\0""Lotk" TR_POTS_VSRCRAW TR_ROTARY_ENCODERS_VSRCRAW "MAX\0" TR_CYC_VSRCRAW "TrmK" "TrmW" "TrmG" "TrmL" TR_SW_VSRCRAW

#define LEN_VTMRMODES          "\003"
#define TR_VTMRMODES           "WY\214""ABS""THs""TH%""THt"

#define LEN_VTRAINERMODES      "\006"
#define TR_VTRAINERMODES       "Trener""Ucze\204\0"

#define LEN_VFAILSAFE          "\011"
#define TR_VFAILSAFE           "Utrzymuj\0""W\203asne\0  ""0 sygna\203u"

#if defined(MAVLINK)
  #define LEN_MAVLINK_BAUDS	"\006"
  #define TR_MAVLINK_BAUDS	"4800  ""9600  ""14400 ""19200 ""38400 ""57600 ""76800 ""115200"
  #define LEN_MAVLINK_AC_MODES	"\011"
  #define TR_MAVLINK_AC_MODES	"Stabilizacja""Akro     ""Alt Hold ""Auto     ""Sterowany   ""Loiter   ""RTL      ""Circle   ""Pos Hold ""Land     ""OF Loiter""Toy A    ""Toy M    ""INVALID  "
  #define LEN_MAVLINK_AP_MODES	"\015"
  #define TR_MAVLINK_AP_MODES	"Manual       ""Circle       ""Stabilize    ""Training     ""Fly by Wire A""Fly by Wire A""Auto         ""RTL          ""Loiter       ""Guided       ""Initialising ""INVALID      "
#endif

// ZERO TERMINATED STRINGS
#define INDENT                 "\001"
#define LEN_INDENT             1
#define INDENT_WIDTH           (FW/2)

#if defined(PCBTARANIS)
  #define TR_ENTER             "[ENTER]"
#else
  #define TR_ENTER             "[MENU]"
#endif

#define TR_POPUPS              TR_ENTER"\010[EXIT]"
#define OFS_EXIT               sizeof(TR_ENTER)

#define TR_MENUWHENDONE        CENTER "\007"TR_ENTER" > DALEJ"
#define TR_FREE                TR("wolne:", "wolne")
#define TR_DELETEMODEL         "SKASUJ MODEL"
#define TR_COPYINGMODEL        "Kopiuj model.."
#define TR_MOVINGMODEL         "Przenie\206 model."
#define TR_LOADINGMODEL        "Za\203aduj model.."
#define TR_NAME                "Nazwa"
#define TR_MODELNAME           "Nazwa modelu"
#define TR_PHASENAME           "Nazwa"
#define TR_MIXNAME             "Nazwa"
#define TR_EXPONAME            "Nazwa"
#define TR_BITMAP              "Obrazek"
#define TR_TIMER               "Timer "
#define TR_ELIMITS             TR("Limit+25%", "Kana\203 +/- 125%")
#define TR_ETRIMS              TR("Trymery 100%", "Poszerzone Trymery")
#define TR_TRIMINC             TR("Krok Trymera", "Krok trymera")
#define TR_TTRACE              TR("\221r\205d\203o gazu", "\221r\205d\203o gazu")
#define TR_TTRIM               TR("Trymer gazu", "Trymer gazu")
#define TR_BEEPCTR             "(\043)Pikanie \206rodka"
#define TR_PROTO               INDENT"Protok\205l"
#define TR_PPMFRAME            "PPM frame"
#define TR_MS                  "ms"
#define TR_SWITCH              "Prze\203\200cznik"
#define TR_TRIMS               "Trymery"
#define TR_FADEIN              "Pojawianie"
#define TR_FADEOUT             "Zanikanie"
#define TR_DEFAULT             "(Bazowa)"
#define TR_CHECKTRIMS          "\006Sprawd\210 \012 Trymery"
#define OFS_CHECKTRIMS         (9*FW)
#define TR_SWASHTYPE           "Typ tarczy"
#define TR_COLLECTIVE          "Kolektyw"
#define TR_SWASHRING           "Tarcza"
#define TR_ELEDIRECTION        "Ster Wysoko\206ci"
#define TR_AILDIRECTION        "\012Lotki"
#define TR_COLDIRECTION        "\012Kolektwy"
#define TR_MODE                INDENT"Tryb"
#define TR_NOFREEEXPO          "Brak wolnych expo!"
#define TR_NOFREEMIXER         "Brak wolnych mix!"
#define TR_INSERTMIX           "WSTAW MIKSER "
#define TR_EDITMIX             "EDYTUJ MIKSER "
#define TR_SOURCE              INDENT"\221r\205d\203o"
#define TR_WEIGHT              "Waga"
#define TR_EXPO                "Expo"
#define TR_SIDE                "Strona"
#define TR_DIFFERENTIAL        "R\205\207n.wychyle\204"
#define TR_OFFSET              INDENT"Ofset"
#define TR_TRIM                "Trim"
#define TR_DREX                "DRex"
#define TR_CURVE               "Krzywa"
#define TR_FLMODE              "Tryb"
#define TR_MIXWARNING          "UWAGA"
#define TR_OFF                 "Wy\203."
#define TR_MULTPX              TR("Po\203\200czenie", "Po\203\200cz.")
#define TR_DELAYDOWN           TR("Op\205znienie (-)", "Op\205znienie(-)")
#define TR_DELAYUP             TR("Op\205znienie (+)", "Op\205znienie(\43)")
#define TR_SLOWDOWN            TR("Spowolnienie(-)", "Spowolnienie(\177)")
#define TR_SLOWUP              TR("Spowolnienie(+)", "Spowolnienie(\176)")
#define TR_MIXER               "MIKSER"
#define TR_CV                  "K"
#define TR_GV                  "ZG"
#define TR_ACHANNEL            "A\004Kana\203"
#define TR_RANGE               INDENT"Zakres"
#define TR_BAR                 "Pasek"
#define TR_ALARM               INDENT"Alarm"
#define TR_USRDATA             TR("Dane U\207ytk.", "Dane u\207ytkownika")
#define TR_BLADES              TR(INDENT"\214opaty \206migla", INDENT"\214opaty \206mig\203a")
#define TR_SCREEN              "Ekran "
#define TR_SOUND_LABEL         "D\210wi\202k"
#define TR_LENGTH              INDENT"D\203ugo\206\201"
#define TR_SPKRPITCH           INDENT"D\210wi\202k"
#define TR_HAPTIC_LABEL        "Wibracja"
#define TR_HAPTICSTRENGTH      INDENT"Si\203a"
#define TR_CONTRAST            "Kontrast LCD"
#define TR_ALARMS_LABEL        "Alarmy"
#define TR_BATTERY_RANGE       TR("Poka\207 stan bat.", "Poka\207 pasek bateri")
#define TR_BATTERYWARNING      INDENT"Bateria roz\203adowana"
#define TR_INACTIVITYALARM     INDENT"Alarm bezczynno\206ci"
#define TR_MEMORYWARNING       INDENT"Pe\203na pami\202\201'"
#define TR_ALARMWARNING        INDENT"Wy\203\200cz d\210wi\202k"
#define TR_RENAVIG             "Nawigacja potencjometrem"
#define TR_THROTTLEREVERSE     TR("Odwr\205\201 gaz", "Odwr\205\201 gaz")
#define TR_MINUTEBEEP          TR(INDENT"Minuta", INDENT"Pik co minut\202")
#define TR_BEEPCOUNTDOWN       TR(INDENT"Odliczanie", INDENT"Odliczanie")
#define TR_PERSISTENT          INDENT"Dok\203adny"
#define TR_BACKLIGHT_LABEL     "Pod\206wietlenie"
#define TR_BLDELAY             INDENT"Czas trwania"
#define TR_BLONBRIGHTNESS      INDENT"Jasno\206c w\203."
#define TR_BLOFFBRIGHTNESS     INDENT"Jasno\206\201 wy\203."
#define TR_SPLASHSCREEN        "Logo ekranu"
#define TR_THROTTLEWARNING     "(\043)Gaz"
#define TR_SWITCHWARNING       "(\043)Prze\203\200cznik"
#define TR_POTWARNING          TR("Pot Warn.","Pot Warning")
#define TR_TIMEZONE            "Strefa czasowa"
#define TR_RXCHANNELORD        TR("Kolejno\206\201 kana\203\205w", "Bazowa kolejno\206\201 kana\203\205w")
#define TR_SLAVE               "Podrz\202dny"
#define TR_MODESRC             " Tryb\006% \221r\205d\203o"
#define TR_MULTIPLIER          "Po\203\200cznie"
#define TR_CAL                 "Kal."
#define TR_VTRIM               "Trim- +"
#define TR_BG                  "BG:"
#define TR_MENUTOSTART         CENTER "\007" TR_ENTER " = START"
#define TR_SETMIDPOINT         TR(CENTER "\001Ustaw dr\200\207ki/potencj na \206rodku","\005Ustaw dr\200zki/potencj na \206rodku")
#define TR_MOVESTICKSPOTS      TR(CENTER "\004Poruszaj dr\200\207kami i potenc.","\010Poruszaj dr\200\207kami i potenc.")
#define TR_RXBATT              "Rx Bat.:"
#define TR_TXnRX               "Tx:\0Rx:"
#define OFS_RX                 4
#define TR_ACCEL               "Acc:"
#define TR_NODATA              CENTER "NO DATA"
#define TR_TM1TM2              "TM1\032TM2"
#define TR_THRTHP              "THR\032TH%"
#define TR_TOT                 "TOT"
#define TR_TMR1LATMAXUS        "Tmr1Lat max\006us"
#define STR_US                 (STR_TMR1LATMAXUS+12)
#define TR_TMR1LATMINUS        "Tmr1Lat min\006us"
#define TR_TMR1JITTERUS        "Tmr1 Jitter\006us"

#if defined(CPUARM)
  #define TR_TMIXMAXMS         "Tmix max\012ms"
#else
  #define TR_TMIXMAXMS         "Tmix max\014ms"
#endif

#define TR_T10MSUS             "T10ms\016us"
#define TR_FREESTACKMINB       "Free Stack\010b"
#define TR_MENUTORESET         CENTER TR_ENTER" >> Reset"
#define TR_PPM                 "PPM"
#define TR_CH                  "Kan"
#define TR_MODEL               "MODEL"
#define TR_FP                  "FL"
#define TR_MIX                 "MIX"
#define TR_EEPROMLOWMEM        "Niska pami\202\201 EEPROM"
#define TR_ALERT               "\006   UWAGA"
#define TR_PRESSANYKEYTOSKIP   "Wci\206nij guzik->ignoruj"
#define TR_THROTTLENOTIDLE     TR("Gaz nie na zerze", "Dr\200\207ek gazu nie na zerze")
#define TR_ALARMSDISABLED      "Alarmy wy\203\200czone"
#define TR_PRESSANYKEY         "\006Wci\206nij jaki\206 klawisz"
#define TR_BADEEPROMDATA       "\006B\203\200d danych EEPROM"
#define TR_EEPROMFORMATTING    "\004Formatowanie EEPROM"
#define TR_EEPROMOVERFLOW      "Prze\203adowany EEPROM"
#define TR_MENURADIOSETUP      "USTAWIENIA RADIA"
#define TR_MENUDATEANDTIME     "DATA I CZAS"
#define TR_MENUTRAINER         "TRENER"
#define TR_MENUVERSION         "WERSJA"
#define TR_MENUDIAG            "TEST PRZE\214\211CZNIK\216W"
#define TR_MENUANA             "WEJ\217CIA ANALOG."
#define TR_MENUCALIBRATION     "KALIBRACJA"
#define TR_TRIMS2OFFSETS       "\004Trymery => Subtrimy"
#define TR_MENUMODELSEL        "MODEL"
#define TR_MENUSETUP           "USTAWIENIA"
#define TR_MENUFLIGHTPHASE     "FAZA LOTU"
#define TR_MENUFLIGHTPHASES    "FAZY LOTU"
#define TR_MENUHELISETUP       "HELI"


// Alignment


#define TR_MENUINPUTS          "DR/EXPO"
#define TR_MENULIMITS          "LIMITY"


#define TR_MENUCURVES          "KRZYWE"
#define TR_MENUCURVE           "\002k"
#define TR_MENUCUSTOMSWITCH    "PRZE\214\211CZNIK LOGICZNY"
#define TR_MENUCUSTOMSWITCHES  "Prze\203\200czniki logiczne"
#define TR_MENUCUSTOMFUNC      "FUNKCJE SPECJALNE"
#define TR_MENUTELEMETRY       "TELEMETRIA"
#define TR_MENUTEMPLATES       "SZABLONY"
#define TR_MENUSTAT            "STATYSTYKA"
#define TR_MENUDEBUG           "DIAG"
#define TR_RXNUM               "Nr odbiornika"
#define TR_SYNCMENU            "Synch. [MENU]"
#define TR_LIMIT               INDENT"Limit"
#define TR_MINRSSI             "Min Rssi"
#define TR_LATITUDE            "Szer. geo."
#define TR_LONGITUDE           "D\203.   geo."
#define TR_GPSCOORD            "Typ koordynat GPS"
#define TR_VARIO               "Wario"
#define TR_SHUTDOWN            "Wy\203\200czanie.."
#define TR_BATT_CALIB          "Kalib:Baterii"
#define TR_CURRENT_CALIB       " +=\006Kalibracja pr\200du"
#define TR_VOLTAGE             INDENT"Napi\202cie"
#define TR_CURRENT             INDENT"Pr\200d"
#define TR_SELECT_MODEL        "Wyb\205r modelu"
#define TR_CREATE_MODEL        "Nowy model"
#define TR_COPY_MODEL          "Skopiuj model"
#define TR_MOVE_MODEL          "Przenie\206 model"
#define TR_BACKUP_MODEL        "Zbackupuj model"
#define TR_DELETE_MODEL        "Skasuj model"
#define TR_RESTORE_MODEL       "Odtw\205rz model"
#define TR_SDCARD_ERROR        "B\203\200d SD karty"
#define TR_NO_SDCARD           "Brak SD karta"
#define TR_INCOMPATIBLE        "Niekompatybilne"
#define TR_WARNING             "UWAGA"
#define TR_EEPROMWARN          "EEPROM"
#define TR_THROTTLEWARN        "GAZ"
#define TR_ALARMSWARN          "ALARM"
#define TR_SWITCHWARN          "Prze\203\200cznik"
#define TR_INVERT_THR          "Odwr\205\201 gaz"
#define TR_SPEAKER_VOLUME      INDENT "G\203o\206no\206\201"
#define TR_LCD                 "LCD"
#define TR_BRIGHTNESS          INDENT "Jasno\206\201"
#define TR_CPU_TEMP            "Temp. CPU\016>"
#define TR_CPU_CURRENT         "Pr\200d"
#define TR_CPU_MAH             "Zu\207ycie"
#define TR_COPROC              "CoProc."
#define TR_COPROC_TEMP         "Temp. MB"
#define TR_CAPAWARNING         INDENT "Ma\203a pojemno\206\201"
#define TR_TEMPWARNING         INDENT "Przegrzanie"
#define TR_FUNC                "Funkc"
#define TR_V1                  "V1"
#define TR_V2                  "V2"
#define TR_DURATION            "Czas trwania"
#define TR_DELAY               "Op\205\210nienie"
#define TR_SD_CARD             "SD"
#define TR_SDHC_CARD           "SD-HC"
#define TR_NO_SOUNDS_ON_SD     "brak d\210wi\202k\205w na SD"
#define TR_NO_MODELS_ON_SD     "brak modelu na SD"
#define TR_NO_BITMAPS_ON_SD    "brak obrazk\205w na SD"
#define TR_PLAY_FILE           "Odtw\205rz"
#define TR_DELETE_FILE         "Skasuj"
#define TR_COPY_FILE           "Kopiuj"
#define TR_RENAME_FILE         "Zmie\204 nazw\202"
#define TR_ASSIGN_BITMAP       "Wybierz obrazek"
#define TR_REMOVED             " skasowane"
#define TR_SD_INFO             "Informacje"
#define TR_SD_FORMAT           "Formatuj"
#define TR_NA                  "[X]"
#define TR_HARDWARE            "HARDWARE"
#define TR_FORMATTING          "Formatowanie.."
#define TR_TEMP_CALIB          "Temp. kalibracji"
#define TR_TIME                "Czas"
#define TR_BAUDRATE            "Pr\202dko\206\201 BT"
#define TR_SD_INFO_TITLE       "SD INFO"
#define TR_SD_TYPE             "Typ:"
#define TR_SD_SPEED            "Pr\202dko\206\201:"
#define TR_SD_SECTORS          "Sektory :"
#define TR_SD_SIZE             "Wielko\206\201:"
#define TR_TYPE                TR_SD_TYPE
#define TR_GLOBAL_VARS         "Zmienne globalne"
#define TR_GLOBAL_VAR          "Zmienna globalna"
#define TR_MENUGLOBALVARS      "ZMIENNE GLOBALNE"
#define TR_OWN                 " W\203asno\206\201 "
#define TR_DATE                "Data"
#define TR_ROTARY_ENCODER      "R.Encs"
#define TR_CHANNELS_MONITOR    "MONITOR KANA\214\216W"
#define TR_INTERNALRF          "Wewn\202trzny modu\203 RF"
#define TR_EXTERNALRF          "Zewn\202trzny modu\203 RF"
#define TR_FAILSAFE            "Tryb Failsafe"
#define TR_FAILSAFESET         "USTAWIENIE FAILSAFE"
#define TR_COUNTRYCODE         "Kod regionu"
#define TR_VOICELANG           "J\202zyk g\203osu"
#define TR_UNITSSYSTEM         "Jednostki"
#define TR_EDIT                "Edytuj"
#define TR_INSERT_BEFORE       "Wstaw przed"
#define TR_INSERT_AFTER        "Wstaw za"
#define TR_COPY                "Kopiuj"
#define TR_MOVE                "Przemie\206\201"
#define TR_PASTE               "Wklej"
#define TR_DELETE              "Kasuj"
#define TR_INSERT              "Wstaw"
#define TR_RESET_FLIGHT        "Zeruj lot"
#define TR_RESET_TIMER1        "Zeruj Timer1"
#define TR_RESET_TIMER2        "Zeruj Timer2"
#define TR_RESET_TELEMETRY     "Wyczy\206\201 telemetri\202"
#define TR_STATISTICS          "Statystyki"
#define TR_ABOUT_US            "O nas"
#define TR_AND_SWITCH          "Prze\203\200cznik AND"
#define TR_CF                  "FS"
#define TR_SPEAKER             INDENT"G\203o\206nik"
#define TR_BUZZER              INDENT"Brz\202czyk"
#define TR_BYTES               "[B]"
#define TR_MODULE_BIND         "[Bind]"
#define TR_MODULE_RANGE        "[Zasieg]"
#define TR_RESET_BTN           "[Reset]"
#define TR_SET                 "[Ustaw]"
#define TR_TRAINER             "Trener"
#define TR_ANTENNAPROBLEM      CENTER "Problem z anten\200 TX"
#define TR_MODELIDUSED         TR("ID ju\207 u\207yte","ID modelu ju\207 u\207yte")
#define TR_MODULE              INDENT "Modu\203"
#define TR_CHANNELRANGE        INDENT "Zakres kana\203u"
#define TR_LOWALARM            INDENT "Alarm niski"
#define TR_CRITICALALARM       INDENT "Alarm krytyczny"
#define TR_PERSISTENT_MAH      INDENT "Store mAh"
#define TR_CHECKLIST           "Display Checklist"

#if defined(MAVLINK)
  #define TR_MAVLINK_RC_RSSI_SCALE_LABEL	"Max RSSI"
  #define TR_MAVLINK_PC_RSSI_EN_LABEL		"PC RSSI EN"
  #define TR_MAVMENUSETUP_TITLE			"Mavlink Setup"
  #define TR_MAVLINK_BAUD_LABEL			"Baudrate"
  #define TR_MAVLINK_INFOS			"INFOS"
  #define TR_MAVLINK_MODE			"MODE"
  #define TR_MAVLINK_CUR_MODE			"Current Mode"
  #define TR_MAVLINK_ARMED			"Armed"
  #define TR_MAVLINK_BAT_MENU_TITLE		"BAT RSSI"
  #define TR_MAVLINK_BATTERY_LABEL		"Status baterii "
  #define TR_MAVLINK_RC_RSSI_LABEL		"RC RSSI"
  #define TR_MAVLINK_PC_RSSI_LABEL		"PC RSSI"
  #define TR_MAVLINK_NAV_MENU_TITLE		"NAV"
  #define TR_MAVLINK_COURSE			"Kurs"
  #define TR_MAVLINK_HEADING			"Kierunek"
  #define TR_MAVLINK_BEARING			"Orientacja"
  #define TR_MAVLINK_ALTITUDE			"Wysoko\206\201"
  #define TR_MAVLINK_GPS			"GPS"
  #define TR_MAVLINK_NO_FIX			"NO Fix"
  #define TR_MAVLINK_SAT			"SAT"
  #define TR_MAVLINK_HDOP			"HDOP"
  #define TR_MAVLINK_LAT			"LAT"
  #define TR_MAVLINK_LON			"LON"
#endif

// Taranis column headers
#define TR_PHASES_HEADERS      { " Nazwa ", " Prze\203\200cznik ", " Trymery ", " Pojawianie si\202  ", " Zanikanie " }
#define TR_LIMITS_HEADERS      { " Nazwa ", " Subtrim ", " Min ", " Max ", " Kierunek ", " Krzywa ", " \217rodek PPM ", " Tryb subtrim " }
#define TR_CSW_HEADERS         { " Funkcja ", " Param. 1 ", " Param 2 ", " AND Prze\203\200cznik ", " Czas trwania ", " Op\205\210nienie " }

//Taranis About screen
#define TR_ABOUTUS             TR(" ABOUT ", "ABOUT")

#define TR_ABOUT_OPENTX_1      TR("OpenTX\001is\001open\001source,\001non", "OpenTX is open source, non-")
#define TR_ABOUT_OPENTX_2      TR("commercial,\001wo\001warranties.", "commercial and comes with no")
#define TR_ABOUT_OPENTX_3      TR("It\001was\001developed\001for\001free.", "warranties. It was developed")
#define TR_ABOUT_OPENTX_4      TR("Support through donations", "for free. Support through")
#define TR_ABOUT_OPENTX_5      TR("is welcome!", "donations is welcome!")

#define TR_ABOUT_BERTRAND_1    "Bertrand Songis"
#define TR_ABOUT_BERTRAND_2    "OpenTX main author"
#define TR_ABOUT_BERTRAND_3    "Companion9x co-author"

#define TR_ABOUT_MIKE_1        "Mike Blandford"
#define TR_ABOUT_MIKE_2        "Code and drivers guru"
#define TR_ABOUT_MIKE_3        TR("Arguably,\001one\001of\001the\001best", "Arguably, one of the best")
#define TR_ABOUT_MIKE_4        "Inspirational"
       
#define TR_ABOUT_ROMOLO_1      "Romolo Manfredini"
#define TR_ABOUT_ROMOLO_2      "Companion9x co-author"
#define TR_ABOUT_ROMOLO_3      ""

#define TR_ABOUT_ANDRE_1       "Andre Bernet"
#define TR_ABOUT_ANDRE_2       "Functionality, usability,"
#define TR_ABOUT_ANDRE_3       "debugging, documentation"

#define TR_ABOUT_ROB_1         "Rob Thomson"
#define TR_ABOUT_ROB_2         "openrcforums webmaster"

#define TR_ABOUT_MARTIN_1      "Martin Hotař"
#define TR_ABOUT_MARTIN_2      "Projekty graficzne"

#if defined(PCBTARANIS)
  #define TR_ABOUT_HARDWARE_1  "FrSky"
  #define TR_ABOUT_HARDWARE_2  "Proucent/projektant Hardware"
  #define TR_ABOUT_HARDWARE_3  "Wsp\205\203autor firmware"
#else
  #define TR_ABOUT_HARDWARE_1  "Brent Nelson"
  #define TR_ABOUT_HARDWARE_2  "Sky9x designer/producent"
  #define TR_ABOUT_HARDWARE_3  ""
#endif

#define TR_ABOUT_PARENTS_1     "Projekty macierzyste"
#define TR_ABOUT_PARENTS_2     "ersky9x (Mike Blandford)"
#define TR_ABOUT_PARENTS_3     "ER9X (Erez Raviv)"
#define TR_ABOUT_PARENTS_4     "TH9X (Thomas Husterer)"

#define TR_CHR_SHORT  's'
#define TR_CHR_LONG   'l'
#define TR_CHR_TOGGLE 't'
#define TR_CHR_HOUR   'h'

#define TR_BEEP_VOLUME         "G\203o\206no\206\201 pikania"
#define TR_WAV_VOLUME          "G\203o\206no\206\201 wav"
#define TR_VARIO_VOLUME        "G\203o\206no\206\201 wario"
#define TR_BG_VOLUME           "G\203o\206no\206c t\203a "
