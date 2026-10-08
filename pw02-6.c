#include <stdio.h>
#include <stdint.h>

int main(){
    unsigned int input;
    uint8_t value;

    scanf("%u", &input);

    value = input;

    value += 10;
    printf("ADD: %u\n", (unsigned int)value);

    value = input;
    value *= 2;
    printf("MUL2: %u\n", (unsigned int)value);

    value = input;
    value *= value;
    printf("SQR: %u\n", (unsigned int)value);

    return 0;
}