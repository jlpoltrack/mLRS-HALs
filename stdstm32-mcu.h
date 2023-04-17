#ifndef STDSTM32_LL_MCU_H
#define STDSTM32_LL_MCU_H
#ifdef __cplusplus
extern "C" {
#endif

//*******************************************************
// MCU standard interface
//*******************************************************


//-------------------------------------------------------
// BootLoaderInit
//-------------------------------------------------------

// see AN2606 for system flash start location
#ifdef STM32F1
#define ST_BOOTLOADER_ADDRESS               0x1FFFF000 // = SystemMemory: F103T8 F103CB F103RC
#elif defined STM32G4 || defined STM32L4 || defined STM32WL
#define ST_BOOTLOADER_ADDRESS               0x1FFF0000
#else
  #warning ST_BOOTLOADER_ADDRESS no defined for chip !
#endif

void (*SysMemBootJump)(void);

void BootLoaderInit(void)
{
     HAL_SuspendTick();

     /* Clear Interrupt Enable Register & Interrupt Pending Register */
     for (int i=0;i<5;i++)
     {
         NVIC->ICER[i]=0xFFFFFFFF;
         NVIC->ICPR[i]=0xFFFFFFFF;
     }

     HAL_FLASH_Unlock();

     HAL_FLASH_OB_Unlock();

     // RM0351 Rev 7 Page 93/1903
     // AN2606 Rev 44 Page 23/372
     CLEAR_BIT(FLASH->OPTR, FLASH_OPTR_nBOOT0);
     SET_BIT(FLASH->OPTR, FLASH_OPTR_nBOOT1);
     CLEAR_BIT(FLASH->OPTR, FLASH_OPTR_nSWBOOT0);

     SET_BIT(FLASH->CR, FLASH_CR_OPTSTRT);

     while(READ_BIT(FLASH->SR, FLASH_SR_BSY));

     HAL_FLASH_OB_Launch();
}


//-------------------------------------------------------
#ifdef __cplusplus
}
#endif
#endif  // STDSTM32_LL_MCU_H
