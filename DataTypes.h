/*

Copyright (c) Future Technology Devices International 2014

THIS SOFTWARE IS PROVIDED BY FUTURE TECHNOLOGY DEVICES INTERNATIONAL LIMITED "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
FUTURE TECHNOLOGY DEVICES INTERNATIONAL LIMITED BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
OF SUBSTITUTE GOODS OR SERVICES LOSS OF USE, DATA, OR PROFITS OR BUSINESS INTERRUPTION)
HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR
TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

FTDI DRIVERS MAY BE USED ONLY IN CONJUNCTION WITH PRODUCTS BASED ON FTDI PARTS.

FTDI DRIVERS MAY BE DISTRIBUTED IN ANY FORM AS LONG AS LICENSE INFORMATION IS NOT MODIFIED.

IF A CUSTOM VENDOR ID AND/OR PRODUCT ID OR DESCRIPTION STRING ARE USED, IT IS THE
RESPONSIBILITY OF THE PRODUCT MANUFACTURER TO MAINTAIN ANY CHANGES AND SUBSEQUENT WHQL
RE-CERTIFICATION AS A RESULT OF MAKING THESE CHANGES.

Abstract:

This file contains is functions for all UI fields.

Author : FTDI 

Revision History: 
0.1 - date 2013.04.24 - initial version
0.2 - date 2014.04.28 - Split in individual files according to platform

*/
#ifndef _DATATYPES_H_
#define _DATATYPES_H_


//#define FALSE           (0)
//#define 1            (1)

//typedef byte uint8_t;
typedef char char8_t;
typedef signed char schar8_t;
typedef unsigned char uchar8_t;
//typedef int  int16_t;
//typedef word uint16_t;
//typedef unsigned long uint32_t;
//typedef long int32_t;
//typedef void void_t;

//typedef boolean bool_t;

typedef const unsigned char  prog_uchar8_t;
typedef const char   prog_char8_t;
//typedef const unsigned int prog_uint16_t;

//#define delay(x) delay(x)

//#define PROGMEM PROGMEM
//#define pgm_read_byte_near pgm_read_byte_near
//#define pgm_read_byte pgm_read_byte
//#define pgm_read_word pgm_read_word
//#define random(x)		(random(x))

//#define 1     (1)
//#define FALSE    (0)

#endif /*_DATATYPES_H_*/

/* Nothing beyond this*/





