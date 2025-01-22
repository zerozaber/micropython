# 0 "<stdin>"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "<stdin>"
# 29 "<stdin>"
# 1 "/home/zero/micropython/py/mpconfig.h" 1
# 91 "/home/zero/micropython/py/mpconfig.h"
# 1 "/home/zero/micropython/ports/rp2/mpconfigport.h" 1
# 29 "/home/zero/micropython/ports/rp2/mpconfigport.h"
# 1 "/usr/lib/gcc/arm-none-eabi/13.2.1/include/stdint.h" 1 3 4
# 34 "/usr/lib/gcc/arm-none-eabi/13.2.1/include/stdint.h" 3 4

# 34 "/usr/lib/gcc/arm-none-eabi/13.2.1/include/stdint.h" 3 4
typedef signed char int8_t;


typedef short int int16_t;


typedef long int int32_t;


typedef long long int int64_t;


typedef unsigned char uint8_t;


typedef short unsigned int uint16_t;


typedef long unsigned int uint32_t;


typedef long long unsigned int uint64_t;




typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef long int int_least32_t;
typedef long long int int_least64_t;
typedef unsigned char uint_least8_t;
typedef short unsigned int uint_least16_t;
typedef long unsigned int uint_least32_t;
typedef long long unsigned int uint_least64_t;



typedef int int_fast8_t;
typedef int int_fast16_t;
typedef int int_fast32_t;
typedef long long int int_fast64_t;
typedef unsigned int uint_fast8_t;
typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
typedef long long unsigned int uint_fast64_t;




typedef int intptr_t;


typedef unsigned int uintptr_t;




typedef long long int intmax_t;
typedef long long unsigned int uintmax_t;
# 30 "/home/zero/micropython/ports/rp2/mpconfigport.h" 2
# 1 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_flash/include/hardware/flash.h" 1
# 10 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_flash/include/hardware/flash.h"
# 1 "/home/zero/micropython/lib/pico-sdk/src/common/pico_base_headers/include/pico.h" 1
# 26 "/home/zero/micropython/lib/pico-sdk/src/common/pico_base_headers/include/pico.h"
# 1 "/home/zero/micropython/lib/pico-sdk/src/common/pico_base_headers/include/pico/types.h" 1
# 12 "/home/zero/micropython/lib/pico-sdk/src/common/pico_base_headers/include/pico/types.h"
# 1 "/home/zero/micropython/lib/pico-sdk/src/common/pico_base_headers/include/pico/assert.h" 1
# 10 "/home/zero/micropython/lib/pico-sdk/src/common/pico_base_headers/include/pico/assert.h"
# 1 "/usr/lib/gcc/arm-none-eabi/13.2.1/include/stdbool.h" 1 3 4
# 11 "/home/zero/micropython/lib/pico-sdk/src/common/pico_base_headers/include/pico/assert.h" 2







# 1 "/usr/include/newlib/assert.h" 1 3
# 9 "/usr/include/newlib/assert.h" 3
# 1 "/usr/include/newlib/_ansi.h" 1 3
# 10 "/usr/include/newlib/_ansi.h" 3
# 1 "/usr/include/newlib/newlib.h" 1 3
# 10 "/usr/include/newlib/newlib.h" 3
# 1 "/usr/include/newlib/_newlib_version.h" 1 3
# 11 "/usr/include/newlib/newlib.h" 2 3
# 11 "/usr/include/newlib/_ansi.h" 2 3
# 1 "/usr/include/newlib/sys/config.h" 1 3



# 1 "/usr/include/newlib/machine/ieeefp.h" 1 3
# 5 "/usr/include/newlib/sys/config.h" 2 3
# 1 "/usr/include/newlib/sys/features.h" 1 3
# 6 "/usr/include/newlib/sys/config.h" 2 3
# 12 "/usr/include/newlib/_ansi.h" 2 3
# 10 "/usr/include/newlib/assert.h" 2 3
# 39 "/usr/include/newlib/assert.h" 3
void __assert (const char *, int, const char *)
     __attribute__ ((__noreturn__));
void __assert_func (const char *, int, const char *, const char *)
     __attribute__ ((__noreturn__));
# 19 "/home/zero/micropython/lib/pico-sdk/src/common/pico_base_headers/include/pico/assert.h" 2
# 13 "/home/zero/micropython/lib/pico-sdk/src/common/pico_base_headers/include/pico/types.h" 2



# 1 "/usr/lib/gcc/arm-none-eabi/13.2.1/include/stddef.h" 1 3 4
# 145 "/usr/lib/gcc/arm-none-eabi/13.2.1/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 214 "/usr/lib/gcc/arm-none-eabi/13.2.1/include/stddef.h" 3 4
typedef unsigned int size_t;
# 329 "/usr/lib/gcc/arm-none-eabi/13.2.1/include/stddef.h" 3 4
typedef unsigned int wchar_t;
# 425 "/usr/lib/gcc/arm-none-eabi/13.2.1/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 436 "/usr/lib/gcc/arm-none-eabi/13.2.1/include/stddef.h" 3 4
} max_align_t;
# 17 "/home/zero/micropython/lib/pico-sdk/src/common/pico_base_headers/include/pico/types.h" 2


# 18 "/home/zero/micropython/lib/pico-sdk/src/common/pico_base_headers/include/pico/types.h"
typedef unsigned int uint;
# 43 "/home/zero/micropython/lib/pico-sdk/src/common/pico_base_headers/include/pico/types.h"
typedef uint64_t absolute_time_t;
# 52 "/home/zero/micropython/lib/pico-sdk/src/common/pico_base_headers/include/pico/types.h"
static inline uint64_t to_us_since_boot(absolute_time_t t) {



    return t;

}
# 67 "/home/zero/micropython/lib/pico-sdk/src/common/pico_base_headers/include/pico/types.h"
static inline void update_us_since_boot(absolute_time_t *t, uint64_t us_since_boot) {




    *t = us_since_boot;

}







static inline absolute_time_t from_us_since_boot(uint64_t us_since_boot) {
    absolute_time_t t;
    update_us_since_boot(&t, us_since_boot);
    return t;
}
# 107 "/home/zero/micropython/lib/pico-sdk/src/common/pico_base_headers/include/pico/types.h"
typedef struct {
    int16_t year;
    int8_t month;
    int8_t day;
    int8_t dotw;
    int8_t hour;
    int8_t min;
    int8_t sec;
} datetime_t;
# 27 "/home/zero/micropython/lib/pico-sdk/src/common/pico_base_headers/include/pico.h" 2
# 1 "/home/zero/micropython/ports/rp2/build-RPI_PICO/generated/pico_base/pico/version.h" 1
# 28 "/home/zero/micropython/lib/pico-sdk/src/common/pico_base_headers/include/pico.h" 2





# 1 "/home/zero/micropython/lib/pico-sdk/src/common/pico_base_headers/include/pico/config.h" 1
# 19 "/home/zero/micropython/lib/pico-sdk/src/common/pico_base_headers/include/pico/config.h"
# 1 "/home/zero/micropython/ports/rp2/build-RPI_PICO/generated/pico_base/pico/config_autogen.h" 1






# 1 "/home/zero/micropython/lib/pico-sdk/src/boards/include/boards/pico.h" 1
# 8 "/home/zero/micropython/ports/rp2/build-RPI_PICO/generated/pico_base/pico/config_autogen.h" 2
# 1 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/cmsis/include/cmsis/rename_exceptions.h" 1
# 9 "/home/zero/micropython/ports/rp2/build-RPI_PICO/generated/pico_base/pico/config_autogen.h" 2
# 20 "/home/zero/micropython/lib/pico-sdk/src/common/pico_base_headers/include/pico/config.h" 2
# 34 "/home/zero/micropython/lib/pico-sdk/src/common/pico_base_headers/include/pico.h" 2

# 1 "/home/zero/micropython/lib/pico-sdk/src/rp2040/pico_platform/include/pico/platform.h" 1
# 23 "/home/zero/micropython/lib/pico-sdk/src/rp2040/pico_platform/include/pico/platform.h"
# 1 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_platform_compiler/include/pico/platform/compiler.h" 1
# 18 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_platform_compiler/include/pico/platform/compiler.h"
# 1 "/home/zero/micropython/lib/pico-sdk/src/rp2040/hardware_regs/include/hardware/platform_defs.h" 1
# 19 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_platform_compiler/include/pico/platform/compiler.h" 2




# 1 "/usr/include/newlib/sys/cdefs.h" 1 3
# 45 "/usr/include/newlib/sys/cdefs.h" 3
# 1 "/usr/include/newlib/machine/_default_types.h" 1 3
# 41 "/usr/include/newlib/machine/_default_types.h" 3

# 41 "/usr/include/newlib/machine/_default_types.h" 3
typedef signed char __int8_t;

typedef unsigned char __uint8_t;
# 55 "/usr/include/newlib/machine/_default_types.h" 3
typedef short int __int16_t;

typedef short unsigned int __uint16_t;
# 77 "/usr/include/newlib/machine/_default_types.h" 3
typedef long int __int32_t;

typedef long unsigned int __uint32_t;
# 103 "/usr/include/newlib/machine/_default_types.h" 3
typedef long long int __int64_t;

typedef long long unsigned int __uint64_t;
# 134 "/usr/include/newlib/machine/_default_types.h" 3
typedef signed char __int_least8_t;

typedef unsigned char __uint_least8_t;
# 160 "/usr/include/newlib/machine/_default_types.h" 3
typedef short int __int_least16_t;

typedef short unsigned int __uint_least16_t;
# 182 "/usr/include/newlib/machine/_default_types.h" 3
typedef long int __int_least32_t;

typedef long unsigned int __uint_least32_t;
# 200 "/usr/include/newlib/machine/_default_types.h" 3
typedef long long int __int_least64_t;

typedef long long unsigned int __uint_least64_t;
# 214 "/usr/include/newlib/machine/_default_types.h" 3
typedef long long int __intmax_t;







typedef long long unsigned int __uintmax_t;







typedef int __intptr_t;

typedef unsigned int __uintptr_t;
# 46 "/usr/include/newlib/sys/cdefs.h" 2 3

# 1 "/usr/lib/gcc/arm-none-eabi/13.2.1/include/stddef.h" 1 3 4
# 48 "/usr/include/newlib/sys/cdefs.h" 2 3
# 24 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_platform_compiler/include/pico/platform/compiler.h" 2
# 75 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_platform_compiler/include/pico/platform/compiler.h"
# 1 "/home/zero/micropython/lib/pico-sdk/src/common/pico_base_headers/include/pico/types.h" 1
# 76 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_platform_compiler/include/pico/platform/compiler.h" 2
# 173 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_platform_compiler/include/pico/platform/compiler.h"
__inline__ __attribute__((__always_inline__)) 
# 173 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_platform_compiler/include/pico/platform/compiler.h"
              static void __compiler_memory_barrier(void) {
    __asm volatile (".syntax unified\n" "" : : : "memory");
}
# 24 "/home/zero/micropython/lib/pico-sdk/src/rp2040/pico_platform/include/pico/platform.h" 2
# 1 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_platform_sections/include/pico/platform/sections.h" 1
# 25 "/home/zero/micropython/lib/pico-sdk/src/rp2040/pico_platform/include/pico/platform.h" 2
# 1 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_platform_panic/include/pico/platform/panic.h" 1
# 20 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_platform_panic/include/pico/platform/panic.h"
void __attribute__((noreturn)) panic_unsupported(void);
# 31 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_platform_panic/include/pico/platform/panic.h"
void __attribute__((noreturn)) panic(const char *fmt, ...);
# 26 "/home/zero/micropython/lib/pico-sdk/src/rp2040/pico_platform/include/pico/platform.h" 2
# 1 "/home/zero/micropython/lib/pico-sdk/src/rp2040/hardware_regs/include/hardware/regs/addressmap.h" 1
# 27 "/home/zero/micropython/lib/pico-sdk/src/rp2040/pico_platform/include/pico/platform.h" 2
# 1 "/home/zero/micropython/lib/pico-sdk/src/rp2040/hardware_regs/include/hardware/regs/sio.h" 1
# 28 "/home/zero/micropython/lib/pico-sdk/src/rp2040/pico_platform/include/pico/platform.h" 2
# 87 "/home/zero/micropython/lib/pico-sdk/src/rp2040/pico_platform/include/pico/platform.h"
static 
# 87 "/home/zero/micropython/lib/pico-sdk/src/rp2040/pico_platform/include/pico/platform.h" 3
      __inline__ __attribute__((__always_inline__)) 
# 87 "/home/zero/micropython/lib/pico-sdk/src/rp2040/pico_platform/include/pico/platform.h"
                     void tight_loop_contents(void) {}
# 103 "/home/zero/micropython/lib/pico-sdk/src/rp2040/pico_platform/include/pico/platform.h"
static inline void busy_wait_at_least_cycles(uint32_t minimum_cycles) {
    __asm volatile (".syntax unified\n" "1: subs %0, #3\n" "bcs 1b\n" : "+l" (minimum_cycles) : : "cc", "memory")



     ;
}







static inline 
# 117 "/home/zero/micropython/lib/pico-sdk/src/rp2040/pico_platform/include/pico/platform.h" 3 4
             _Bool 
# 117 "/home/zero/micropython/lib/pico-sdk/src/rp2040/pico_platform/include/pico/platform.h"
                  running_on_fpga(void) {return 
# 117 "/home/zero/micropython/lib/pico-sdk/src/rp2040/pico_platform/include/pico/platform.h" 3 4
                                                0
# 117 "/home/zero/micropython/lib/pico-sdk/src/rp2040/pico_platform/include/pico/platform.h"
                                                     ;}







static 
# 125 "/home/zero/micropython/lib/pico-sdk/src/rp2040/pico_platform/include/pico/platform.h" 3
      __inline__ __attribute__((__always_inline__)) 
# 125 "/home/zero/micropython/lib/pico-sdk/src/rp2040/pico_platform/include/pico/platform.h"
                     void __breakpoint(void) {
    __asm volatile (".syntax unified\n" "bkpt #0" : : : "memory");
}







# 134 "/home/zero/micropython/lib/pico-sdk/src/rp2040/pico_platform/include/pico/platform.h" 3
__inline__ __attribute__((__always_inline__)) 
# 134 "/home/zero/micropython/lib/pico-sdk/src/rp2040/pico_platform/include/pico/platform.h"
              static uint get_core_num(void) {
    return (*(uint32_t *) (0xd0000000u + 0x00000000u));
}
# 151 "/home/zero/micropython/lib/pico-sdk/src/rp2040/pico_platform/include/pico/platform.h"
static 
# 151 "/home/zero/micropython/lib/pico-sdk/src/rp2040/pico_platform/include/pico/platform.h" 3
      __inline__ __attribute__((__always_inline__)) 
# 151 "/home/zero/micropython/lib/pico-sdk/src/rp2040/pico_platform/include/pico/platform.h"
                     uint __get_current_exception(void) {
    uint exception;
    __asm volatile (".syntax unified\n" "mrs %0, ipsr" : "=l" (exception));
    return exception;
}
# 164 "/home/zero/micropython/lib/pico-sdk/src/rp2040/pico_platform/include/pico/platform.h"
uint8_t rp2040_chip_version(void);





static inline uint8_t rp2040_rom_version(void) {
    
# 171 "/home/zero/micropython/lib/pico-sdk/src/rp2040/pico_platform/include/pico/platform.h"
#pragma GCC diagnostic push
    
# 172 "/home/zero/micropython/lib/pico-sdk/src/rp2040/pico_platform/include/pico/platform.h"
#pragma GCC diagnostic ignored "-Warray-bounds"
    return *(uint8_t*)0x13;
    
# 174 "/home/zero/micropython/lib/pico-sdk/src/rp2040/pico_platform/include/pico/platform.h"
#pragma GCC diagnostic pop
}
# 187 "/home/zero/micropython/lib/pico-sdk/src/rp2040/pico_platform/include/pico/platform.h"

# 187 "/home/zero/micropython/lib/pico-sdk/src/rp2040/pico_platform/include/pico/platform.h" 3
__inline__ __attribute__((__always_inline__)) 
# 187 "/home/zero/micropython/lib/pico-sdk/src/rp2040/pico_platform/include/pico/platform.h"
              static int32_t __mul_instruction(int32_t a, int32_t b) {



__asm (".syntax unified\n" "muls %0, %1" : "+l" (a) : "l" (b) : "cc");

return a;
}
# 36 "/home/zero/micropython/lib/pico-sdk/src/common/pico_base_headers/include/pico.h" 2
# 1 "/home/zero/micropython/lib/pico-sdk/src/common/pico_base_headers/include/pico/error.h" 1
# 22 "/home/zero/micropython/lib/pico-sdk/src/common/pico_base_headers/include/pico/error.h"
enum pico_error_codes {
    PICO_OK = 0,
    PICO_ERROR_NONE = 0,
    PICO_ERROR_GENERIC = -1,
    PICO_ERROR_TIMEOUT = -2,
    PICO_ERROR_NO_DATA = -3,
    PICO_ERROR_NOT_PERMITTED = -4,
    PICO_ERROR_INVALID_ARG = -5,
    PICO_ERROR_IO = -6,
    PICO_ERROR_BADAUTH = -7,
    PICO_ERROR_CONNECT_FAILED = -8,
    PICO_ERROR_INSUFFICIENT_RESOURCES = -9,
    PICO_ERROR_INVALID_ADDRESS = -10,
    PICO_ERROR_BAD_ALIGNMENT = -11,
    PICO_ERROR_INVALID_STATE = -12,
    PICO_ERROR_BUFFER_TOO_SMALL = -13,
    PICO_ERROR_PRECONDITION_NOT_MET = -14,
    PICO_ERROR_MODIFIED_DATA = -15,
    PICO_ERROR_INVALID_DATA = -16,
    PICO_ERROR_NOT_FOUND = -17,
    PICO_ERROR_UNSUPPORTED_MODIFICATION = -18,
    PICO_ERROR_LOCK_REQUIRED = -19,
    PICO_ERROR_VERSION_MISMATCH = -20,
    PICO_ERROR_RESOURCE_IN_USE = -21
};
# 37 "/home/zero/micropython/lib/pico-sdk/src/common/pico_base_headers/include/pico.h" 2
# 11 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_flash/include/hardware/flash.h" 2
# 69 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_flash/include/hardware/flash.h"
void flash_range_erase(uint32_t flash_offs, size_t count);
# 83 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_flash/include/hardware/flash.h"
void flash_range_program(uint32_t flash_offs, const uint8_t *data, size_t count);
# 95 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_flash/include/hardware/flash.h"
void flash_get_unique_id(uint8_t *id_out);
# 120 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_flash/include/hardware/flash.h"
void flash_do_cmd(const uint8_t *txbuf, uint8_t *rxbuf, size_t count);

void flash_flush_cache(void);
# 31 "/home/zero/micropython/ports/rp2/mpconfigport.h" 2
# 1 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 1
# 11 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
# 1 "/home/zero/micropython/lib/pico-sdk/src/rp2040/hardware_structs/include/hardware/structs/spi.h" 1
# 15 "/home/zero/micropython/lib/pico-sdk/src/rp2040/hardware_structs/include/hardware/structs/spi.h"
# 1 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h" 1
# 63 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h"
typedef volatile uint64_t io_rw_64;
typedef const volatile uint64_t io_ro_64;
typedef volatile uint64_t io_wo_64;
typedef volatile uint32_t io_rw_32;
typedef const volatile uint32_t io_ro_32;
typedef volatile uint32_t io_wo_32;
typedef volatile uint16_t io_rw_16;
typedef const volatile uint16_t io_ro_16;
typedef volatile uint16_t io_wo_16;
typedef volatile uint8_t io_rw_8;
typedef const volatile uint8_t io_ro_8;
typedef volatile uint8_t io_wo_8;

typedef volatile uint8_t *const ioptr;
typedef ioptr const const_ioptr;
# 97 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h"

# 97 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h" 3
__inline__ __attribute__((__always_inline__)) 
# 97 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h"
              static uint32_t xip_alias_check_addr(const void *addr) {
    uint32_t rc = (uintptr_t)addr;
    ({if (((0 || 0) && !0)) 
# 99 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h" 3
   ((
# 99 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h"
   rc >= 0x10000000u && rc < 0x11000000u
# 99 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h" 3
   ) ? (void)0 : __assert_func ("/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h", 99, __func__, 
# 99 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h"
   "rc >= 0x10000000u && rc < 0x11000000u"
# 99 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h" 3
   ))
# 99 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h"
   ;});
    return rc;
}
# 135 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h"

# 135 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h" 3
__inline__ __attribute__((__always_inline__)) 
# 135 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h"
              static void hw_set_bits(io_rw_32 *addr, uint32_t mask) {
    *(io_rw_32 *) ((void *)((0x2u << 12u) + ((uintptr_t)((volatile void *) addr)))) = mask;
}








# 145 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h" 3
__inline__ __attribute__((__always_inline__)) 
# 145 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h"
              static void hw_clear_bits(io_rw_32 *addr, uint32_t mask) {
    *(io_rw_32 *) ((void *)((0x3u << 12u) + ((uintptr_t)((volatile void *) addr)))) = mask;
}








# 155 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h" 3
__inline__ __attribute__((__always_inline__)) 
# 155 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h"
              static void hw_xor_bits(io_rw_32 *addr, uint32_t mask) {
    *(io_rw_32 *) ((void *)((0x1u << 12u) + ((uintptr_t)((volatile void *) addr)))) = mask;
}
# 171 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h"

# 171 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h" 3
__inline__ __attribute__((__always_inline__)) 
# 171 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_base/include/hardware/address_mapped.h"
              static void hw_write_masked(io_rw_32 *addr, uint32_t values, uint32_t write_mask) {
    hw_xor_bits(addr, (*addr ^ values) & write_mask);
}
# 16 "/home/zero/micropython/lib/pico-sdk/src/rp2040/hardware_structs/include/hardware/structs/spi.h" 2
# 1 "/home/zero/micropython/lib/pico-sdk/src/rp2040/hardware_regs/include/hardware/regs/spi.h" 1
# 17 "/home/zero/micropython/lib/pico-sdk/src/rp2040/hardware_structs/include/hardware/structs/spi.h" 2
# 26 "/home/zero/micropython/lib/pico-sdk/src/rp2040/hardware_structs/include/hardware/structs/spi.h"
typedef struct {
   






    io_rw_32 cr0;

   





    io_rw_32 cr1;

   


    io_rw_32 dr;

   






    io_ro_32 sr;

   


    io_rw_32 cpsr;

   





    io_rw_32 imsc;

   





    io_ro_32 ris;

   





    io_ro_32 mis;

   



    io_rw_32 icr;

   



    io_rw_32 dmacr;
} spi_hw_t;




# 102 "/home/zero/micropython/lib/pico-sdk/src/rp2040/hardware_structs/include/hardware/structs/spi.h" 3
_Static_assert
# 102 "/home/zero/micropython/lib/pico-sdk/src/rp2040/hardware_structs/include/hardware/structs/spi.h"
            (sizeof (spi_hw_t) == 0x0028, "");
# 12 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 2
# 1 "/home/zero/micropython/lib/pico-sdk/src/rp2040/hardware_regs/include/hardware/regs/dreq.h" 1
# 66 "/home/zero/micropython/lib/pico-sdk/src/rp2040/hardware_regs/include/hardware/regs/dreq.h"
typedef enum dreq_num_rp2040 {
    DREQ_PIO0_TX0 = 0,
    DREQ_PIO0_TX1 = 1,
    DREQ_PIO0_TX2 = 2,
    DREQ_PIO0_TX3 = 3,
    DREQ_PIO0_RX0 = 4,
    DREQ_PIO0_RX1 = 5,
    DREQ_PIO0_RX2 = 6,
    DREQ_PIO0_RX3 = 7,
    DREQ_PIO1_TX0 = 8,
    DREQ_PIO1_TX1 = 9,
    DREQ_PIO1_TX2 = 10,
    DREQ_PIO1_TX3 = 11,
    DREQ_PIO1_RX0 = 12,
    DREQ_PIO1_RX1 = 13,
    DREQ_PIO1_RX2 = 14,
    DREQ_PIO1_RX3 = 15,
    DREQ_SPI0_TX = 16,
    DREQ_SPI0_RX = 17,
    DREQ_SPI1_TX = 18,
    DREQ_SPI1_RX = 19,
    DREQ_UART0_TX = 20,
    DREQ_UART0_RX = 21,
    DREQ_UART1_TX = 22,
    DREQ_UART1_RX = 23,
    DREQ_PWM_WRAP0 = 24,
    DREQ_PWM_WRAP1 = 25,
    DREQ_PWM_WRAP2 = 26,
    DREQ_PWM_WRAP3 = 27,
    DREQ_PWM_WRAP4 = 28,
    DREQ_PWM_WRAP5 = 29,
    DREQ_PWM_WRAP6 = 30,
    DREQ_PWM_WRAP7 = 31,
    DREQ_I2C0_TX = 32,
    DREQ_I2C0_RX = 33,
    DREQ_I2C1_TX = 34,
    DREQ_I2C1_RX = 35,
    DREQ_ADC = 36,
    DREQ_XIP_STREAM = 37,
    DREQ_XIP_SSITX = 38,
    DREQ_XIP_SSIRX = 39,
    DREQ_DMA_TIMER0 = 59,
    DREQ_DMA_TIMER1 = 60,
    DREQ_DMA_TIMER2 = 61,
    DREQ_DMA_TIMER3 = 62,
    DREQ_FORCE = 63,
    DREQ_COUNT
} dreq_num_t;
# 13 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 2
# 51 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
typedef struct spi_inst spi_inst_t;
# 105 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"

# 105 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3
_Static_assert
# 105 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
            (2u == 2, "");
# 118 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"

# 118 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3
_Static_assert
# 118 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
            (2u == 2, "");
# 132 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"

# 132 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3
_Static_assert
# 132 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
            (DREQ_SPI0_RX == DREQ_SPI0_TX + 1, "");

# 133 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3
_Static_assert
# 133 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
            (DREQ_SPI1_RX == DREQ_SPI1_TX + 1, "");

# 134 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3
_Static_assert
# 134 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
            (DREQ_SPI1_TX == DREQ_SPI0_TX + 2, "");






typedef enum {
    SPI_CPHA_0 = 0,
    SPI_CPHA_1 = 1
} spi_cpha_t;




typedef enum {
    SPI_CPOL_0 = 0,
    SPI_CPOL_1 = 1
} spi_cpol_t;




typedef enum {
    SPI_LSB_FIRST = 0,
    SPI_MSB_FIRST = 1
} spi_order_t;
# 178 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
uint spi_init(spi_inst_t *spi, uint baudrate);
# 188 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
void spi_deinit(spi_inst_t *spi);
# 200 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
uint spi_set_baudrate(spi_inst_t *spi, uint baudrate);
# 210 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
uint spi_get_baudrate(const spi_inst_t *spi);







static inline uint spi_get_index(const spi_inst_t *spi) {
    ({if (((0 || 0) && !0)) 
# 219 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3
   ((
# 219 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
   !(spi != ((spi_inst_t *)((spi_hw_t *)0x4003c000u)) && spi != ((spi_inst_t *)((spi_hw_t *)0x40040000u)))
# 219 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3
   ) ? (void)0 : __assert_func ("/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h", 219, __func__, 
# 219 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
   "!(spi != ((spi_inst_t *)((spi_hw_t *)0x4003c000u)) && spi != ((spi_inst_t *)((spi_hw_t *)0x40040000u)))"
# 219 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3
   ))
# 219 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
   ;});
    return ((spi) == ((spi_inst_t *)((spi_hw_t *)0x40040000u)));
}

static inline spi_hw_t *spi_get_hw(spi_inst_t *spi) {
    spi_get_index(spi);
    return (spi_hw_t *)spi;
}

static inline const spi_hw_t *spi_get_const_hw(const spi_inst_t *spi) {
    spi_get_index(spi);
    return (const spi_hw_t *)spi;
}
# 244 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
static inline void spi_set_format(spi_inst_t *spi, uint data_bits, spi_cpol_t cpol, spi_cpha_t cpha, 
# 244 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3
                                                                                                    __attribute__((__unused__)) 
# 244 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
                                                                                                             spi_order_t order) {
    ({if (((0 || 0) && !0)) 
# 245 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3
   ((
# 245 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
   !(data_bits < 4 || data_bits > 16)
# 245 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3
   ) ? (void)0 : __assert_func ("/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h", 245, __func__, 
# 245 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
   "!(data_bits < 4 || data_bits > 16)"
# 245 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3
   ))
# 245 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
   ;});

    ({if (((0 || 0) && !0)) 
# 247 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3
   ((
# 247 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
   !(order != SPI_MSB_FIRST)
# 247 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3
   ) ? (void)0 : __assert_func ("/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h", 247, __func__, 
# 247 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
   "!(order != SPI_MSB_FIRST)"
# 247 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3
   ))
# 247 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
   ;});
    ({if (((0 || 0) && !0)) 
# 248 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3
   ((
# 248 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
   !(cpol != SPI_CPOL_0 && cpol != SPI_CPOL_1)
# 248 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3
   ) ? (void)0 : __assert_func ("/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h", 248, __func__, 
# 248 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
   "!(cpol != SPI_CPOL_0 && cpol != SPI_CPOL_1)"
# 248 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3
   ))
# 248 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
   ;});
    ({if (((0 || 0) && !0)) 
# 249 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3
   ((
# 249 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
   !(cpha != SPI_CPHA_0 && cpha != SPI_CPHA_1)
# 249 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3
   ) ? (void)0 : __assert_func ("/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h", 249, __func__, 
# 249 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
   "!(cpha != SPI_CPHA_0 && cpha != SPI_CPHA_1)"
# 249 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3
   ))
# 249 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
   ;});


    uint32_t enable_mask = spi_get_hw(spi)->cr1 & 0x00000002u;
    hw_clear_bits(&spi_get_hw(spi)->cr1, 0x00000002u);

    hw_write_masked(&spi_get_hw(spi)->cr0,
                    ((uint)(data_bits - 1)) << 0u |
                    ((uint)cpol) << 6u |
                    ((uint)cpha) << 7u,
        0x0000000fu |
        0x00000040u |
        0x00000080u);


    hw_set_bits(&spi_get_hw(spi)->cr1, enable_mask);
}
# 276 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
static inline void spi_set_slave(spi_inst_t *spi, 
# 276 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3 4
                                                 _Bool 
# 276 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
                                                      slave) {

    uint32_t enable_mask = spi_get_hw(spi)->cr1 & 0x00000002u;
    hw_clear_bits(&spi_get_hw(spi)->cr1, 0x00000002u);

    if (slave)
        hw_set_bits(&spi_get_hw(spi)->cr1, 0x00000004u);
    else
        hw_clear_bits(&spi_get_hw(spi)->cr1, 0x00000004u);


    hw_set_bits(&spi_get_hw(spi)->cr1, enable_mask);
}
# 299 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
static inline 
# 299 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3 4
             _Bool 
# 299 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
                  spi_is_writable(const spi_inst_t *spi) {
    return (spi_get_const_hw(spi)->sr & 0x00000002u);
}







static inline 
# 309 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3 4
             _Bool 
# 309 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
                  spi_is_readable(const spi_inst_t *spi) {
    return (spi_get_const_hw(spi)->sr & 0x00000004u);
}







static inline 
# 319 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3 4
             _Bool 
# 319 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
                  spi_is_busy(const spi_inst_t *spi) {
    return (spi_get_const_hw(spi)->sr & 0x00000010u);
}
# 335 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
int spi_write_read_blocking(spi_inst_t *spi, const uint8_t *src, uint8_t *dst, size_t len);
# 348 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
int spi_write_blocking(spi_inst_t *spi, const uint8_t *src, size_t len);
# 365 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
int spi_read_blocking(spi_inst_t *spi, uint8_t repeated_tx_data, uint8_t *dst, size_t len);
# 386 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
int spi_write16_read16_blocking(spi_inst_t *spi, const uint16_t *src, uint16_t *dst, size_t len);
# 401 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
int spi_write16_blocking(spi_inst_t *spi, const uint16_t *src, size_t len);
# 420 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
int spi_read16_blocking(spi_inst_t *spi, uint16_t repeated_tx_data, uint16_t *dst, size_t len);







static inline uint spi_get_dreq(spi_inst_t *spi, 
# 428 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h" 3 4
                                                _Bool 
# 428 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_spi/include/hardware/spi.h"
                                                     is_tx) {
    return (DREQ_SPI0_TX + ((spi) == ((spi_inst_t *)((spi_hw_t *)0x40040000u))) * 2 + !(is_tx));
}
# 32 "/home/zero/micropython/ports/rp2/mpconfigport.h" 2
# 1 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 1
# 71 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"

# 71 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3
__inline__ __attribute__((__always_inline__)) 
# 71 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
              static void __nop(void) {







    __asm volatile ("nop");

}
# 90 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"

# 90 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3
__inline__ __attribute__((__always_inline__)) 
# 90 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
              static void __sev(void) {



    __asm volatile (".syntax unified\n" "sev");

}
# 106 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"

# 106 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3
__inline__ __attribute__((__always_inline__)) 
# 106 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
              static void __wfe(void) {



    __asm volatile (".syntax unified\n" "wfe");

}
# 121 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"

# 121 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3
__inline__ __attribute__((__always_inline__)) 
# 121 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
              static void __wfi(void) {
    __asm volatile (".syntax unified\n" "wfi");
}
# 132 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"

# 132 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3
__inline__ __attribute__((__always_inline__)) 
# 132 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
              static void __dmb(void) {



    __asm volatile (".syntax unified\n" "dmb" : : : "memory");

}
# 147 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"

# 147 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3
__inline__ __attribute__((__always_inline__)) 
# 147 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
              static void __dsb(void) {



    __asm volatile (".syntax unified\n" "dsb" : : : "memory");

}
# 162 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"

# 162 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3
__inline__ __attribute__((__always_inline__)) 
# 162 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
              static void __isb(void) {



    __asm volatile (".syntax unified\n" "isb" ::: "memory");

}





# 173 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3
__inline__ __attribute__((__always_inline__)) 
# 173 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
              static void __mem_fence_acquire(void) {



    __dmb();





}






# 189 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3
__inline__ __attribute__((__always_inline__)) 
# 189 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
              static void __mem_fence_release(void) {



    __dmb();





}







# 206 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3
__inline__ __attribute__((__always_inline__)) 
# 206 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
              static uint32_t save_and_disable_interrupts(void) {
    uint32_t status;






    __asm volatile (".syntax unified\n" "mrs %0, PRIMASK\n" "cpsid i" : "=r" (status) :: "memory")


                                        ;

    return status;
}







# 227 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3
__inline__ __attribute__((__always_inline__)) 
# 227 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
              static void restore_interrupts(uint32_t status) {
# 237 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
    __asm volatile (".syntax unified\n" "msr PRIMASK,%0"::"r" (status) : "memory");

}
# 249 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"

# 249 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3
__inline__ __attribute__((__always_inline__)) 
# 249 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
              static void restore_interrupts_from_disabled(uint32_t status) {
# 258 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
    __asm volatile (".syntax unified\n" "msr PRIMASK,%0"::"r" (status) : "memory");

}

# 1 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h" 1
# 11 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h"
# 1 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 1
# 12 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h" 2
# 84 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h"
typedef io_rw_32 spin_lock_t;
# 225 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h"

# 225 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h" 3
__inline__ __attribute__((__always_inline__)) 
# 225 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h"
              static spin_lock_t *spin_lock_instance(uint lock_num) {
    ({if (((0 || 0) && !0)) 
# 226 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h" 3
   ((
# 226 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h"
   !(lock_num >= 32u)
# 226 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h" 3
   ) ? (void)0 : __assert_func ("/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h", 226, __func__, 
# 226 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h"
   "!(lock_num >= 32u)"
# 226 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h" 3
   ))
# 226 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h"
   ;});



    return (spin_lock_t *) (0xd0000000u + 0x00000100u + lock_num * 4);

}








# 240 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h" 3
__inline__ __attribute__((__always_inline__)) 
# 240 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h"
              static uint spin_lock_get_num(spin_lock_t *lock) {





    ({if (((0 || 0) && !0)) 
# 246 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h" 3
   ((
# 246 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h"
   !((uint) lock < 0xd0000000u + 0x00000100u || (uint) lock >= 32u * sizeof(spin_lock_t) + 0xd0000000u + 0x00000100u || ((uint) lock - 0xd0000000u + 0x00000100u) % sizeof(spin_lock_t) != 0)
# 246 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h" 3
   ) ? (void)0 : __assert_func ("/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h", 246, __func__, 
# 246 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h"
   "!((uint) lock < 0xd0000000u + 0x00000100u || (uint) lock >= 32u * sizeof(spin_lock_t) + 0xd0000000u + 0x00000100u || ((uint) lock - 0xd0000000u + 0x00000100u) % sizeof(spin_lock_t) != 0)"
# 246 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h" 3
   ))
# 246 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h"
   ;})

                                                                                                       ;
    return (uint) (lock - (spin_lock_t *) (0xd0000000u + 0x00000100u));

}







# 258 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h" 3
__inline__ __attribute__((__always_inline__)) 
# 258 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h"
              static void spin_lock_unsafe_blocking(spin_lock_t *lock) {






    while (__builtin_expect(!*lock, 0)) {
        tight_loop_contents();
    }
    __mem_fence_acquire();

}


# 272 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h" 3
__inline__ __attribute__((__always_inline__)) 
# 272 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h"
              static 
# 272 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h" 3 4
                     _Bool 
# 272 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h"
                          spin_try_lock_unsafe(spin_lock_t *lock) {



    return *lock;

}






# 284 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h" 3
__inline__ __attribute__((__always_inline__)) 
# 284 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h"
              static void spin_unlock_unsafe(spin_lock_t *lock) {



    __mem_fence_release();
    *lock = 0;

}
# 301 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h"

# 301 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h" 3
__inline__ __attribute__((__always_inline__)) 
# 301 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h"
              static uint32_t spin_lock_blocking(spin_lock_t *lock) {
    uint32_t save = save_and_disable_interrupts();
    spin_lock_unsafe_blocking(lock);
    return save;
}






inline static 
# 312 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h" 3 4
             _Bool 
# 312 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h"
                  is_spin_locked(spin_lock_t *lock) {



    
# 316 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h" 3
   _Static_assert
# 316 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h"
   (sizeof(spin_lock_t) == (4), "hw size mismatch");
    uint lock_num = spin_lock_get_num(lock);
    return 0 != (*(io_ro_32 *) (0xd0000000u + 0x0000005cu) & (1u << lock_num));

}
# 332 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h"

# 332 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h" 3
__inline__ __attribute__((__always_inline__)) 
# 332 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h"
              static void spin_unlock(spin_lock_t *lock, uint32_t saved_irq) {
    spin_unlock_unsafe(lock);
    restore_interrupts_from_disabled(saved_irq);
}
# 345 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync_spin_lock/include/hardware/sync/spin_lock.h"
spin_lock_t *spin_lock_init(uint lock_num);




void spin_locks_reset(void);
# 263 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 2
# 279 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
uint next_striped_spin_lock_num(void);
# 290 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
void spin_lock_claim(uint lock_num);
# 301 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
void spin_lock_claim_mask(uint32_t lock_num_mask);
# 310 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
void spin_lock_unclaim(uint lock_num);







int spin_lock_claim_unused(
# 318 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3 4
                          _Bool 
# 318 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
                               required);
# 328 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"

# 328 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h" 3 4
_Bool 
# 328 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_sync/include/hardware/sync.h"
    spin_lock_is_claimed(uint lock_num);
# 33 "/home/zero/micropython/ports/rp2/mpconfigport.h" 2
# 1 "/home/zero/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info.h" 1
# 23 "/home/zero/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info.h"
# 1 "/home/zero/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/defs.h" 1
# 24 "/home/zero/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info.h" 2
# 1 "/home/zero/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h" 1
# 24 "/home/zero/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h"
typedef struct _binary_info_core binary_info_t;
# 67 "/home/zero/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h"
typedef struct 
# 67 "/home/zero/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h" 3
              __attribute__((__packed__)) 
# 67 "/home/zero/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h"
                       _binary_info_core {
        uint16_t type;
        uint16_t tag;
} binary_info_core_t;

typedef struct 
# 72 "/home/zero/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h" 3
              __attribute__((__packed__)) 
# 72 "/home/zero/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h"
                       _binary_info_raw_data {
        struct _binary_info_core core;
        uint8_t bytes[1];
} binary_info_raw_data_t;

typedef struct 
# 77 "/home/zero/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h" 3
              __attribute__((__packed__)) 
# 77 "/home/zero/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h"
                       _binary_info_sized_data {
        struct _binary_info_core core;
        uint32_t length;
        uint8_t bytes[1];
} binary_info_sized_data_t;

typedef struct 
# 83 "/home/zero/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h" 3
              __attribute__((__packed__)) 
# 83 "/home/zero/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h"
                       _binary_info_list_zero_terminated {
        struct _binary_info_core core;
        binary_info_t * list;
} binary_info_list_zero_terminated_t;

typedef struct 
# 88 "/home/zero/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h" 3
              __attribute__((__packed__)) 
# 88 "/home/zero/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h"
                       _binary_info_id_and_int {
        struct _binary_info_core core;
        uint32_t id;
        int32_t value;
} binary_info_id_and_int_t;

typedef struct 
# 94 "/home/zero/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h" 3
              __attribute__((__packed__)) 
# 94 "/home/zero/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h"
                       _binary_info_id_and_string {
        struct _binary_info_core core;
        uint32_t id;
        const char * value;
} binary_info_id_and_string_t;

typedef struct 
# 100 "/home/zero/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h" 3
              __attribute__((__packed__)) 
# 100 "/home/zero/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h"
                       _binary_info_ptr_int32_with_name {
        struct _binary_info_core core;
        int32_t id;
        const int * value;
        const char * label;
} binary_info_ptr_int32_with_name_t;

typedef struct 
# 107 "/home/zero/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h" 3
              __attribute__((__packed__)) 
# 107 "/home/zero/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h"
                       _binary_info_ptr_string_with_name {
        struct _binary_info_core core;
        int32_t id;
        const char * value;
        const char * label;
        uint32_t len;
} binary_info_ptr_string_with_name_t;

typedef struct 
# 115 "/home/zero/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h" 3
              __attribute__((__packed__)) 
# 115 "/home/zero/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h"
                       _binary_info_block_device {
        struct _binary_info_core core;
        const char * name;
        uint32_t address;
        uint32_t size;
        binary_info_t * extra;
        uint16_t flags;
} binary_info_block_device_t;




typedef struct 
# 127 "/home/zero/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h" 3
              __attribute__((__packed__)) 
# 127 "/home/zero/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h"
                       _binary_info_pins_with_func {
    struct _binary_info_core core;


    uint32_t pin_encoding;
} binary_info_pins_with_func_t;

typedef struct 
# 134 "/home/zero/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h" 3
              __attribute__((__packed__)) 
# 134 "/home/zero/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h"
                       _binary_info_pins64_with_func {
    struct _binary_info_core core;


    uint64_t pin_encoding;
} binary_info_pins64_with_func_t;

typedef struct 
# 141 "/home/zero/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h" 3
              __attribute__((__packed__)) 
# 141 "/home/zero/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h"
                       _binary_info_pins_with_name {
    struct _binary_info_core core;
    uint32_t pin_mask;
    const char * label;
} binary_info_pins_with_name_t;

typedef struct 
# 147 "/home/zero/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h" 3
              __attribute__((__packed__)) 
# 147 "/home/zero/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h"
                       _binary_info_pins64_with_name {
    struct _binary_info_core core;
    uint64_t pin_mask;
    const char * label;
} binary_info_pins64_with_name_t;






typedef struct 
# 158 "/home/zero/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h" 3
              __attribute__((__packed__)) 
# 158 "/home/zero/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/structure.h"
                       _binary_info_named_group {
    struct _binary_info_core core;
    uint32_t parent_id;
    uint16_t flags;
    uint16_t group_tag;
    uint32_t group_id;
    const char * label;
} binary_info_named_group_t;

enum {
    BINARY_INFO_BLOCK_DEV_FLAG_READ = 1 << 0,
    BINARY_INFO_BLOCK_DEV_FLAG_WRITE = 1 << 1,
    BINARY_INFO_BLOCK_DEV_FLAG_REFORMAT = 1 << 2,

    BINARY_INFO_BLOCK_DEV_FLAG_PT_UNKNOWN = 0 << 4,
    BINARY_INFO_BLOCK_DEV_FLAG_PT_MBR = 1 << 4,
    BINARY_INFO_BLOCK_DEV_FLAG_PT_GPT = 2 << 4,
    BINARY_INFO_BLOCK_DEV_FLAG_PT_NONE = 3 << 4,
};
# 25 "/home/zero/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info.h" 2





# 1 "/home/zero/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info/code.h" 1
# 31 "/home/zero/micropython/lib/pico-sdk/src/common/pico_binary_info/include/pico/binary_info.h" 2
# 34 "/home/zero/micropython/ports/rp2/mpconfigport.h" 2
# 1 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h" 1
# 11 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h"
# 1 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/sync.h" 1
# 15 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/sync.h"
# 1 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/sem.h" 1
# 10 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/sem.h"
# 1 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/lock_core.h" 1
# 11 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/lock_core.h"
# 1 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h" 1
# 11 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
# 1 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 1
# 11 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
# 1 "/home/zero/micropython/lib/pico-sdk/src/rp2040/hardware_structs/include/hardware/structs/timer.h" 1
# 16 "/home/zero/micropython/lib/pico-sdk/src/rp2040/hardware_structs/include/hardware/structs/timer.h"
# 1 "/home/zero/micropython/lib/pico-sdk/src/rp2040/hardware_regs/include/hardware/regs/timer.h" 1
# 17 "/home/zero/micropython/lib/pico-sdk/src/rp2040/hardware_structs/include/hardware/structs/timer.h" 2
# 26 "/home/zero/micropython/lib/pico-sdk/src/rp2040/hardware_structs/include/hardware/structs/timer.h"
typedef struct {
   


    io_wo_32 timehw;

   


    io_wo_32 timelw;

   


    io_ro_32 timehr;

   


    io_ro_32 timelr;


   


    io_rw_32 alarm[4];

   


    io_rw_32 armed;

   


    io_ro_32 timerawh;

   


    io_ro_32 timerawl;

   



    io_rw_32 dbgpause;

   


    io_rw_32 pause;

   





    io_rw_32 intr;

   





    io_rw_32 inte;

   





    io_rw_32 intf;

   





    io_ro_32 ints;
} timer_hw_t;



# 113 "/home/zero/micropython/lib/pico-sdk/src/rp2040/hardware_structs/include/hardware/structs/timer.h" 3
_Static_assert
# 113 "/home/zero/micropython/lib/pico-sdk/src/rp2040/hardware_structs/include/hardware/structs/timer.h"
            (sizeof (timer_hw_t) == 0x0044, "");
# 12 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 2
# 1 "/home/zero/micropython/lib/pico-sdk/src/rp2040/hardware_regs/include/hardware/regs/intctrl.h" 1
# 47 "/home/zero/micropython/lib/pico-sdk/src/rp2040/hardware_regs/include/hardware/regs/intctrl.h"
typedef enum irq_num_rp2040 {
    TIMER_IRQ_0 = 0,
    TIMER_IRQ_1 = 1,
    TIMER_IRQ_2 = 2,
    TIMER_IRQ_3 = 3,
    PWM_IRQ_WRAP = 4,
    USBCTRL_IRQ = 5,
    XIP_IRQ = 6,
    PIO0_IRQ_0 = 7,
    PIO0_IRQ_1 = 8,
    PIO1_IRQ_0 = 9,
    PIO1_IRQ_1 = 10,
    DMA_IRQ_0 = 11,
    DMA_IRQ_1 = 12,
    IO_IRQ_BANK0 = 13,
    IO_IRQ_QSPI = 14,
    SIO_IRQ_PROC0 = 15,
    SIO_IRQ_PROC1 = 16,
    CLOCKS_IRQ = 17,
    SPI0_IRQ = 18,
    SPI1_IRQ = 19,
    UART0_IRQ = 20,
    UART1_IRQ = 21,
    ADC_IRQ_FIFO = 22,
    I2C0_IRQ = 23,
    I2C1_IRQ = 24,
    RTC_IRQ = 25,
    IRQ_COUNT
} irq_num_t;
# 13 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 2
# 107 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"

# 107 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3
_Static_assert
# 107 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
            (TIMER_IRQ_3 == TIMER_IRQ_0 + 3, "");
# 125 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"

# 125 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3
_Static_assert
# 125 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
            (TIMER_IRQ_3 == TIMER_IRQ_0 + 3, "");
# 143 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"

# 143 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3
_Static_assert
# 143 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
            (TIMER_IRQ_3 == TIMER_IRQ_0 + 3, "");
# 188 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
static inline void check_hardware_alarm_num_param(
# 188 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3
                                                 __attribute__((__unused__)) 
# 188 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
                                                          uint alarm_num) {
    ({if (((0 || 0) && !0)) 
# 189 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3
   ((
# 189 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
   !(alarm_num >= 4u)
# 189 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3
   ) ? (void)0 : __assert_func ("/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h", 189, __func__, 
# 189 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
   "!(alarm_num >= 4u)"
# 189 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3
   ))
# 189 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
   ;});
}
# 202 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
static inline uint32_t timer_time_us_32(timer_hw_t *timer) {
    return timer->timerawl;
}
# 215 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
static inline uint32_t time_us_32(void) {
    return timer_time_us_32(((timer_hw_t *)0x40054000u));
}
# 230 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
uint64_t timer_time_us_64(timer_hw_t *timer);
# 242 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
uint64_t time_us_64(void);
# 251 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
void timer_busy_wait_us_32(timer_hw_t *timer, uint32_t delay_us);







void busy_wait_us_32(uint32_t delay_us);
# 268 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
void timer_busy_wait_us(timer_hw_t *timer, uint64_t delay_us);







void busy_wait_us(uint64_t delay_us);
# 285 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
void timer_busy_wait_ms(timer_hw_t *timer, uint32_t delay_ms);







void busy_wait_ms(uint32_t delay_ms);
# 302 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
void timer_busy_wait_until(timer_hw_t *timer, absolute_time_t t);







void busy_wait_until(absolute_time_t t);
# 320 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
static inline 
# 320 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
             _Bool 
# 320 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
                  timer_time_reached(timer_hw_t *timer, absolute_time_t t) {
    uint64_t target = to_us_since_boot(t);
    uint32_t hi_target = (uint32_t)(target >> 32u);
    uint32_t hi = timer->timerawh;
    return (hi >= hi_target && (timer->timerawl >= (uint32_t) target || hi != hi_target));
}
# 334 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
static inline 
# 334 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
             _Bool 
# 334 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
                  time_reached(absolute_time_t t) {
    return timer_time_reached(((timer_hw_t *)0x40054000u), t);
}







typedef void (*hardware_alarm_callback_t)(uint alarm_num);
# 356 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
void timer_hardware_alarm_claim(timer_hw_t *timer, uint alarm_num);
# 367 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
void hardware_alarm_claim(uint alarm_num);
# 380 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
int timer_hardware_alarm_claim_unused(timer_hw_t *timer, 
# 380 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
                                                        _Bool 
# 380 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
                                                             required);
# 392 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
int hardware_alarm_claim_unused(
# 392 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
                               _Bool 
# 392 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
                                    required);
# 402 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
void timer_hardware_alarm_unclaim(timer_hw_t *timer, uint alarm_num);
# 411 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
void hardware_alarm_unclaim(uint alarm_num);
# 422 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"

# 422 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
_Bool 
# 422 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
    timer_hardware_alarm_is_claimed(timer_hw_t *timer, uint alarm_num);
# 432 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"

# 432 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
_Bool 
# 432 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
    hardware_alarm_is_claimed(uint alarm_num);
# 452 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
void timer_hardware_alarm_set_callback(timer_hw_t *timer, uint alarm_num, hardware_alarm_callback_t callback);
# 471 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
void hardware_alarm_set_callback(uint alarm_num, hardware_alarm_callback_t callback);
# 485 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"

# 485 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
_Bool 
# 485 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
    timer_hardware_alarm_set_target(timer_hw_t *timer, uint alarm_num, absolute_time_t t);
# 498 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"

# 498 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3 4
_Bool 
# 498 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
    hardware_alarm_set_target(uint alarm_num, absolute_time_t t);
# 508 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
void timer_hardware_alarm_cancel(timer_hw_t *timer, uint alarm_num);
# 517 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
void hardware_alarm_cancel(uint alarm_num);
# 533 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
void timer_hardware_alarm_force_irq(timer_hw_t *timer, uint alarm_num);
# 548 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
void hardware_alarm_force_irq(uint alarm_num);
# 557 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
static inline uint timer_hardware_alarm_get_irq_num(timer_hw_t *timer, uint alarm_num) {
    check_hardware_alarm_num_param(alarm_num);
    return ({ ((void)(timer)); (TIMER_IRQ_0 + (alarm_num)); });
}






static inline uint hardware_alarm_get_irq_num(uint alarm_num) {
    return timer_hardware_alarm_get_irq_num(((timer_hw_t *)0x40054000u), alarm_num);
}
# 579 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
static inline uint timer_get_index(timer_hw_t *timer) {
    return ({ (void) (timer); 0; });
}
# 590 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
static inline timer_hw_t *timer_get_instance(uint timer_num) {
    ({if (((0 || 0) && !0)) 
# 591 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3
   ((
# 591 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
   !(timer_num >= 1u)
# 591 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3
   ) ? (void)0 : __assert_func ("/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h", 591, __func__, 
# 591 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
   "!(timer_num >= 1u)"
# 591 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h" 3
   ))
# 591 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/hardware_timer/include/hardware/timer.h"
   ;});
    return ((timer_hw_t *)0x40054000u);
}
# 12 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h" 2
# 66 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
static inline absolute_time_t get_absolute_time(void) {
    absolute_time_t t;
    update_us_since_boot(&t, time_us_64());
    return t;
}

static inline uint32_t us_to_ms(uint64_t us) {
    if (us >> 32u) {
        return (uint32_t)(us / 1000u);
    } else {
        return ((uint32_t)us) / 1000u;
    }
}
# 87 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
static inline uint32_t to_ms_since_boot(absolute_time_t t) {
    uint64_t us = to_us_since_boot(t);
    return us_to_ms(us);
}
# 99 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
static inline absolute_time_t delayed_by_us(const absolute_time_t t, uint64_t us) {
    absolute_time_t t2;
    uint64_t base = to_us_since_boot(t);
    uint64_t delayed = base + us;
    if ((int64_t)delayed < 0) {

        delayed = 0x7fffffffffffffffLL
# 105 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
                          ;
    }
    update_us_since_boot(&t2, delayed);
    return t2;
}
# 118 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
static inline absolute_time_t delayed_by_ms(const absolute_time_t t, uint32_t ms) {
    absolute_time_t t2;
    uint64_t base = to_us_since_boot(t);
    uint64_t delayed = base + ms * 1000ull;
    if ((int64_t)delayed < 0) {

        delayed = 0x7fffffffffffffffLL
# 124 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
                          ;
    }
    update_us_since_boot(&t2, delayed);
    return t2;
}







static inline absolute_time_t make_timeout_time_us(uint64_t us) {
    return delayed_by_us(get_absolute_time(), us);
}







static inline absolute_time_t make_timeout_time_ms(uint32_t ms) {
    return delayed_by_ms(get_absolute_time(), ms);
}
# 161 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
static inline int64_t absolute_time_diff_us(absolute_time_t from, absolute_time_t to) {
    return (int64_t)(to_us_since_boot(to) - to_us_since_boot(from));
}
# 172 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
static inline absolute_time_t absolute_time_min(absolute_time_t a, absolute_time_t b) {
    return to_us_since_boot(a) < to_us_since_boot(b) ? a : b;
}






extern const absolute_time_t at_the_end_of_time;







static inline 
# 189 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h" 3 4
             _Bool 
# 189 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
                  is_at_the_end_of_time(absolute_time_t t) {
    return to_us_since_boot(t) == to_us_since_boot(at_the_end_of_time);
}




extern const absolute_time_t nil_time;







static inline 
# 204 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h" 3 4
             _Bool 
# 204 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
                  is_nil_time(absolute_time_t t) {
    return !to_us_since_boot(t);
}
# 237 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
void sleep_until(absolute_time_t target);
# 247 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
void sleep_us(uint64_t us);
# 256 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
void sleep_ms(uint32_t ms);
# 293 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"

# 293 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h" 3 4
_Bool 
# 293 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
    best_effort_wfe_or_timeout(absolute_time_t timeout_timestamp);
# 367 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
typedef int32_t alarm_id_t;
# 378 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
typedef int64_t (*alarm_callback_t)(alarm_id_t id, void *user_data);

typedef struct alarm_pool alarm_pool_t;
typedef void alarm_pool_timer_t;





void alarm_pool_init_default(void);
void runtime_init_default_alarm_pool(void);
# 398 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
alarm_pool_t *alarm_pool_get_default(void);


alarm_pool_t *alarm_pool_create_on_timer(alarm_pool_timer_t *timer, uint timer_alarm_num, uint max_timers);

alarm_pool_timer_t *alarm_pool_timer_for_timer_num(uint timer_num);

alarm_pool_timer_t *alarm_pool_get_default_timer(void);
# 425 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
static inline alarm_pool_t *alarm_pool_create(uint timer_alarm_num, uint max_timers) {
    return alarm_pool_create_on_timer(alarm_pool_get_default_timer(), timer_alarm_num, max_timers);
}

alarm_pool_t *alarm_pool_create_on_timer_with_unused_hardware_alarm(alarm_pool_timer_t *timer, uint max_timers);
# 448 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
static inline alarm_pool_t *alarm_pool_create_with_unused_hardware_alarm(uint max_timers) {
    return alarm_pool_create_on_timer_with_unused_hardware_alarm(alarm_pool_get_default_timer(), max_timers);
}







uint alarm_pool_timer_alarm_num(alarm_pool_t *pool);

static inline uint alarm_pool_hardware_alarm_num(alarm_pool_t *pool) {
    return alarm_pool_timer_alarm_num(pool);
}






uint alarm_pool_core_num(alarm_pool_t *pool);






void alarm_pool_destroy(alarm_pool_t *pool);
# 499 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
alarm_id_t alarm_pool_add_alarm_at(alarm_pool_t *pool, absolute_time_t time, alarm_callback_t callback, void *user_data, 
# 499 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h" 3 4
                                                                                                                        _Bool 
# 499 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
                                                                                                                             fire_if_past);
# 518 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
alarm_id_t alarm_pool_add_alarm_at_force_in_context(alarm_pool_t *pool, absolute_time_t time, alarm_callback_t callback,
                                                    void *user_data);
# 541 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
static inline alarm_id_t alarm_pool_add_alarm_in_us(alarm_pool_t *pool, uint64_t us, alarm_callback_t callback, void *user_data, 
# 541 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h" 3 4
                                                                                                                                _Bool 
# 541 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
                                                                                                                                     fire_if_past) {
    return alarm_pool_add_alarm_at(pool, delayed_by_us(get_absolute_time(), us), callback, user_data, fire_if_past);
}
# 566 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
static inline alarm_id_t alarm_pool_add_alarm_in_ms(alarm_pool_t *pool, uint32_t ms, alarm_callback_t callback, void *user_data, 
# 566 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h" 3 4
                                                                                                                                _Bool 
# 566 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
                                                                                                                                     fire_if_past) {
    return alarm_pool_add_alarm_at(pool, delayed_by_ms(get_absolute_time(), ms), callback, user_data, fire_if_past);
}
# 580 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
int64_t alarm_pool_remaining_alarm_time_us(alarm_pool_t *pool, alarm_id_t alarm_id);
# 592 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
int32_t alarm_pool_remaining_alarm_time_ms(alarm_pool_t *pool, alarm_id_t alarm_id);
# 602 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"

# 602 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h" 3 4
_Bool 
# 602 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
    alarm_pool_cancel_alarm(alarm_pool_t *pool, alarm_id_t alarm_id);
# 625 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
static inline alarm_id_t add_alarm_at(absolute_time_t time, alarm_callback_t callback, void *user_data, 
# 625 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h" 3 4
                                                                                                       _Bool 
# 625 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
                                                                                                            fire_if_past) {
    return alarm_pool_add_alarm_at(alarm_pool_get_default(), time, callback, user_data, fire_if_past);
}
# 649 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
static inline alarm_id_t add_alarm_in_us(uint64_t us, alarm_callback_t callback, void *user_data, 
# 649 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h" 3 4
                                                                                                 _Bool 
# 649 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
                                                                                                      fire_if_past) {
    return alarm_pool_add_alarm_in_us(alarm_pool_get_default(), us, callback, user_data, fire_if_past);
}
# 673 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
static inline alarm_id_t add_alarm_in_ms(uint32_t ms, alarm_callback_t callback, void *user_data, 
# 673 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h" 3 4
                                                                                                 _Bool 
# 673 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
                                                                                                      fire_if_past) {
    return alarm_pool_add_alarm_in_ms(alarm_pool_get_default(), ms, callback, user_data, fire_if_past);
}







static inline 
# 683 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h" 3 4
             _Bool 
# 683 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
                  cancel_alarm(alarm_id_t alarm_id) {
    return alarm_pool_cancel_alarm(alarm_pool_get_default(), alarm_id);
}
# 697 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
int64_t remaining_alarm_time_us(alarm_id_t alarm_id);
# 708 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
int32_t remaining_alarm_time_ms(alarm_id_t alarm_id);
# 722 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
typedef struct repeating_timer repeating_timer_t;







typedef 
# 730 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h" 3 4
       _Bool 
# 730 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
            (*repeating_timer_callback_t)(repeating_timer_t *rt);






struct repeating_timer {
    int64_t delay_us;
    alarm_pool_t *pool;
    alarm_id_t alarm_id;
    repeating_timer_callback_t callback;
    void *user_data;
};
# 763 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"

# 763 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h" 3 4
_Bool 
# 763 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
    alarm_pool_add_repeating_timer_us(alarm_pool_t *pool, int64_t delay_us, repeating_timer_callback_t callback, void *user_data, repeating_timer_t *out);
# 783 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
static inline 
# 783 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h" 3 4
             _Bool 
# 783 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
                  alarm_pool_add_repeating_timer_ms(alarm_pool_t *pool, int32_t delay_ms, repeating_timer_callback_t callback, void *user_data, repeating_timer_t *out) {
    return alarm_pool_add_repeating_timer_us(pool, delay_ms * (int64_t)1000, callback, user_data, out);
}
# 805 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
static inline 
# 805 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h" 3 4
             _Bool 
# 805 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
                  add_repeating_timer_us(int64_t delay_us, repeating_timer_callback_t callback, void *user_data, repeating_timer_t *out) {
    return alarm_pool_add_repeating_timer_us(alarm_pool_get_default(), delay_us, callback, user_data, out);
}
# 826 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
static inline 
# 826 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h" 3 4
             _Bool 
# 826 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
                  add_repeating_timer_ms(int32_t delay_ms, repeating_timer_callback_t callback, void *user_data, repeating_timer_t *out) {
    return alarm_pool_add_repeating_timer_us(alarm_pool_get_default(), delay_ms * (int64_t)1000, callback, user_data, out);
}
# 838 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"

# 838 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h" 3 4
_Bool 
# 838 "/home/zero/micropython/lib/pico-sdk/src/common/pico_time/include/pico/time.h"
    cancel_repeating_timer(repeating_timer_t *timer);
# 12 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/lock_core.h" 2
# 53 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/lock_core.h"
struct lock_core {

    spin_lock_t *spin_lock;



};

typedef struct lock_core lock_core_t;
# 72 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/lock_core.h"
void lock_init(lock_core_t *core, uint lock_num);
# 11 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/sem.h" 2
# 31 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/sem.h"
typedef struct semaphore {
    struct lock_core core;
    int16_t permits;
    int16_t max_permits;
} semaphore_t;
# 45 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/sem.h"
void sem_init(semaphore_t *sem, int16_t initial_permits, int16_t max_permits);







int sem_available(semaphore_t *sem);
# 64 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/sem.h"

# 64 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/sem.h" 3 4
_Bool 
# 64 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/sem.h"
    sem_release(semaphore_t *sem);
# 74 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/sem.h"
void sem_reset(semaphore_t *sem, int16_t permits);
# 83 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/sem.h"
void sem_acquire_blocking(semaphore_t *sem);
# 96 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/sem.h"

# 96 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/sem.h" 3 4
_Bool 
# 96 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/sem.h"
    sem_acquire_timeout_ms(semaphore_t *sem, uint32_t timeout_ms);
# 109 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/sem.h"

# 109 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/sem.h" 3 4
_Bool 
# 109 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/sem.h"
    sem_acquire_timeout_us(semaphore_t *sem, uint32_t timeout_us);
# 123 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/sem.h"

# 123 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/sem.h" 3 4
_Bool 
# 123 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/sem.h"
    sem_acquire_block_until(semaphore_t *sem, absolute_time_t until);
# 134 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/sem.h"

# 134 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/sem.h" 3 4
_Bool 
# 134 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/sem.h"
    sem_try_acquire(semaphore_t *sem);
# 16 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/sync.h" 2
# 1 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/mutex.h" 1
# 47 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/mutex.h"
typedef struct {
    lock_core_t core;
    int8_t owner;
    uint8_t enter_count;



} recursive_mutex_t;





typedef struct mutex {
    lock_core_t core;
    int8_t owner;
} mutex_t;
# 73 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/mutex.h"
void mutex_init(mutex_t *mtx);
# 82 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/mutex.h"
void recursive_mutex_init(recursive_mutex_t *mtx);
# 92 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/mutex.h"
void mutex_enter_blocking(mutex_t *mtx);
# 102 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/mutex.h"
void recursive_mutex_enter_blocking(recursive_mutex_t *mtx);
# 115 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/mutex.h"

# 115 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/mutex.h" 3 4
_Bool 
# 115 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/mutex.h"
    mutex_try_enter(mutex_t *mtx, uint32_t *owner_out);
# 129 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/mutex.h"

# 129 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/mutex.h" 3 4
_Bool 
# 129 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/mutex.h"
    mutex_try_enter_block_until(mutex_t *mtx, absolute_time_t until);
# 143 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/mutex.h"

# 143 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/mutex.h" 3 4
_Bool 
# 143 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/mutex.h"
    recursive_mutex_try_enter(recursive_mutex_t *mtx, uint32_t *owner_out);
# 156 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/mutex.h"

# 156 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/mutex.h" 3 4
_Bool 
# 156 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/mutex.h"
    mutex_enter_timeout_ms(mutex_t *mtx, uint32_t timeout_ms);
# 170 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/mutex.h"

# 170 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/mutex.h" 3 4
_Bool 
# 170 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/mutex.h"
    recursive_mutex_enter_timeout_ms(recursive_mutex_t *mtx, uint32_t timeout_ms);
# 184 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/mutex.h"

# 184 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/mutex.h" 3 4
_Bool 
# 184 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/mutex.h"
    mutex_enter_timeout_us(mutex_t *mtx, uint32_t timeout_us);
# 198 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/mutex.h"

# 198 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/mutex.h" 3 4
_Bool 
# 198 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/mutex.h"
    recursive_mutex_enter_timeout_us(recursive_mutex_t *mtx, uint32_t timeout_us);
# 212 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/mutex.h"

# 212 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/mutex.h" 3 4
_Bool 
# 212 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/mutex.h"
    mutex_enter_block_until(mutex_t *mtx, absolute_time_t until);
# 226 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/mutex.h"

# 226 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/mutex.h" 3 4
_Bool 
# 226 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/mutex.h"
    recursive_mutex_enter_block_until(recursive_mutex_t *mtx, absolute_time_t until);






void mutex_exit(mutex_t *mtx);






void recursive_mutex_exit(recursive_mutex_t *mtx);







static inline 
# 248 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/mutex.h" 3 4
             _Bool 
# 248 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/mutex.h"
                  mutex_is_initialized(mutex_t *mtx) {
    return mtx->core.spin_lock != 0;
}







static inline 
# 258 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/mutex.h" 3 4
             _Bool 
# 258 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/mutex.h"
                  recursive_mutex_is_initialized(recursive_mutex_t *mtx) {
    return mtx->core.spin_lock != 0;
}
# 308 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/mutex.h"
void runtime_init_mutex(void);
# 17 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/sync.h" 2
# 1 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/critical_section.h" 1
# 29 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/critical_section.h"
typedef struct 
# 29 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/critical_section.h" 3
              __attribute__((__packed__)) __attribute__((__aligned__(
# 29 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/critical_section.h"
              4
# 29 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/critical_section.h" 3
              ))) 
# 29 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/critical_section.h"
                               critical_section {
    spin_lock_t *spin_lock;
    uint32_t save;
} critical_section_t;
# 44 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/critical_section.h"
void critical_section_init(critical_section_t *crit_sec);






void critical_section_init_with_lock_num(critical_section_t *crit_sec, uint lock_num);
# 61 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/critical_section.h"
static inline void critical_section_enter_blocking(critical_section_t *crit_sec) {
    crit_sec->save = spin_lock_blocking(crit_sec->spin_lock);
}






static inline void critical_section_exit(critical_section_t *crit_sec) {
    spin_unlock(crit_sec->spin_lock, crit_sec->save);
}
# 83 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/critical_section.h"
void critical_section_deinit(critical_section_t *crit_sec);







static inline 
# 91 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/critical_section.h" 3 4
             _Bool 
# 91 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/critical_section.h"
                  critical_section_is_initialized(critical_section_t *crit_sec) {
    return crit_sec->spin_lock != 0;
}
# 18 "/home/zero/micropython/lib/pico-sdk/src/common/pico_sync/include/pico/sync.h" 2
# 12 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h" 2
# 1 "/home/zero/micropython/lib/pico-sdk/src/rp2040/hardware_structs/include/hardware/structs/sio.h" 1
# 17 "/home/zero/micropython/lib/pico-sdk/src/rp2040/hardware_structs/include/hardware/structs/sio.h"
# 1 "/home/zero/micropython/lib/pico-sdk/src/rp2040/hardware_structs/include/hardware/structs/interp.h" 1
# 26 "/home/zero/micropython/lib/pico-sdk/src/rp2040/hardware_structs/include/hardware/structs/interp.h"
typedef struct {

   


    io_rw_32 accum[2];


   


    io_rw_32 base[3];


   


    io_ro_32 pop[3];


   


    io_ro_32 peek[3];


   
# 66 "/home/zero/micropython/lib/pico-sdk/src/rp2040/hardware_structs/include/hardware/structs/interp.h"
    io_rw_32 ctrl[2];


   


    io_rw_32 add_raw[2];

   


    io_wo_32 base01;
} interp_hw_t;



# 81 "/home/zero/micropython/lib/pico-sdk/src/rp2040/hardware_structs/include/hardware/structs/interp.h" 3
_Static_assert
# 81 "/home/zero/micropython/lib/pico-sdk/src/rp2040/hardware_structs/include/hardware/structs/interp.h"
            (sizeof (interp_hw_t) == 0x0040, "");
# 18 "/home/zero/micropython/lib/pico-sdk/src/rp2040/hardware_structs/include/hardware/structs/sio.h" 2
# 28 "/home/zero/micropython/lib/pico-sdk/src/rp2040/hardware_structs/include/hardware/structs/sio.h"
typedef struct {
   


    io_ro_32 cpuid;

   


    io_ro_32 gpio_in;

   


    io_ro_32 gpio_hi_in;

    uint32_t _pad0;

   


    io_rw_32 gpio_out;

   


    io_wo_32 gpio_set;

   


    io_wo_32 gpio_clr;

   


    io_wo_32 gpio_togl;

   


    io_rw_32 gpio_oe;

   


    io_wo_32 gpio_oe_set;

   


    io_wo_32 gpio_oe_clr;

   


    io_wo_32 gpio_oe_togl;

   


    io_rw_32 gpio_hi_out;

   


    io_wo_32 gpio_hi_set;

   


    io_wo_32 gpio_hi_clr;

   


    io_wo_32 gpio_hi_togl;

   


    io_rw_32 gpio_hi_oe;

   


    io_wo_32 gpio_hi_oe_set;

   


    io_wo_32 gpio_hi_oe_clr;

   


    io_wo_32 gpio_hi_oe_togl;

   





    io_rw_32 fifo_st;

   


    io_wo_32 fifo_wr;

   


    io_ro_32 fifo_rd;

   


    io_ro_32 spinlock_st;

   


    io_rw_32 div_udividend;

   


    io_rw_32 div_udivisor;

   


    io_rw_32 div_sdividend;

   


    io_rw_32 div_sdivisor;

   


    io_rw_32 div_quotient;

   


    io_rw_32 div_remainder;

   



    io_ro_32 div_csr;

    uint32_t _pad1;

    interp_hw_t interp[2];


   


    io_rw_32 spinlock[32];
} sio_hw_t;



# 197 "/home/zero/micropython/lib/pico-sdk/src/rp2040/hardware_structs/include/hardware/structs/sio.h" 3
_Static_assert
# 197 "/home/zero/micropython/lib/pico-sdk/src/rp2040/hardware_structs/include/hardware/structs/sio.h"
            (sizeof (sio_hw_t) == 0x0180, "");
# 13 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h" 2
# 61 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h"

# 61 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h" 3
_Static_assert
# 61 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h"
            (SIO_IRQ_PROC1 == SIO_IRQ_PROC0 + 1, "");
# 73 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h"
void multicore_reset_core1(void);
# 87 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h"
void multicore_launch_core1(void (*entry)(void));
# 103 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h"
void multicore_launch_core1_with_stack(void (*entry)(void), uint32_t *stack_bottom, size_t stack_size_bytes);
# 120 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h"
void multicore_launch_core1_raw(void (*entry)(void), uint32_t *sp, uint32_t vector_table);
# 145 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h"
static inline 
# 145 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h" 3 4
             _Bool 
# 145 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h"
                  multicore_fifo_rvalid(void) {
    return ((sio_hw_t *)0xd0000000u)->fifo_st & 0x00000001u;
}
# 156 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h"
static inline 
# 156 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h" 3 4
             _Bool 
# 156 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h"
                  multicore_fifo_wready(void) {
    return ((sio_hw_t *)0xd0000000u)->fifo_st & 0x00000002u;
}
# 171 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h"
void multicore_fifo_push_blocking(uint32_t data);
# 184 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h"
static inline void multicore_fifo_push_blocking_inline(uint32_t data) {

    while (!multicore_fifo_wready())
        tight_loop_contents();

    ((sio_hw_t *)0xd0000000u)->fifo_wr = data;


    __sev();
}
# 205 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h"

# 205 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h" 3 4
_Bool 
# 205 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h"
    multicore_fifo_push_timeout_us(uint32_t data, uint64_t timeout_us);
# 218 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h"
uint32_t multicore_fifo_pop_blocking(void);
# 231 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h"
static inline uint32_t multicore_fifo_pop_blocking_inline(void) {


    while (!multicore_fifo_rvalid())
        __wfe();

    return ((sio_hw_t *)0xd0000000u)->fifo_rd;
}
# 251 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h"

# 251 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h" 3 4
_Bool 
# 251 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h"
    multicore_fifo_pop_timeout_us(uint64_t timeout_us, uint32_t *out);






static inline void multicore_fifo_drain(void) {
    while (multicore_fifo_rvalid())
        (void) ((sio_hw_t *)0xd0000000u)->fifo_rd;
}
# 273 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h"
static inline void multicore_fifo_clear_irq(void) {

    ((sio_hw_t *)0xd0000000u)->fifo_st = 0xff;
}
# 293 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h"
static inline uint32_t multicore_fifo_get_status(void) {
    return ((sio_hw_t *)0xd0000000u)->fifo_st;
}
# 450 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h"
void multicore_lockout_victim_init(void);
# 462 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h"

# 462 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h" 3 4
_Bool 
# 462 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h"
    multicore_lockout_victim_is_initialized(uint core_num);
# 472 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h"
void multicore_lockout_start_blocking(void);
# 485 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h"

# 485 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h" 3 4
_Bool 
# 485 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h"
    multicore_lockout_start_timeout_us(uint64_t timeout_us);







void multicore_lockout_end_blocking(void);
# 509 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h"

# 509 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h" 3 4
_Bool 
# 509 "/home/zero/micropython/lib/pico-sdk/src/rp2_common/pico_multicore/include/pico/multicore.h"
    multicore_lockout_end_timeout_us(uint64_t timeout_us);
# 35 "/home/zero/micropython/ports/rp2/mpconfigport.h" 2
# 1 "/home/zero/micropython/ports/rp2/boards/RPI_PICO/mpconfigboard.h" 1
# 36 "/home/zero/micropython/ports/rp2/mpconfigport.h" 2
# 284 "/home/zero/micropython/ports/rp2/mpconfigport.h"
typedef intptr_t mp_int_t;
typedef uintptr_t mp_uint_t;
typedef intptr_t mp_off_t;


# 1 "/usr/include/newlib/alloca.h" 1 3
# 11 "/usr/include/newlib/alloca.h" 3
# 1 "/usr/include/newlib/sys/reent.h" 1 3
# 13 "/usr/include/newlib/sys/reent.h" 3
# 1 "/usr/include/newlib/_ansi.h" 1 3
# 14 "/usr/include/newlib/sys/reent.h" 2 3
# 1 "/usr/lib/gcc/arm-none-eabi/13.2.1/include/stddef.h" 1 3 4
# 15 "/usr/include/newlib/sys/reent.h" 2 3

# 1 "/usr/include/newlib/sys/_types.h" 1 3
# 24 "/usr/include/newlib/sys/_types.h" 3
# 1 "/usr/lib/gcc/arm-none-eabi/13.2.1/include/stddef.h" 1 3 4
# 359 "/usr/lib/gcc/arm-none-eabi/13.2.1/include/stddef.h" 3 4

# 359 "/usr/lib/gcc/arm-none-eabi/13.2.1/include/stddef.h" 3 4
typedef unsigned int wint_t;
# 25 "/usr/include/newlib/sys/_types.h" 2 3


# 1 "/usr/include/newlib/machine/_types.h" 1 3
# 28 "/usr/include/newlib/sys/_types.h" 2 3


typedef long __blkcnt_t;



typedef long __blksize_t;



typedef __uint64_t __fsblkcnt_t;



typedef __uint32_t __fsfilcnt_t;



typedef long _off_t;





typedef int __pid_t;



typedef short __dev_t;



typedef unsigned short __uid_t;


typedef unsigned short __gid_t;



typedef __uint32_t __id_t;







typedef unsigned short __ino_t;
# 90 "/usr/include/newlib/sys/_types.h" 3
typedef __uint32_t __mode_t;





__extension__ typedef long long _off64_t;





typedef _off_t __off_t;


typedef _off64_t __loff_t;


typedef long __key_t;







typedef long _fpos_t;
# 131 "/usr/include/newlib/sys/_types.h" 3
typedef unsigned int __size_t;
# 147 "/usr/include/newlib/sys/_types.h" 3
typedef signed int _ssize_t;
# 158 "/usr/include/newlib/sys/_types.h" 3
typedef _ssize_t __ssize_t;



typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    unsigned char __wchb[4];
  } __value;
} _mbstate_t;




typedef void *_iconv_t;






typedef unsigned long __clock_t;






typedef __int_least64_t __time_t;





typedef unsigned long __clockid_t;


typedef long __daddr_t;



typedef unsigned long __timer_t;


typedef __uint8_t __sa_family_t;



typedef __uint32_t __socklen_t;


typedef int __nl_item;
typedef unsigned short __nlink_t;
typedef long __suseconds_t;
typedef unsigned long __useconds_t;







typedef __builtin_va_list __va_list;
# 17 "/usr/include/newlib/sys/reent.h" 2 3






typedef unsigned long __ULong;
# 35 "/usr/include/newlib/sys/reent.h" 3
# 1 "/usr/include/newlib/sys/lock.h" 1 3
# 11 "/usr/include/newlib/sys/lock.h" 3
typedef int _LOCK_T;
typedef int _LOCK_RECURSIVE_T;
# 36 "/usr/include/newlib/sys/reent.h" 2 3
typedef _LOCK_RECURSIVE_T _flock_t;







struct _reent;

struct __locale_t;






struct _Bigint
{
  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm
{
  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};







struct _on_exit_args {
 void * _fnargs[32];
 void * _dso_handle[32];

 __ULong _fntypes;


 __ULong _is_cxa;
};
# 99 "/usr/include/newlib/sys/reent.h" 3
struct _atexit {
 struct _atexit *_next;
 int _ind;

 void (*_fns[32])(void);
        struct _on_exit_args _on_exit_args;
};
# 116 "/usr/include/newlib/sys/reent.h" 3
struct __sbuf {
 unsigned char *_base;
 int _size;
};
# 153 "/usr/include/newlib/sys/reent.h" 3
struct __sFILE {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;






  void * _cookie;

  int (*_read) (struct _reent *, void *,
        char *, int);
  int (*_write) (struct _reent *, void *,
         const char *,
         int);
  _fpos_t (*_seek) (struct _reent *, void *, _fpos_t, int);
  int (*_close) (struct _reent *, void *);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  _off_t _offset;


  struct _reent *_data;



  _flock_t _lock;

  _mbstate_t _mbstate;
  int _flags2;
};
# 270 "/usr/include/newlib/sys/reent.h" 3
typedef struct __sFILE __FILE;



extern __FILE __sf[3];

struct _glue
{
  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};

extern struct _glue __sglue;
# 306 "/usr/include/newlib/sys/reent.h" 3
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;




};
# 568 "/usr/include/newlib/sys/reent.h" 3
struct _reent
{
  int _errno;




  __FILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];




  struct __locale_t *_locale;





  void (*__cleanup) (struct _reent *);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union
    {
      struct
        {



          char * _strtok_last;
          char _asctime_buf[26];
          struct __tm _localtime_buf;
          int _gamma_signgam;
          __extension__ unsigned long long _rand_next;
          struct _rand48 _r48;
          _mbstate_t _mblen_state;
          _mbstate_t _mbtowc_state;
          _mbstate_t _wctomb_state;
          char _l64a_buf[8];
          char _signal_buf[24];
          int _getdate_err;
          _mbstate_t _mbrlen_state;
          _mbstate_t _mbrtowc_state;
          _mbstate_t _mbsrtowcs_state;
          _mbstate_t _wcrtomb_state;
          _mbstate_t _wcsrtombs_state;
   int _h_errno;
# 634 "/usr/include/newlib/sys/reent.h" 3
        } _reent;







    } _new;







  void (**_sig_func)(int);
};
# 782 "/usr/include/newlib/sys/reent.h" 3
extern struct _reent *_impure_ptr ;





extern struct _reent _impure_data ;
# 900 "/usr/include/newlib/sys/reent.h" 3
extern struct _atexit *__atexit;
extern struct _atexit __atexit0;

extern void (*__stdio_exit_handler) (void);

void _reclaim_reent (struct _reent *);

extern int _fwalk_sglue (struct _reent *, int (*)(struct _reent *, __FILE *),
    struct _glue *);
# 12 "/usr/include/newlib/alloca.h" 2 3
# 290 "/home/zero/micropython/ports/rp2/mpconfigport.h" 2






# 295 "/home/zero/micropython/ports/rp2/mpconfigport.h"
extern uint32_t rosc_random_u32(void);
extern void lwip_lock_acquire(void);
extern void lwip_lock_release(void);
# 92 "/home/zero/micropython/py/mpconfig.h" 2
# 835 "/home/zero/micropython/py/mpconfig.h"
typedef float mp_float_t;
# 30 "<stdin>" 2





QCFG(BYTES_IN_LEN, (1))
QCFG(BYTES_IN_HASH, (1))

Q()
Q(*)
Q(_)
Q(/)

Q(>>> )
Q(... )


Q(%#o)
Q(%#x)




Q({:#b})
Q( )
Q(\n)
Q(maximum recursion depth exceeded)
Q(<module>)
Q(<lambda>)
Q(<listcomp>)
Q(<dictcomp>)
Q(<setcomp>)
Q(<genexpr>)
Q(<string>)
Q(<stdin>)
Q(utf-8)


Q(.frozen)







Q(/lib)
Q(ADC)

Q(ADC)

Q(ALT)

Q(ALT)

Q(ALT_GPCK)

Q(ALT_I2C)

Q(ALT_PIO0)

Q(ALT_PIO1)

Q(ALT_PWM)

Q(ALT_SIO)

Q(ALT_SPI)

Q(ALT_UART)

Q(ALT_USB)

Q(ARRAY)

Q(AUTO)

Q(AdvancedTimer)

Q(AdvancedTimer)

Q(AdvancedTimer)

Q(ArithmeticError)

Q(ArithmeticError)

Q(AssertionError)

Q(AssertionError)

Q(AssertionError)

Q(AttributeError)

Q(AttributeError)

Q(BFINT16)

Q(BFINT32)

Q(BFINT8)

Q(BFUINT16)

Q(BFUINT32)

Q(BFUINT8)

Q(BF_LEN)

Q(BF_POS)

Q(BIG_ENDIAN)

Q(BUILTIN_CDC)

Q(BUILTIN_DEFAULT)

Q(BUILTIN_DEFAULT)

Q(BUILTIN_NONE)

Q(BUILTIN_NONE)

Q(BaseException)

Q(BaseException)

Q(BaseException)

Q(BytesIO)

Q(BytesIO)

Q(CORE_TEMP)

Q(CTS)

Q(CancelledError)

Q(DMA)

Q(DMA)

Q(DeflateIO)

Q(DeflateIO)

Q(EACCES)

Q(EACCES)

Q(EADDRINUSE)

Q(EADDRINUSE)

Q(EAGAIN)

Q(EAGAIN)

Q(EALREADY)

Q(EALREADY)

Q(EBADF)

Q(EBADF)

Q(ECONNABORTED)

Q(ECONNABORTED)

Q(ECONNREFUSED)

Q(ECONNREFUSED)

Q(ECONNRESET)

Q(ECONNRESET)

Q(EEXIST)

Q(EEXIST)

Q(EHOSTUNREACH)

Q(EHOSTUNREACH)

Q(EINPROGRESS)

Q(EINPROGRESS)

Q(EINVAL)

Q(EINVAL)

Q(EIO)

Q(EIO)

Q(EISDIR)

Q(EISDIR)

Q(ENOBUFS)

Q(ENOBUFS)

Q(ENODEV)

Q(ENODEV)

Q(ENOENT)

Q(ENOENT)

Q(ENOMEM)

Q(ENOMEM)

Q(ENOTCONN)

Q(ENOTCONN)

Q(EOFError)

Q(EOFError)

Q(EOPNOTSUPP)

Q(EOPNOTSUPP)

Q(EPERM)

Q(EPERM)

Q(ETIMEDOUT)

Q(ETIMEDOUT)

Q(Ellipsis)

Q(Ellipsis)

Q(Exception)

Q(Exception)

Q(FLOAT32)

Q(FLOAT64)

Q(FileIO)

Q(FileIO)

Q(FileIO)

Q(Flash)

Q(Flash)

Q(FrameBuffer)

Q(FrameBuffer)

Q(FrameBuffer1)

Q(GP0)

Q(GP1)

Q(GP10)

Q(GP11)

Q(GP12)

Q(GP13)

Q(GP14)

Q(GP15)

Q(GP16)

Q(GP17)

Q(GP18)

Q(GP19)

Q(GP2)

Q(GP20)

Q(GP21)

Q(GP22)

Q(GP25)

Q(GP26)

Q(GP27)

Q(GP28)

Q(GP3)

Q(GP4)

Q(GP5)

Q(GP6)

Q(GP7)

Q(GP8)

Q(GP9)

Q(GPCK)

Q(GPCK)

Q(GPCK)

Q(GPCK)

Q(GPCK)

Q(GPCK)

Q(GPIO0)

Q(GPIO0)

Q(GPIO1)

Q(GPIO1)

Q(GPIO10)

Q(GPIO10)

Q(GPIO11)

Q(GPIO11)

Q(GPIO12)

Q(GPIO12)

Q(GPIO13)

Q(GPIO13)

Q(GPIO14)

Q(GPIO14)

Q(GPIO15)

Q(GPIO15)

Q(GPIO16)

Q(GPIO16)

Q(GPIO17)

Q(GPIO17)

Q(GPIO18)

Q(GPIO18)

Q(GPIO19)

Q(GPIO19)

Q(GPIO2)

Q(GPIO2)

Q(GPIO20)

Q(GPIO20)

Q(GPIO21)

Q(GPIO21)

Q(GPIO22)

Q(GPIO22)

Q(GPIO23)

Q(GPIO23)

Q(GPIO24)

Q(GPIO24)

Q(GPIO25)

Q(GPIO25)

Q(GPIO26)

Q(GPIO26)

Q(GPIO27)

Q(GPIO27)

Q(GPIO28)

Q(GPIO28)

Q(GPIO29)

Q(GPIO29)

Q(GPIO3)

Q(GPIO3)

Q(GPIO4)

Q(GPIO4)

Q(GPIO5)

Q(GPIO5)

Q(GPIO6)

Q(GPIO6)

Q(GPIO7)

Q(GPIO7)

Q(GPIO8)

Q(GPIO8)

Q(GPIO9)

Q(GPIO9)

Q(GS2_HMSB)

Q(GS4_HMSB)

Q(GS8)

Q(GZIP)

Q(GeneratorExit)

Q(GeneratorExit)

Q(I2C)

Q(I2C)

Q(I2C)

Q(I2C)

Q(I2C)

Q(I2C)

Q(I2C)

Q(I2C)

Q(I2C)

Q(I2C)

Q(I2C)

Q(I2C)

Q(I2C)

Q(I2C)

Q(I2C)

Q(I2C)

Q(I2C)

Q(I2C)

Q(I2C)

Q(I2C)

Q(I2C)

Q(I2C)

Q(I2C)

Q(I2C)

Q(I2C)

Q(I2C)

Q(I2C)

Q(I2C)

Q(I2C)

Q(I2C)

Q(I2C)

Q(I2C)

Q(I2S)

Q(I2S)

Q(IN)

Q(IN)

Q(INT)

Q(INT16)

Q(INT32)

Q(INT64)

Q(INT8)

Q(INV_RX)

Q(INV_TX)

Q(IN_HIGH)

Q(IN_LOW)

Q(IOBase)

Q(IOBase)

Q(IRQ_BREAK)

Q(IRQ_FALLING)

Q(IRQ_RISING)

Q(IRQ_RXIDLE)

Q(IRQ_SM0)

Q(IRQ_SM1)

Q(IRQ_SM2)

Q(IRQ_SM3)

Q(IRQ_TXIDLE)

Q(ImportError)

Q(ImportError)

Q(IndentationError)

Q(IndentationError)

Q(IndexError)

Q(IndexError)

Q(JOIN_NONE)

Q(JOIN_RX)

Q(JOIN_TX)

Q(KeyError)

Q(KeyError)

Q(KeyboardInterrupt)

Q(KeyboardInterrupt)

Q(LED)

Q(LITTLE_ENDIAN)

Q(LONG)

Q(LONGLONG)

Q(LSB)

Q(LockType)

Q(LookupError)

Q(LookupError)

Q(MONO)

Q(MONO_HLSB)

Q(MONO_HMSB)

Q(MONO_VLSB)

Q(MSB)

Q(MVLSB)

Q(MemoryError)

Q(MemoryError)

Q(NATIVE)

Q(NameError)

Q(NameError)

Q(None)

Q(NoneType)

Q(NotImplemented)

Q(NotImplemented)

Q(NotImplementedError)

Q(NotImplementedError)

Q(ONE_SHOT)

Q(ONE_SHOT)

Q(OPEN_DRAIN)

Q(OPEN_DRAIN)

Q(OSError)

Q(OSError)

Q(OUT)

Q(OUT)

Q(OUT_HIGH)

Q(OUT_LOW)

Q(OrderedDict)

Q(OrderedDict)

Q(OrderedDict)

Q(OverflowError)

Q(OverflowError)

Q(PERIODIC)

Q(PERIODIC)

Q(PIO)

Q(PIO)

Q(PIO0)

Q(PIO0)

Q(PIO0)

Q(PIO0)

Q(PIO0)

Q(PIO0)

Q(PIO0)

Q(PIO0)

Q(PIO0)

Q(PIO0)

Q(PIO0)

Q(PIO0)

Q(PIO0)

Q(PIO0)

Q(PIO0)

Q(PIO0)

Q(PIO0)

Q(PIO0)

Q(PIO0)

Q(PIO0)

Q(PIO0)

Q(PIO0)

Q(PIO0)

Q(PIO0)

Q(PIO0)

Q(PIO0)

Q(PIO0)

Q(PIO0)

Q(PIO0)

Q(PIO0)

Q(PIO1)

Q(PIO1)

Q(PIO1)

Q(PIO1)

Q(PIO1)

Q(PIO1)

Q(PIO1)

Q(PIO1)

Q(PIO1)

Q(PIO1)

Q(PIO1)

Q(PIO1)

Q(PIO1)

Q(PIO1)

Q(PIO1)

Q(PIO1)

Q(PIO1)

Q(PIO1)

Q(PIO1)

Q(PIO1)

Q(PIO1)

Q(PIO1)

Q(PIO1)

Q(PIO1)

Q(PIO1)

Q(PIO1)

Q(PIO1)

Q(PIO1)

Q(PIO1)

Q(PIO1)

Q(POLLERR)

Q(POLLHUP)

Q(POLLIN)

Q(POLLOUT)

Q(PTR)

Q(PULL_DOWN)

Q(PULL_DOWN)

Q(PULL_DOWN)

Q(PULL_UP)

Q(PULL_UP)

Q(PWM)

Q(PWM)

Q(PWM)

Q(PWM)

Q(PWM)

Q(PWM)

Q(PWM)

Q(PWM)

Q(PWM)

Q(PWM)

Q(PWM)

Q(PWM)

Q(PWM)

Q(PWM)

Q(PWM)

Q(PWM)

Q(PWM)

Q(PWM)

Q(PWM)

Q(PWM)

Q(PWM)

Q(PWM)

Q(PWM)

Q(PWM)

Q(PWM)

Q(PWM)

Q(PWM)

Q(PWM)

Q(PWM)

Q(PWM)

Q(PWM)

Q(PWM)

Q(PWRON_RESET)

Q(Pin)

Q(Pin)

Q(PinAF)

Q(RAW)

Q(RGB565)

Q(RTC)

Q(RTC)

Q(RTS)

Q(RX)

Q(RingIO)

Q(RingIO)

Q(RuntimeError)

Q(RuntimeError)

Q(SHIFT_LEFT)

Q(SHIFT_RIGHT)

Q(SHORT)

Q(SIO)

Q(SIO)

Q(SIO)

Q(SIO)

Q(SIO)

Q(SIO)

Q(SIO)

Q(SIO)

Q(SIO)

Q(SIO)

Q(SIO)

Q(SIO)

Q(SIO)

Q(SIO)

Q(SIO)

Q(SIO)

Q(SIO)

Q(SIO)

Q(SIO)

Q(SIO)

Q(SIO)

Q(SIO)

Q(SIO)

Q(SIO)

Q(SIO)

Q(SIO)

Q(SIO)

Q(SIO)

Q(SIO)

Q(SIO)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SPI)

Q(SPI)

Q(STEREO)

Q(Signal)

Q(Signal)

Q(SoftI2C)

Q(SoftI2C)

Q(SoftSPI)

Q(SoftSPI)

Q(StateMachine)

Q(StateMachine)

Q(StopAsyncIteration)

Q(StopAsyncIteration)

Q(StopAsyncIteration)

Q(StopIteration)

Q(StopIteration)

Q(StringIO)

Q(StringIO)

Q(SyntaxError)

Q(SyntaxError)

Q(SystemExit)

Q(SystemExit)

Q(TX)

Q(Task)

Q(Task)

Q(TaskQueue)

Q(TaskQueue)

Q(TextIOWrapper)

Q(TextIOWrapper)

Q(TextIOWrapper)

Q(Timer)

Q(Timer)

Q(Timer)

Q(Timer)

Q(TypeError)

Q(TypeError)

Q(UART)

Q(UART)

Q(UART)

Q(UART)

Q(UART)

Q(UART)

Q(UART)

Q(UART)

Q(UART)

Q(UART)

Q(UART)

Q(UART)

Q(UART)

Q(UART)

Q(UART)

Q(UART)

Q(UART)

Q(UART)

Q(UART)

Q(UART)

Q(UART)

Q(UART)

Q(UART)

Q(UART)

Q(UART)

Q(UART)

Q(UART)

Q(UART)

Q(UART)

Q(UART)

Q(UART)

Q(UART)

Q(UINT)

Q(UINT16)

Q(UINT32)

Q(UINT64)

Q(UINT8)

Q(ULONG)

Q(ULONGLONG)

Q(USB)

Q(USB)

Q(USB)

Q(USB)

Q(USB)

Q(USB)

Q(USB)

Q(USB)

Q(USB)

Q(USB)

Q(USB)

Q(USB)

Q(USB)

Q(USB)

Q(USB)

Q(USB)

Q(USB)

Q(USB)

Q(USB)

Q(USB)

Q(USB)

Q(USB)

Q(USB)

Q(USB)

Q(USB)

Q(USB)

Q(USB)

Q(USB)

Q(USB)

Q(USB)

Q(USBDevice)

Q(USBDevice)

Q(USHORT)

Q(UnicodeError)

Q(UnicodeError)

Q(VOID)

Q(ValueError)

Q(ValueError)

Q(VfsFat)

Q(VfsFat)

Q(VfsFat)

Q(VfsLfs2)

Q(VfsLfs2)

Q(VfsLfs2)

Q(ViperTypeError)

Q(ViperTypeError)

Q(WDT)

Q(WDT)

Q(WDT_RESET)

Q(ZLIB)

Q(ZeroDivisionError)

Q(ZeroDivisionError)

Q(_)

Q(_0x0a_)

Q(__abs__)

Q(__add__)

Q(__aenter__)

Q(__aenter__)

Q(__aexit__)

Q(__aexit__)

Q(__aiter__)

Q(__and__)

Q(__anext__)

Q(__bases__)

Q(__bool__)

Q(__build_class__)

Q(__build_class__)

Q(__call__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__class__)

Q(__complex__)

Q(__contains__)

Q(__contains__)

Q(__contains__)

Q(__del__)

Q(__del__)

Q(__del__)

Q(__del__)

Q(__del__)

Q(__del__)

Q(__delattr__)

Q(__delattr__)

Q(__delattr__)

Q(__delattr__)

Q(__delete__)

Q(__delete__)

Q(__delete__)

Q(__delitem__)

Q(__delitem__)

Q(__dict__)

Q(__dict__)

Q(__dict__)

Q(__dir__)

Q(__divmod__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__enter__)

Q(__eq__)

Q(__eq__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__exit__)

Q(__file__)

Q(__file__)

Q(__file__)

Q(__float__)

Q(__floordiv__)

Q(__ge__)

Q(__get__)

Q(__get__)

Q(__get__)

Q(__getattr__)

Q(__getattr__)

Q(__getattr__)

Q(__getattr__)

Q(__getitem__)

Q(__getitem__)

Q(__getitem__)

Q(__getitem__)

Q(__globals__)

Q(__gt__)

Q(__hash__)

Q(__iadd__)

Q(__import__)

Q(__import__)

Q(__init__)

Q(__init__)

Q(__init__)

Q(__init__)

Q(__init__)

Q(__int__)

Q(__invert__)

Q(__isub__)

Q(__iter__)

Q(__le__)

Q(__len__)

Q(__lshift__)

Q(__lt__)

Q(__main__)

Q(__main__)

Q(__matmul__)

Q(__mod__)

Q(__module__)

Q(__mul__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__name__)

Q(__ne__)

Q(__neg__)

Q(__new__)

Q(__new__)

Q(__new__)

Q(__next__)

Q(__next__)

Q(__next__)

Q(__next__)

Q(__or__)

Q(__path__)

Q(__path__)

Q(__path__)

Q(__path__)

Q(__pos__)

Q(__pow__)

Q(__qualname__)

Q(__radd__)

Q(__rand__)

Q(__repl_print__)

Q(__repl_print__)

Q(__repr__)

Q(__repr__)

Q(__reversed__)

Q(__rfloordiv__)

Q(__rlshift__)

Q(__rmatmul__)

Q(__rmod__)

Q(__rmul__)

Q(__ror__)

Q(__rpow__)

Q(__rrshift__)

Q(__rshift__)

Q(__rsub__)

Q(__rtruediv__)

Q(__rxor__)

Q(__set__)

Q(__set__)

Q(__set__)

Q(__setattr__)

Q(__setattr__)

Q(__setattr__)

Q(__setattr__)

Q(__setitem__)

Q(__setitem__)

Q(__str__)

Q(__sub__)

Q(__traceback__)

Q(__truediv__)

Q(__xor__)

Q(_asyncio)

Q(_asyncio)

Q(_brace_open__colon__hash_b_brace_close_)

Q(_dot__dot__dot__space_)

Q(_dot_frozen)

Q(_gt__gt__gt__space_)

Q(_lt_dictcomp_gt_)

Q(_lt_dictcomp_gt_)

Q(_lt_genexpr_gt_)

Q(_lt_genexpr_gt_)

Q(_lt_lambda_gt_)

Q(_lt_lambda_gt_)

Q(_lt_listcomp_gt_)

Q(_lt_listcomp_gt_)

Q(_lt_module_gt_)

Q(_lt_module_gt_)

Q(_lt_setcomp_gt_)

Q(_lt_setcomp_gt_)

Q(_lt_string_gt_)

Q(_machine)

Q(_mpy)

Q(_onewire)

Q(_percent__hash_o)

Q(_percent__hash_x)

Q(_rp2)

Q(_slash_)

Q(_slash_)

Q(_slash_)

Q(_slash_)

Q(_slash_)

Q(_slash_)

Q(_space_)

Q(_star_)

Q(_star_)

Q(_star_)

Q(_task_queue)

Q(_thread)

Q(_thread)

Q(a2b_base64)

Q(abs)

Q(abs_tol)

Q(acos)

Q(acosh)

Q(acquire)

Q(active)

Q(active)

Q(active)

Q(add)

Q(add)

Q(add)

Q(add_ints)

Q(add_program)

Q(addr)

Q(addressof)

Q(addrsize)

Q(aes)

Q(aes)

Q(ahb_err)

Q(align)

Q(all)

Q(alloc_emergency_exception_buf)

Q(allocate_lock)

Q(alt)

Q(and_)

Q(any)

Q(any)

Q(any)

Q(append)

Q(append)

Q(append)

Q(appendleft)

Q(arg)

Q(args)

Q(argv)

Q(array)

Q(array)

Q(array)

Q(array)

Q(asin)

Q(asinh)

Q(asm_pio_encode)

Q(asm_thumb)

Q(asr)

Q(atan)

Q(atan2)

Q(atanh)

Q(b)

Q(b2a_base64)

Q(baudrate)

Q(baudrate)

Q(baudrate)

Q(baudrate)

Q(baudrate)

Q(bin)

Q(binascii)

Q(binascii)

Q(bits)

Q(bits)

Q(bits)

Q(bits)

Q(bits)

Q(bits)

Q(bitstream)

Q(bl)

Q(blit)

Q(board)

Q(board)

Q(bool)

Q(bool)

Q(bool)

Q(bool)

Q(bool)

Q(bootloader)

Q(bootsel_button)

Q(bound_method)

Q(bswap)

Q(buf)

Q(buffer)

Q(buffering)

Q(builtin_driver)

Q(builtin_driver)

Q(builtins)

Q(builtins)

Q(busy)

Q(bx)

Q(bytearray)

Q(bytearray)

Q(bytearray_at)

Q(bytecode)

Q(byteorder)

Q(bytes)

Q(bytes)

Q(bytes)

Q(bytes_at)

Q(calcsize)

Q(callable)

Q(callback)

Q(cancel)

Q(ceil)

Q(center)

Q(cexample)

Q(cexample)

Q(chain_to)

Q(channel)

Q(chdir)

Q(chdir)

Q(chdir)

Q(chdir)

Q(chdir)

Q(choice)

Q(chr)

Q(classmethod)

Q(classmethod)

Q(clear)

Q(clear)

Q(clear)

Q(close)

Q(close)

Q(close)

Q(close)

Q(close)

Q(close)

Q(close)

Q(close)

Q(close)

Q(closure)

Q(clz)

Q(cmath)

Q(cmath)

Q(cmp)

Q(code)

Q(collect)

Q(collections)

Q(collections)

Q(compile)

Q(compile)

Q(complex)

Q(complex)

Q(config)

Q(config)

Q(const)

Q(const)

Q(control_xfer_cb)

Q(copy)

Q(copy)

Q(copy)

Q(copy)

Q(copysign)

Q(coro)

Q(cos)

Q(cos)

Q(cosh)

Q(count)

Q(count)

Q(count)

Q(count)

Q(count)

Q(count)

Q(count)

Q(cppexample)

Q(cppexample)

Q(cppfunc)

Q(cpsid)

Q(cpsie)

Q(cpu)

Q(cpu)

Q(crc32)

Q(crc8)

Q(cryptolib)

Q(cryptolib)

Q(ctrl)

Q(ctrl)

Q(ctrl)

Q(cts)

Q(cur_task)

Q(cur_task)

Q(data)

Q(data)

Q(data)

Q(datetime)

Q(decode)

Q(decrypt)

Q(deepsleep)

Q(default)

Q(default)

Q(deflate)

Q(deflate)

Q(degrees)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(deinit)

Q(delattr)

Q(deleter)

Q(deque)

Q(deque)

Q(desc_cfg)

Q(desc_cfg)

Q(desc_cfg)

Q(desc_dev)

Q(desc_dev)

Q(desc_dev)

Q(desc_strs)

Q(dht_readinto)

Q(dict)

Q(dict)

Q(dict_view)

Q(difference)

Q(difference)

Q(difference_update)

Q(digest)

Q(digest)

Q(dir)

Q(disable)

Q(disable_irq)

Q(discard)

Q(divmod)

Q(doc)

Q(done)

Q(dump)

Q(dumps)

Q(dupterm)

Q(dupterm_notify)

Q(duty_ns)

Q(duty_ns)

Q(duty_u16)

Q(duty_u16)

Q(e)

Q(e)

Q(ellipse)

Q(enable)

Q(enable)

Q(enable_irq)

Q(encode)

Q(encoding)

Q(encrypt)

Q(end)

Q(end)

Q(endswith)

Q(enumerate)

Q(enumerate)

Q(ep_max)

Q(ep_max)

Q(erf)

Q(erfc)

Q(errno)

Q(errno)

Q(errno)

Q(errno)

Q(errorcode)

Q(eval)

Q(eval)

Q(exec)

Q(exec)

Q(exec)

Q(execfile)

Q(exit)

Q(exit)

Q(exp)

Q(exp)

Q(expm1)

Q(extend)

Q(extend)

Q(extend)

Q(fabs)

Q(factorial)

Q(feed)

Q(file)

Q(file)

Q(fill)

Q(fill_rect)

Q(filter)

Q(filter)

Q(find)

Q(firstbit)

Q(firstbit)

Q(firstbit)

Q(firstbit)

Q(flags)

Q(float)

Q(float)

Q(floor)

Q(flow)

Q(flush)

Q(flush)

Q(flush)

Q(flush)

Q(fmod)

Q(format)

Q(format)

Q(framebuf)

Q(framebuf)

Q(freq)

Q(freq)

Q(freq)

Q(freq)

Q(freq)

Q(freq)

Q(freq)

Q(frexp)

Q(from_bytes)

Q(fromhex)

Q(fromkeys)

Q(frozenset)

Q(frozenset)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(function)

Q(gamma)

Q(gc)

Q(gc)

Q(generator)

Q(generator)

Q(generator)

Q(get)

Q(get)

Q(get_ident)

Q(getattr)

Q(getcwd)

Q(getcwd)

Q(getcwd)

Q(getcwd)

Q(getrandbits)

Q(getter)

Q(getvalue)

Q(globals)

Q(gmtime)

Q(group)

Q(groups)

Q(handler)

Q(handler)

Q(handler)

Q(handler)

Q(handler)

Q(hard)

Q(hard)

Q(hard)

Q(hard)

Q(hard)

Q(hasattr)

Q(hash)

Q(hashlib)

Q(hashlib)

Q(heap_lock)

Q(heap_unlock)

Q(heapify)

Q(heappop)

Q(heappush)

Q(heapq)

Q(heapq)

Q(hellocpp)

Q(help)

Q(hex)

Q(hex)

Q(hexlify)

Q(high)

Q(high_pri)

Q(hline)

Q(ibuf)

Q(id)

Q(id)

Q(id)

Q(id)

Q(idle)

Q(ilistdir)

Q(ilistdir)

Q(ilistdir)

Q(ilistdir)

Q(ilistdir)

Q(imag)

Q(implementation)

Q(in_base)

Q(in_shiftdir)

Q(inc_read)

Q(inc_write)

Q(index)

Q(index)

Q(index)

Q(indices)

Q(inf)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(init)

Q(input)

Q(insert)

Q(int)

Q(int)

Q(int)

Q(int)

Q(int)

Q(intersection)

Q(intersection)

Q(intersection_update)

Q(invert)

Q(invert)

Q(invert)

Q(invert)

Q(io)

Q(io)

Q(ioctl)

Q(ioctl)

Q(ioctl)

Q(ipoll)

Q(irq)

Q(irq)

Q(irq)

Q(irq)

Q(irq)

Q(irq)

Q(irq)

Q(irq_quiet)

Q(isalpha)

Q(isclose)

Q(isdigit)

Q(isdisjoint)

Q(isdisjoint)

Q(isenabled)

Q(isfinite)

Q(isinf)

Q(isinstance)

Q(islower)

Q(isnan)

Q(isspace)

Q(issubclass)

Q(issubset)

Q(issubset)

Q(issuperset)

Q(issuperset)

Q(isupper)

Q(items)

Q(iter)

Q(iterable)

Q(iterator)

Q(iterator)

Q(iterator)

Q(iterator)

Q(iterator)

Q(iterator)

Q(itf_max)

Q(itf_max)

Q(jmp_pin)

Q(join)

Q(json)

Q(json)

Q(kbd_intr)

Q(keepends)

Q(key)

Q(key)

Q(keys)

Q(keys)

Q(label)

Q(ldexp)

Q(ldr)

Q(ldrb)

Q(ldrex)

Q(ldrh)

Q(len)

Q(len)

Q(lgamma)

Q(libc_ver)

Q(lightsleep)

Q(line)

Q(list)

Q(list)

Q(listdir)

Q(little)

Q(little)

Q(little)

Q(load)

Q(loads)

Q(locals)

Q(localtime)

Q(lock)

Q(locked)

Q(log)

Q(log)

Q(log10)

Q(log10)

Q(log2)

Q(lookahead)

Q(low)

Q(lower)

Q(lsl)

Q(lsr)

Q(lstrip)

Q(machine)

Q(machine)

Q(machine)

Q(map)

Q(map)

Q(match)

Q(match)

Q(match)

Q(math)

Q(math)

Q(max)

Q(maximum_space_recursion_space_depth_space_exceeded)

Q(maxsize)

Q(mem)

Q(mem16)

Q(mem32)

Q(mem8)

Q(mem_alloc)

Q(mem_free)

Q(mem_info)

Q(memaddr)

Q(memoryview)

Q(memoryview)

Q(micropython)

Q(micropython)

Q(micropython)

Q(micropython)

Q(min)

Q(miso)

Q(miso)

Q(miso)

Q(mkdir)

Q(mkdir)

Q(mkdir)

Q(mkdir)

Q(mkfs)

Q(mkfs)

Q(mkfs)

Q(mktime)

Q(mode)

Q(mode)

Q(mode)

Q(mode)

Q(modf)

Q(modify)

Q(module)

Q(modules)

Q(modules)

Q(mosi)

Q(mosi)

Q(mosi)

Q(mount)

Q(mount)

Q(mount)

Q(mount)

Q(mount)

Q(mount)

Q(mov)

Q(mov)

Q(movt)

Q(movw)

Q(movwt)

Q(mrs)

Q(mtime)

Q(name)

Q(namedtuple)

Q(nan)

Q(native)

Q(newline)

Q(next)

Q(nodename)

Q(nop)

Q(object)

Q(object)

Q(object)

Q(object)

Q(object)

Q(oct)

Q(off)

Q(off)

Q(on)

Q(on)

Q(onewire)

Q(open)

Q(open)

Q(open)

Q(open)

Q(open)

Q(open_itf_cb)

Q(opt_level)

Q(ord)

Q(os)

Q(os)

Q(out_base)

Q(out_shiftdir)

Q(pack)

Q(pack_ctrl)

Q(pack_into)

Q(parity)

Q(partition)

Q(path)

Q(peek)

Q(pend_throw)

Q(period)

Q(ph_key)

Q(phase)

Q(phase)

Q(phase)

Q(phase)

Q(phase)

Q(pi)

Q(pi)

Q(pixel)

Q(platform)

Q(platform)

Q(platform)

Q(platform)

Q(polar)

Q(polarity)

Q(polarity)

Q(polarity)

Q(polarity)

Q(poll)

Q(poll)

Q(poll)

Q(poly)

Q(pop)

Q(pop)

Q(pop)

Q(pop)

Q(pop)

Q(pop)

Q(popitem)

Q(popleft)

Q(pow)

Q(pow)

Q(preview)

Q(print)

Q(print_exception)

Q(prog)

Q(progsize)

Q(property)

Q(property)

Q(ps1)

Q(ps2)

Q(ptr)

Q(ptr)

Q(ptr16)

Q(ptr16)

Q(ptr32)

Q(ptr32)

Q(ptr8)

Q(ptr8)

Q(pull)

Q(pull_thresh)

Q(push)

Q(push)

Q(push_thresh)

Q(put)

Q(python_compiler)

Q(qstr_info)

Q(r)

Q(radians)

Q(randint)

Q(random)

Q(random)

Q(random)

Q(randrange)

Q(range)

Q(range)

Q(range)

Q(rate)

Q(rb)

Q(rbit)

Q(re)

Q(re)

Q(re)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read)

Q(read_err)

Q(read_u16)

Q(readbit)

Q(readblocks)

Q(readblocks)

Q(readbyte)

Q(readfrom)

Q(readfrom_into)

Q(readfrom_mem)

Q(readfrom_mem_into)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readinto)

Q(readline)

Q(readline)

Q(readline)

Q(readline)

Q(readline)

Q(readline)

Q(readline)

Q(readlines)

Q(readlines)

Q(readlines)

Q(readonly)

Q(readsize)

Q(real)

Q(rect)

Q(rect)

Q(register)

Q(registers)

Q(rel_tol)

Q(release)

Q(release)

Q(remote_wakeup)

Q(remove)

Q(remove)

Q(remove)

Q(remove)

Q(remove)

Q(remove)

Q(remove)

Q(remove)

Q(remove_program)

Q(rename)

Q(rename)

Q(rename)

Q(rename)

Q(replace)

Q(repr)

Q(reset)

Q(reset)

Q(reset_cause)

Q(reset_cb)

Q(restart)

Q(reverse)

Q(reverse)

Q(reversed)

Q(reversed)

Q(rfind)

Q(rindex)

Q(ring_sel)

Q(ring_size)

Q(rmdir)

Q(rmdir)

Q(rmdir)

Q(rmdir)

Q(round)

Q(rp2)

Q(rp2)

Q(rpartition)

Q(rsplit)

Q(rstrip)

Q(rts)

Q(rx)

Q(rx_fifo)

Q(rxbuf)

Q(scan)

Q(schedule)

Q(sck)

Q(sck)

Q(sck)

Q(sck)

Q(scl)

Q(scl)

Q(scroll)

Q(sd)

Q(sda)

Q(sda)

Q(sdiv)

Q(search)

Q(search)

Q(seconds)

Q(seed)

Q(seek)

Q(seek)

Q(seek)

Q(select)

Q(select)

Q(select)

Q(send)

Q(send)

Q(sendbreak)

Q(sep)

Q(sep)

Q(separators)

Q(set)

Q(set)

Q(set_base)

Q(setattr)

Q(setdefault)

Q(setter)

Q(sha1)

Q(sha1)

Q(sha256)

Q(sha256)

Q(shift)

Q(shift)

Q(sideset_base)

Q(sin)

Q(sin)

Q(single)

Q(sinh)

Q(size)

Q(sizeof)

Q(sleep)

Q(sleep_ms)

Q(sleep_us)

Q(slice)

Q(slice)

Q(sniff_en)

Q(soft_reset)

Q(sort)

Q(sorted)

Q(span)

Q(split)

Q(split)

Q(splitlines)

Q(sqrt)

Q(sqrt)

Q(stack_size)

Q(stack_use)

Q(stall)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start)

Q(start_new_thread)

Q(startswith)

Q(stat)

Q(stat)

Q(stat)

Q(stat)

Q(stat)

Q(state)

Q(state)

Q(state_machine)

Q(staticmethod)

Q(staticmethod)

Q(statvfs)

Q(statvfs)

Q(statvfs)

Q(statvfs)

Q(stderr)

Q(stdin)

Q(stdout)

Q(step)

Q(step)

Q(stop)

Q(stop)

Q(stop)

Q(stop)

Q(str)

Q(str)

Q(str)

Q(str)

Q(str)

Q(str_max)

Q(str_max)

Q(strb)

Q(strex)

Q(strh)

Q(strip)

Q(struct)

Q(struct)

Q(struct)

Q(struct)

Q(sub)

Q(sub)

Q(sub)

Q(sub)

Q(submit_xfer)

Q(sum)

Q(super)

Q(super)

Q(super)

Q(symmetric_difference)

Q(symmetric_difference)

Q(symmetric_difference_update)

Q(sync)

Q(sync)

Q(sys)

Q(sys)

Q(sysname)

Q(tan)

Q(tanh)

Q(tau)

Q(tell)

Q(tell)

Q(tell)

Q(text)

Q(threshold)

Q(throw)

Q(throw)

Q(tick_hz)

Q(ticks_add)

Q(ticks_cpu)

Q(ticks_diff)

Q(ticks_ms)

Q(ticks_us)

Q(time)

Q(time)

Q(time)

Q(time)

Q(time_ns)

Q(time_pulse_us)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout)

Q(timeout_char)

Q(to_bytes)

Q(toggle)

Q(treq_sel)

Q(trigger)

Q(trigger)

Q(trigger)

Q(trigger)

Q(trigger)

Q(trigger)

Q(trunc)

Q(tuple)

Q(tuple)

Q(tuple)

Q(tx)

Q(tx_fifo)

Q(txbuf)

Q(txdone)

Q(type)

Q(type)

Q(uctypes)

Q(uctypes)

Q(uctypes)

Q(udiv)

Q(uint)

Q(uint)

Q(uint)

Q(umount)

Q(umount)

Q(umount)

Q(umount)

Q(umount)

Q(uname)

Q(unhexlify)

Q(uniform)

Q(union)

Q(union)

Q(unique_id)

Q(unlink)

Q(unpack)

Q(unpack_ctrl)

Q(unpack_from)

Q(unregister)

Q(update)

Q(update)

Q(update)

Q(update)

Q(upper)

Q(urandom)

Q(usys)

Q(utf_hyphen_8)

Q(utf_hyphen_8)

Q(value)

Q(value)

Q(value)

Q(value)

Q(value)

Q(values)

Q(vcmp)

Q(vcvt_f32_s32)

Q(vcvt_s32_f32)

Q(version)

Q(version)

Q(version)

Q(version_info)

Q(vfs)

Q(vfs)

Q(viper)

Q(vldr)

Q(vline)

Q(vmov)

Q(vmrs)

Q(vneg)

Q(vsqrt)

Q(vstr)

Q(wfi)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write)

Q(write_err)

Q(write_readinto)

Q(writebit)

Q(writeblocks)

Q(writeblocks)

Q(writebyte)

Q(writeto)

Q(writeto_mem)

Q(writevto)

Q(ws)

Q(xfer_cb)

Q(zip)

Q(zip)
