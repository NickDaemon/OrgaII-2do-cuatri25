#include <stdio.h>
#include <stdint.h>

int main(){
    int8_t i8 = 0;
    int16_t i16 = 0;
    int32_t i32 = 0;
    int64_t i64 = 0;

    uint8_t u8 = 0;
    uint16_t u16 = 0;
    uint32_t u32 = 0;
    uint64_t u64 = 0;

    printf("int8: %ld \n", sizeof(i8));
    printf("int16: %ld \n", sizeof(i16));
    printf("int32: %ld \n", sizeof(i32));
    printf("int64: %ld \n", sizeof(i64));

    printf("uint8: %ld \n", sizeof(u8));
    printf("uint16: %ld \n", sizeof(u16));
    printf("uint32: %ld \n", sizeof(u32));
    printf("uint64: %ld \n", sizeof(u64));

    return 0;
}