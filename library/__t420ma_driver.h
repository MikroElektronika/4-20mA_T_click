/*
    __t420ma_driver.h

-----------------------------------------------------------------------------

  This file is part of mikroSDK.
  
  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
@file   __t420ma_driver.h
@brief    4_20mA_T Driver
@mainpage 4_20mA_T Click
@{


@}

@defgroup   T420MA
@brief      4_20mA_T Click Driver
@{

| Global Library Prefix | **T420MA** |
|:---------------------:|:-----------------:|
| Version               | **1.0.0**    |
| Date                  | **jan 2018.**      |
| Developer             | **MikroE Team**     |

*/
/* -------------------------------------------------------------------------- */

#include "stdint.h"

#ifndef _T420MA_H_
#define _T420MA_H_

/** 
 * @macro T_T420MA_P
 * @brief Driver Abstract type 
 */
#define T_T420MA_P    const uint8_t*

/** @defgroup T420MA_COMPILE Compilation Config */              /** @{ */

   #define   __T420MA_DRV_SPI__                            /**<     @macro __T420MA_DRV_SPI__  @brief SPI driver selector */
//  #define   __T420MA_DRV_I2C__                            /**<     @macro __T420MA_DRV_I2C__  @brief I2C driver selector */                                          
// #define   __T420MA_DRV_UART__                           /**<     @macro __T420MA_DRV_UART__ @brief UART driver selector */ 

                                                                       /** @} */
/** @defgroup T420MA_VAR Variables */                           /** @{ */



                                                                       /** @} */
/** @defgroup T420MA_TYPES Types */                             /** @{ */



                                                                       /** @} */
#ifdef __cplusplus
extern "C"{
#endif

/** @defgroup T420MA_INIT Driver Initialization */              /** @{ */

#ifdef   __T420MA_DRV_SPI__
void t420ma_spiDriverInit(T_T420MA_P gpioObj, T_T420MA_P spiObj);
#endif
#ifdef   __T420MA_DRV_I2C__
void t420ma_i2cDriverInit(T_T420MA_P gpioObj, T_T420MA_P i2cObj, uint8_t slave);
#endif
#ifdef   __T420MA_DRV_UART__
void t420ma_uartDriverInit(T_T420MA_P gpioObj, T_T420MA_P uartObj);
#endif

// GPIO Only Drivers - remove in other cases
void t420ma_gpioDriverInit(T_T420MA_P gpioObj);
                                                                       /** @} */
/** @defgroup T420MA_FUNC Driver Functions */                   /** @{ */


/**
 * @brief t420ma_dacOutput
 *
 * @param[in]  valueDAC               12 bit value from 0 to 4095  
 *
 * This function sets the output of DAC.
 */


void t420ma_dacOutput(uint16_t valueDAC);

/**
 * @brief t40ma_setVout
 *
 * @param[in]   Iout           Output amperage in steps of 0.1mA
 * This function sets the output current to selected value.
 *
 */

void t420ma_setIout(uint8_t Iout);





                                                                       /** @} */
#ifdef __cplusplus
} // extern "C"
#endif
#endif

/**
    @example Click_4_20mA_T_STM.c
    @example Click_4_20mA_T_TIVA.c
    @example Click_4_20mA_T_CEC.c
    @example Click_4_20mA_T_KINETIS.c
    @example Click_4_20mA_T_MSP.c
    @example Click_4_20mA_T_PIC.c
    @example Click_4_20mA_T_PIC32.c
    @example Click_4_20mA_T_DSPIC.c
    @example Click_4_20mA_T_AVR.c
    @example Click_4_20mA_T_FT90x.c
    @example Click_4_20mA_T_STM.mbas
    @example Click_4_20mA_T_TIVA.mbas
    @example Click_4_20mA_T_CEC.mbas
    @example Click_4_20mA_T_KINETIS.mbas
    @example Click_4_20mA_T_MSP.mbas
    @example Click_4_20mA_T_PIC.mbas
    @example Click_4_20mA_T_PIC32.mbas
    @example Click_4_20mA_T_DSPIC.mbas
    @example Click_4_20mA_T_AVR.mbas
    @example Click_4_20mA_T_FT90x.mbas
    @example Click_4_20mA_T_STM.mpas
    @example Click_4_20mA_T_TIVA.mpas
    @example Click_4_20mA_T_CEC.mpas
    @example Click_4_20mA_T_KINETIS.mpas
    @example Click_4_20mA_T_MSP.mpas
    @example Click_4_20mA_T_PIC.mpas
    @example Click_4_20mA_T_PIC32.mpas
    @example Click_4_20mA_T_DSPIC.mpas
    @example Click_4_20mA_T_AVR.mpas
    @example Click_4_20mA_T_FT90x.mpas
*/                                                                     /** @} */
/* -------------------------------------------------------------------------- */
/*
  __t420ma_driver.h

  Copyright (c) 2017, MikroElektonika - http://www.mikroe.com

  All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by the MikroElektonika.

4. Neither the name of the MikroElektonika nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY MIKROELEKTRONIKA ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL MIKROELEKTRONIKA BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

----------------------------------------------------------------------------- */

