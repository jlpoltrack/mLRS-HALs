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

//Hack for G4, Enable Boot0 option bytes after flashing

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
