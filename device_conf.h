//*******************************************************
// Copyright (c) MLRS project
// GPL3
// https://www.gnu.org/licenses/gpl-3.0.de.html
// OlliW @ www.olliw.eu
//*******************************************************
// device configuration splicer
//*******************************************************

// enter define into "MCU G++ Compiler"->"Preprocessor" !!!
// for devices with I2C, un-comment #define HAL_I2C_MODULE_ENABLED in Core/Inc/stm32xxxx_hal_conf.h

/* Documentation

Note: Device name can be 20 chars max.

Note: A device may support multiple frequency bands.
Available RF band defines:

#define FREQUENCY_BAND_2P4_GHZ
#define FREQUENCY_BAND_868_MHZ
#define FREQUENCY_BAND_915_MHZ_FCC
#define FREQUENCY_BAND_866_MHZ_IN
#define FREQUENCY_BAND_433_MHZ
#define FREQUENCY_BAND_70_CM_HAM

The default selection of frequency bands can be overruled by feature defines.
*/


//-- FrsKy R9 system

#ifdef RX_R9MX_868_L433CB
  #define DEVICE_NAME "Frsky R9MX"
  #define DEVICE_IS_RECEIVER
  #define DEVICE_HAS_SX127x
  #define FREQUENCY_BAND_868_MHZ
  #define FREQUENCY_BAND_915_MHZ_FCC
  //#define FREQUENCY_BAND_866_MHZ_IN
#endif

#ifdef RX_R9M_868_F103C8
  #define DEVICE_NAME "Frsky R9M"
  #define DEVICE_IS_RECEIVER
  #define DEVICE_HAS_SX127x
  #define FREQUENCY_BAND_868_MHZ
  #define FREQUENCY_BAND_915_MHZ_FCC
  //#define FREQUENCY_BAND_866_MHZ_IN
#endif

#ifdef RX_R9MM_868_F103RB
  #define DEVICE_NAME "Frsky R9MM"
  #define DEVICE_IS_RECEIVER
  #define DEVICE_HAS_SX127x
  #define FREQUENCY_BAND_868_MHZ
  #define FREQUENCY_BAND_915_MHZ_FCC
  //#define FREQUENCY_BAND_866_MHZ_IN
#endif


#ifdef TX_R9M_868_F103C8
  #define DEVICE_NAME "Frsky R9M"
  #define DEVICE_IS_TRANSMITTER
  #define DEVICE_HAS_SX127x
  #define FREQUENCY_BAND_868_MHZ
  #define FREQUENCY_BAND_915_MHZ_FCC
  //#define FREQUENCY_BAND_866_MHZ_IN
#endif

#ifdef TX_R9MX_868_L433CB
  #define DEVICE_NAME "Frsky R9MX"
  #define DEVICE_IS_TRANSMITTER
  #define DEVICE_HAS_SX127x
  #define FREQUENCY_BAND_868_MHZ
  #define FREQUENCY_BAND_915_MHZ_FCC
  //#define FREQUENCY_BAND_866_MHZ_IN
#endif


//-- SeeedStudio WioE5 boards

#ifdef RX_WIO_E5_GROVE_WLE5JC
  #define DEVICE_NAME "WioE5 Grove WLE5JC"
  #define DEVICE_IS_RECEIVER
  #define DEVICE_HAS_SX126x
  #define FREQUENCY_BAND_868_MHZ
  #define FREQUENCY_BAND_915_MHZ_FCC
  //#define FREQUENCY_BAND_866_MHZ_IN
#endif

#ifdef RX_WIO_E5_MINI_WLE5JC
  #define DEVICE_NAME "WioE5 Mini WLE5JC"
  #define DEVICE_IS_RECEIVER
  #define DEVICE_HAS_SX126x
  #define FREQUENCY_BAND_868_MHZ
  #define FREQUENCY_BAND_915_MHZ_FCC
  //#define FREQUENCY_BAND_866_MHZ_IN
#endif


#ifdef TX_WIO_E5_MINI_WLE5JC
  #define DEVICE_NAME "WioE5 Mini WLE5JC"
  #define DEVICE_IS_TRANSMITTER
  #define DEVICE_HAS_SX126x
  #define FREQUENCY_BAND_868_MHZ
  #define FREQUENCY_BAND_915_MHZ_FCC
  //#define FREQUENCY_BAND_866_MHZ_IN
#endif


//-- EByte MBL Evaluation Kits

#ifdef RX_E77_MBLKIT_WLE5CC
  #define DEVICE_NAME "E77 MBL Kit WLE5CC"
  #define DEVICE_IS_RECEIVER
  #define DEVICE_HAS_SX126x
  #define FREQUENCY_BAND_868_MHZ
  #define FREQUENCY_BAND_915_MHZ_FCC
  //#define FREQUENCY_BAND_866_MHZ_IN
  //#define FREQUENCY_BAND_433_MHZ
  //#define FREQUENCY_BAND_70_CM_HAM
#endif

#ifdef TX_E77_MBLKIT_WLE5CC
  #define DEVICE_NAME "E77 EZ 70 CM"
  #define DEVICE_IS_TRANSMITTER
  #define DEVICE_HAS_SX126x
  //#define FREQUENCY_BAND_868_MHZ
  //#define FREQUENCY_BAND_915_MHZ_FCC
  //#define FREQUENCY_BAND_866_MHZ_IN
  #define FREQUENCY_BAND_433_MHZ
  #define FREQUENCY_BAND_70_CM_HAM
  #define SX_USE_DCDC
#endif


//-- DIY Boards, 2.4 GHz Devices

#ifdef RX_DIY_BOARD01_F103CB
  #define DEVICE_NAME "DIY DualSX F103CB"
  #define DEVICE_IS_RECEIVER
  #define DEVICE_HAS_SX128x
  #define FREQUENCY_BAND_2P4_GHZ
#endif

#ifdef RX_DIY_E28DUAL_BOARD02_F103CB
  #define DEVICE_NAME "DIY DualE28 F103CB"
  #define DEVICE_IS_RECEIVER
  #define DEVICE_HAS_SX128x
  #define FREQUENCY_BAND_2P4_GHZ
#endif

#ifdef RX_DIY_E28_G441KB
  #define DEVICE_NAME "DIY E28 G441KB"
  #define DEVICE_IS_RECEIVER
  #define DEVICE_HAS_SX128x
  #define FREQUENCY_BAND_2P4_GHZ
#endif


#ifdef TX_DIY_E28DUAL_BOARD02_F103CB
  #define DEVICE_NAME "DIY DualE28 F103CB"
  #define DEVICE_IS_TRANSMITTER
  #define DEVICE_HAS_SX128x
  #define FREQUENCY_BAND_2P4_GHZ
#endif

#ifdef TX_DIY_E28_G431KB
  #define DEVICE_NAME "DIY E28 G431KB"
  #define DEVICE_IS_TRANSMITTER
  #define DEVICE_HAS_SX128x
  #define FREQUENCY_BAND_2P4_GHZ
#endif

#ifdef TX_DIY_BOARD01_G491RE
  #define DEVICE_NAME "DIY DualSX G491RE"
  #define DEVICE_IS_TRANSMITTER
  #define DEVICE_HAS_SX128x
  #define FREQUENCY_BAND_2P4_GHZ
#endif

#ifdef TX_DIY_SXDUAL_MODULE02_G491RE
  #define DEVICE_NAME "DIY DualSX G491RE"
  #define DEVICE_IS_TRANSMITTER
  #define DEVICE_HAS_SX128x
  #define FREQUENCY_BAND_2P4_GHZ
#endif

#ifdef TX_DIY_E28DUAL_MODULE02_G491RE
  #define DEVICE_NAME "DIY DualE28 G491RE"
  #define DEVICE_IS_TRANSMITTER
  #define DEVICE_HAS_SX128x
  #define FREQUENCY_BAND_2P4_GHZ
#endif


//-- DIY Boards, 868/915 MHz Devices

#ifdef RX_DIY_E22_G441KB
  #define DEVICE_NAME "DIY E22 G441KB"
  #define DEVICE_IS_RECEIVER
  #define DEVICE_HAS_SX126x
  #define FREQUENCY_BAND_868_MHZ
  #define FREQUENCY_BAND_915_MHZ_FCC
  //#define FREQUENCY_BAND_866_MHZ_IN
#endif

#ifdef TX_DIY_E22_G431KB
  #define DEVICE_NAME "DIY E22 G431KB"
  #define DEVICE_IS_TRANSMITTER
  #define DEVICE_HAS_SX126x
  #define FREQUENCY_BAND_868_MHZ
  #define FREQUENCY_BAND_915_MHZ_FCC
  //#define FREQUENCY_BAND_866_MHZ_IN
#endif

#ifdef TX_DIY_E22DUAL_MODULE02_G491RE
  #define DEVICE_NAME "DIY DualE22 G491RE"
  #define DEVICE_IS_TRANSMITTER
  #define DEVICE_HAS_SX126x
  #define FREQUENCY_BAND_868_MHZ
  #define FREQUENCY_BAND_915_MHZ_FCC
  //#define FREQUENCY_BAND_866_MHZ_IN
#endif


#ifdef RX_DIY_WIOE5_E22_WLE5JC
  #define DEVICE_NAME "DIY WioE5 E22"
  #define DEVICE_IS_RECEIVER
  #define DEVICE_HAS_SX126x
  #define FREQUENCY_BAND_868_MHZ
  #define FREQUENCY_BAND_915_MHZ_FCC
  //#define FREQUENCY_BAND_866_MHZ_IN
#endif

#ifdef TX_DIY_WIOE5_E22_WLE5JC
  #define DEVICE_NAME "DIY WioE5 E22"
  #define DEVICE_IS_TRANSMITTER
  #define DEVICE_HAS_SX126x
  #define FREQUENCY_BAND_868_MHZ
  #define FREQUENCY_BAND_915_MHZ_FCC
  //#define FREQUENCY_BAND_866_MHZ_IN
#endif


//-- DIY "easy-to-solder" Boards

#ifdef RX_DIY_E77_E22_WLE5CC
  #define DEVICE_NAME "DIY E77 E22"
  #define DEVICE_IS_RECEIVER
  #define DEVICE_HAS_SX126x
  //#define FREQUENCY_BAND_868_MHZ
  //#define FREQUENCY_BAND_915_MHZ_FCC
  //#define FREQUENCY_BAND_866_MHZ_IN
  #define FREQUENCY_BAND_433_MHZ
  #define FREQUENCY_BAND_70_CM_HAM
  #define SX_USE_DCDC
#endif


//-------------------------------------------------------
// MLRS Feature Defines
//-------------------------------------------------------
// should go somewhere else !?

#if defined MLRS_FEATURE_433_MHZ || defined MLRS_FEATURE_70_CM || \
    defined MLRS_FEATURE_868_MHZ || defined MLRS_FEATURE_915_MHZ_FCC || defined MLRS_FEATURE_866_MHZ_IN

  #undef FREQUENCY_BAND_868_MHZ
  #undef FREQUENCY_BAND_915_MHZ_FCC
  #undef FREQUENCY_BAND_866_MHZ_IN
  #undef FREQUENCY_BAND_433_MHZ
  #undef FREQUENCY_BAND_70_CM_HAM

  #ifdef MLRS_FEATURE_868_MHZ
    #define FREQUENCY_BAND_868_MHZ
  #endif
  #ifdef MLRS_FEATURE_915_MHZ_FCC
    #define FREQUENCY_BAND_915_MHZ_FCC
  #endif
  #ifdef MLRS_FEATURE_866_MHZ_IN
    #define FREQUENCY_BAND_866_MHZ_IN
  #endif
  #ifdef MLRS_FEATURE_433_MHZ
    #define FREQUENCY_BAND_433_MHZ
  #endif
  #ifdef MLRS_FEATURE_70_CM
    #define FREQUENCY_BAND_70_CM
  #endif
#endif
