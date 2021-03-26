/**
  @Generated WWDT Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    watchdog.h

  @Summary:
    This is the watchdog.h file generated using CCL

  @Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Driver Version    :  2.00
    The generated drivers are tested against the following:
        Compiler          :  XC8 v2.20
        MPLAB             :  MPLAB X 5.40
*/

/*
Copyright (c) [2012-2020] Microchip Technology Inc.  

    All rights reserved.

    You are permitted to use the accompanying software and its derivatives 
    with Microchip products. See the Microchip license agreement accompanying 
    this software, if any, for additional info regarding your rights and 
    obligations.
    
    MICROCHIP SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT 
    WARRANTY OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT 
    LIMITATION, ANY WARRANTY OF MERCHANTABILITY, TITLE, NON-INFRINGEMENT 
    AND FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT WILL MICROCHIP OR ITS
    LICENSORS BE LIABLE OR OBLIGATED UNDER CONTRACT, NEGLIGENCE, STRICT 
    LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR OTHER LEGAL EQUITABLE 
    THEORY FOR ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES INCLUDING BUT NOT 
    LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT OR CONSEQUENTIAL DAMAGES, 
    OR OTHER SIMILAR COSTS. 
    
    To the fullest extend allowed by law, Microchip and its licensors 
    liability will not exceed the amount of fees, if any, that you paid 
    directly to Microchip to use this software. 
    
    THIRD PARTY SOFTWARE:  Notwithstanding anything to the contrary, any 
    third party software accompanying this software is subject to the terms 
    and conditions of the third party's license agreement.  To the extent 
    required by third party licenses covering such third party software, 
    the terms of such license will apply in lieu of the terms provided in 
    this notice or applicable license.  To the extent the terms of such 
    third party licenses prohibit any of the restrictions described here, 
    such restrictions will not apply to such third party software.
*/

#ifndef WATCHDOG_H
#define WATCHDOG_H

 /**
   Section: Included Files
 */

#include <xc.h>
#include <stdbool.h>
#include <stdint.h>

#define WDTCWS  7
#define WDTCCS  16
#define WDTCPS  24


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Initializes the WWDT to the default states configured in the
 *                  MCC GUI
 * @Example
    WWDT_Initialize();
 */
void WWDT_Initialize(void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
   Enable the WWDT by setting the SEN bit.
 * @Example
    WWDT_SoftEnable();
 */
void WWDT_SoftEnable(void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
   Disable the WWDT by clearing the SEN bit.
 * @Example
    WWDT_SoftDisable();
 */
void WWDT_SoftDisable(void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
   Disable the interrupt, arm the WWDT by reading back the WDTCON0 register
 * clear the WWDT and enable the interrupt.
 * @Example
    WWDT_TimerClear();
 */
void WWDT_TimerClear(void);

/**
 * @Param
    none
 * @Returns
   High --> WWDT reset has not occurred. 
 * Low  --> WWDT reset has  occurred.
 * @Description
    Returns the status of whether the WWDT reset has occurred or not.
 * @Example
    if(WWDT_TimeOutStatusGet())
 */
bool WWDT_TimeOutStatusGet(void);

/**
 * @Param
    none
 * @Returns
   High --> WWDT window violation reset has not occurred. 
 * Low  --> WWDT window violation reset has  occurred.
 * @Description
    Returns the status of, whether the WWDT window violation 
 *  reset has occurred or not.
 * @Example
    if(WWDT_WindowViolationStatusGet())
 */
bool WWDT_WindowViolationStatusGet(void);  

#endif	/* WATCHDOG_H */
/**
 End of File
*/