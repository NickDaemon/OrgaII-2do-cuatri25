#include <stdio.h>

int main() {
    float f = 0.1f;     
    double d = 0.1;     

    printf("0.1 como float  = %.20f\n", f);
    printf("0.1 como double = %.20f\n", d);

    int fi = (int) f;
    int di = (int) d;

    printf("f como int: %i\n", fi);
    printf("d como int: %i\n", di);

    return 0;
}

