#include <stdio.h>


int main(){
    int a = 5;
    int b = 3;
    int c = 2;
    int d = 1;
    
    printf("operación 1: %i\n", ((a + (b*c))/d));
    printf("operación 2: %i\n", (a % b));
    printf("operacion 3: %i\n", (a == b));
    printf("operación 4: %i\n", (a != b));
    printf("operación 5: %i\n", (a & b));
    printf("operación 6: %i\n", (a | b));
    printf("operación 7: %i\n", (~a));
    printf("operación 8: %i\n", (a && b));
    printf("operación 9: %i\n", (a || b));
    printf("operación 10: %x\n", (a << 1));
    printf("operación 11: %x\n", (a >> 1));

}