/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : DMA_controller.c
**     Project     : HEXIWEAR_OLED_sensors_RTOS
**     Processor   : MK64FN1M0VDC12
**     Component   : fsl_edma
**     Version     : Component 1.2.0, Driver 01.00, CPU db: 3.00.000
**     Repository  : KSDK 1.2.0
**     Compiler    : GNU C Compiler
**     Date/Time   : 2016-03-04, 12:30, # CodeGen: 0
**
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file DMA_controller.c
** @version 01.00
*/         
/*!
**  @addtogroup DMA_controller_module DMA_controller module documentation
**  @{
*/         

/* DMA_controller. */

#include "DMA_controller.h"

edma_state_t DMA_controller_State;
  
const edma_user_config_t DMA_controller_InitConfig0 = {
  .chnArbitration = kEDMAChnArbitrationFixedPriority,
  .notHaltOnError = false,
};


/*! @brief Dma channel 0 ISR */
void DMA0_IRQHandler(void){
   EDMA_DRV_IRQHandler(0U);
}
/*! @brief Dma channel 1 ISR */
void DMA1_IRQHandler(void){
   EDMA_DRV_IRQHandler(1U);
}
/*! @brief Dma channel 2 ISR */
void DMA2_IRQHandler(void){
   EDMA_DRV_IRQHandler(2U);
}
/*! @brief Dma channel 3 ISR */
void DMA3_IRQHandler(void){
   EDMA_DRV_IRQHandler(3U);
}
/*! @brief Dma channel 4 ISR */
void DMA4_IRQHandler(void){
   EDMA_DRV_IRQHandler(4U);
}
/*! @brief Dma channel 5 ISR */
void DMA5_IRQHandler(void){
   EDMA_DRV_IRQHandler(5U);
}
/*! @brief Dma channel 6 ISR */
void DMA6_IRQHandler(void){
   EDMA_DRV_IRQHandler(6U);
}
/*! @brief Dma channel 7 ISR */
void DMA7_IRQHandler(void){
   EDMA_DRV_IRQHandler(7U);
}
/*! @brief Dma channel 8 ISR */
void DMA8_IRQHandler(void){
   EDMA_DRV_IRQHandler(8U);
}
/*! @brief Dma channel 9 ISR */
void DMA9_IRQHandler(void){
   EDMA_DRV_IRQHandler(9U);
}
/*! @brief Dma channel 10 ISR */
void DMA10_IRQHandler(void){
   EDMA_DRV_IRQHandler(10U);
}
/*! @brief Dma channel 11 ISR */
void DMA11_IRQHandler(void){
   EDMA_DRV_IRQHandler(11U);
}
/*! @brief Dma channel 12 ISR */
void DMA12_IRQHandler(void){
   EDMA_DRV_IRQHandler(12U);
}
/*! @brief Dma channel 13 ISR */
void DMA13_IRQHandler(void){
   EDMA_DRV_IRQHandler(13U);
}
/*! @brief Dma channel 14 ISR */
void DMA14_IRQHandler(void){
   EDMA_DRV_IRQHandler(14U);
}
/*! @brief Dma channel 15 ISR */
void DMA15_IRQHandler(void){
   EDMA_DRV_IRQHandler(15U);
}
  
/* END DMA_controller. */

/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/