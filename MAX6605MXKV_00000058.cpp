// License       : License.txt
// Specifications: Spec-00000058.pdf
/*-- File Header Comment Start -----------------------------------------------*/
// File Name        : MAX6605MXKV_00000058.cpp
// BSL              : 00000058
// Model number     : Maxim Integrated MAX6605MXKV
// Spec               Component type       : ADC
//                    OS                   : Mbed
//                    Calculation          : Floating-point
//                    Conversion type      : Linear
//                    Moving average filter: Moving average filter select
//                    Diagnosis            : Range (Min to Max)
// Reason for change: 01.00.00 : 07/10/'22 : New Release
// Nickname         : Blue Dragon
/*-- File Header Comment End -------------------------------------------------*/

#include "MAX6605MXKV.h"

AnalogIn MAX6605MXKV_adc( iMAX6605MXKV_pin , iVref );   // AnalogIn object

// Main Function
pp2ap_adc_t MAX6605MXKV_00000058( void )
{
        pp2ap_adc_t res = pp_00000058( MAX6605MXKV_adc , tbl_MAX6605MXKV );
        return( res );
}
