/*
 * pkatform_types.h
 *
 *  Created on: Sep 14, 2023
 *      Author: CRIZMA MEGA STORE
 */

#ifndef PKATFORM_TYPES_H_
#define PKATFORM_TYPES_H_

#include <stdbool.h>
#include <stdint.h>

#define CPU_TYPE  CPU_TYPE_32
//#define CPU_TYPE  CPU_TYPE_16
//#define CPU_TYPE  CPU_TYPE_64
//#define CPU_TYPE  CPU_TYPE_8
#define CPU_BIT_ORDER  MSB_FIRST
//#define CPU_BIT_ORDER  LSB_FIRST
#define CPU_BYTE_ORDER  HIGH_BYTE_FIRST
//#define CPU_BYTE_ORDER  LOW_BYTE_FIRST

#ifndef _bool
#define _bool unsigned int
#endif

#ifndef FALSE
#define FALSE (boolean)false
#endif
#ifndef TRUE
#define TRUE (boolean)true
#endif

typedef bool boolean;
typedef uint8_t uint8;
typedef uint16_t uint16;
typedef uint32_t uint32;
typedef uint64_t uint64;
typedef int8_t     sint8;
typedef int16_t                             sint16;
typedef int32_t sint32;
typedef int64_t sint64;
//typedef uint_least8_t    uint8_least;
//typedef uint_least16_t uint16_least;
//typedef uint_least32_t uint32_least;







#endif /* PKATFORM_TYPES_H_ */
