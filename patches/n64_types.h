#ifndef __N64_TYPES_H__
#define __N64_TYPES_H__

#define va_list __builtin_va_list
#define va_start __builtin_va_start
#define va_arg __builtin_va_arg
#define va_end __builtin_va_end

typedef unsigned int size_t;

typedef unsigned char u8; 
typedef unsigned short u16; 
typedef unsigned long u32; 
typedef unsigned long long u64; 

typedef signed char s8; 
typedef short s16; 
typedef long s32; 
typedef long long s64; 

typedef volatile unsigned char vu8; 
typedef volatile unsigned short vu16; 
typedef volatile unsigned long vu32; 
typedef volatile unsigned long long vu64; 

typedef volatile signed char vs8; 
typedef volatile short vs16; 
typedef volatile long vs32; 
typedef volatile long long vs64; 

typedef float f32; 
typedef double f64; 

#define TRUE 1
#define FALSE 0
#define NULL 0

#endif
