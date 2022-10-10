// License       : License.txt
// Specifications: Spec-MAX6605MXKV.pdf
/*-- File Header Comment Start -----------------------------------------------*/
// File Name        : MAX6605MXKV.h
// Reason for change: 01.00.00 : 07/10/'22 : New Release
// Nickname         : Blue Dragon
/*-- File Header Comment End -------------------------------------------------*/

#ifndef __MAX6605MXKV_H__
#define __MAX6605MXKV_H__

#include "user_define.h"

// Components number
#define iMAX6605MXKV            111U                    // Maxim Integrated MAX6605MXK/V

// MAX6605MXKV System Parts definitions
#define iMAX6605MXKV_xoff       0.744F                  // X offset [V]
#define iMAX6605MXKV_yoff       0.0F                    // Y offset [degree celsius]
#define iMAX6605MXKV_gain       0.0119F                 // Gain [V/degree celsius]
#define iMAX6605MXKV_max        85.0F                   // Temperature Max [degree celsius]
#define iMAX6605MXKV_min        -40.0F                  // Temperature Min [degree celsius]

extern const tbl_adc_t tbl_MAX6605MXKV;

#endif /*__MAX6605MXKV_H__*/
