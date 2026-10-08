#include <stdio.h>
#include <stdint.h>

int main(){
    long long int8_values =
        (long long)INT8_MAX - (long long)INT8_MIN + 1;

    unsigned long long uint8_values =
        (unsigned long long)UINT8_MAX - 0 + 1;

    long long int16_values =
        (long long)INT16_MAX - (long long)INT16_MIN + 1;

    unsigned long long uint16_values =
        (unsigned long long)UINT16_MAX - 0 + 1;

    long long int32_values =
        (long long)INT32_MAX - (long long)INT32_MIN + 1;

    unsigned long long uint32_values =
        (unsigned long long)UINT32_MAX - 0 + 1;

    printf("INT8: size=%zu, min=%d, max=%d, values=%lld\n",
           sizeof(int8_t), INT8_MIN, INT8_MAX, int8_values);

    printf("UINT8: size=%zu, min=0, max=%u, values=%llu\n",
           sizeof(uint8_t), UINT8_MAX, uint8_values);

    printf("INT16: size=%zu, min=%d, max=%d, values=%lld\n",
           sizeof(int16_t), INT16_MIN, INT16_MAX, int16_values);

    printf("UINT16: size=%zu, min=0, max=%u, values=%llu\n",
           sizeof(uint16_t), UINT16_MAX, uint16_values);

    printf("INT32: size=%zu, min=%d, max=%d, values=%lld\n",
           sizeof(int32_t), INT32_MIN, INT32_MAX, int32_values);

    printf("UINT32: size=%zu, min=0, max=%u, values=%llu\n",
           sizeof(uint32_t), UINT32_MAX, uint32_values);

    return 0;
}