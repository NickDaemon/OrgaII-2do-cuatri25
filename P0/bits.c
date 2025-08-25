#include <stdio.h>
#include <stdint.h>

int main(){
    uint32_t a = 0xF0000000;
    uint32_t b = 0xF;

    uint32_t maskA = 0xE0000000;
    uint32_t maskB = 0x00000007;

    uint32_t aM = a & maskA;
    uint32_t bM = (b & maskB) << 29;
    
    if (aM == bM)
    {
        printf("Los primeros 3 bits de 'a' coinciden con los ultimos 3 bits de 'b'\n");
    }
    else {
        printf("No coinciden\n");
    }
}