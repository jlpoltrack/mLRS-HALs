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

// Note: A device may support multiple frequency bands.


//-- FrsKy R9 system

#ifdef RX_R9MX_868_L433CB
  #define DEVICE_NAME "Frsky R9MX"
  #define DEVICE_IS_RECEIVER
  #define DEVICE_HAS_SX127x
  #define FREQUENCY_BAND_868_MHZ
  #define FREQUENCY_BAND_915_MHZ_FCC
#endif

#ifdef RX_R9M_868_F103C8
  #define DEVICE_NAME "Frsky R9M"
  #define DEVICE_IS_RECEIVER
  #define DEVICE_HAS_SX127x
  #define FREQUENCY_BAND_868_MHZ
  #define FREQUENCY_BAND_915_MHZ_FCC
#endif

#ifdef RX_R9MM_868_F103RB
  #define DEVICE_NAME "Frsky R9MM"
  #define DEVICE_IS_RECEIVER
  #define DEVICE_HAS_SX127x
  #define FREQUENCY_BAND_868_MHZ
  #define FREQUENCY_BAND_915_MHZ_FCC
#endif


#ifdef TX_R9M_868_F103C8
  #define DEVICE_NAME "Frsky R9M"
  #define DEVICE_IS_TRANSMITTER
  #define DEVICE_HAS_SX127x
  #define FREQUENCY_BAND_868_MHZ
  #define FREQUENCY_BAND_915_MHZ_FCC
#endif

#ifdef TX_R9MX_868_L433CB
  #define DEVICE_NAME "Frsky R9MX"
  #define DEVICE_IS_TRANSMITTER
  #define DEVICE_HAS_SX127x
  #define FREQUENCY_BAND_868_MHZ
  #define FREQUENCY_BAND_915_MHZ_FCC
#endif


//-- SeeedStudio WioE5 boards

#ifdef RX_WIO_E5_GROVE_WLE5JC
  #define DEVICE_NAME "WioE5 Grove WLE5JC"
  #define DEVICE_IS_RECEIVER
  #define DEVICE_HAS_SX126x
  #define FREQUENCY_BAND_868_MHZ
  #define FREQUENCY_BAND_915_MHZ_FCC
#endif

#ifdef RX_WIO_E5_MINI_WLE5JC
  #define DEVICE_NAME "WioE5 Mini WLE5JC"
  #define DEVICE_IS_RECEIVER
  #define DEVICE_HAS_SX126x
  #define FREQUENCY_BAND_868_MHZ
  #define FREQUENCY_BAND_915_MHZ_FCC
#endif


#ifdef TX_WIO_E5_MINI_WLE5JC
  #define DEVICE_NAME "WioE5 Mini WLE5JC"
  #define DEVICE_IS_TRANSMITTER
  #define DEVICE_HAS_SX126x
  #define FREQUENCY_BAND_868_MHZ
  #define FREQUENCY_BAND_915_MHZ_FCC
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
  #define SX_USE_DCDC
  #define SX2_USE_DCDC
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
  //#define SX_USE_DCDC
  //#define SX2_USE_DCDC
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

#ifdef TX_DIY_SXDUAL_BOARD02_G491RE
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
  #define FREQUENCY_BAND_70_CM_HAM
  //#define SX_USE_DCDC
#endif

#ifdef TX_DIY_E22_G431KB
  #define DEVICE_NAME "DIY E22 G431KB"
  #define DEVICE_IS_TRANSMITTER
  #define DEVICE_HAS_SX126x
  #define FREQUENCY_BAND_70_CM_HAM
  //#define SX_USE_DCDC
#endif

#ifdef TX_DIY_E22DUAL_MODULE02_G491RE
  #define DEVICE_NAME "DIY DualE22 G491RE"
  #define DEVICE_IS_TRANSMITTER
  #define DEVICE_HAS_SX126x
  #define FREQUENCY_BAND_868_MHZ
  #define FREQUENCY_BAND_915_MHZ_FCC
#endif


#ifdef RX_DIY_WIOE5_E22_WLE5JC
  #define DEVICE_NAME "DIY WioE5 E22"
  #define DEVICE_IS_RECEIVER
  #define DEVICE_HAS_SX126x
  #define FREQUENCY_BAND_868_MHZ
  #define FREQUENCY_BAND_915_MHZ_FCC
#endif

#ifdef TX_DIY_WIOE5_E22_WLE5JC
  #define DEVICE_NAME "DIY WioE5 E22"
  #define DEVICE_IS_TRANSMITTER
  #define DEVICE_HAS_SX126x
  #define FREQUENCY_BAND_868_MHZ
  #define FREQUENCY_BAND_915_MHZ_FCC
#endif


//-- DIY "easy-to-solder" Boards

#ifdef RX_DIY_E77_E22_WLE5CC
  #define DEVICE_NAME "DIY E77 E22"
  #define DEVICE_IS_RECEIVER
  #define DEVICE_HAS_SX126x
  #define FREQUENCY_BAND_70_CM_HAM
#endif
