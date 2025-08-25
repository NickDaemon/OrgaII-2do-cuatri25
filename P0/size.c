#include <stdio.h>

int main() {
    char c = 120;
    unsigned char uc = 250;
    short s = 3200;
    unsigned short us = 65000;
    int i = 2;
    unsigned u = 0;
    long l = 0;
    unsigned long ul = 0;

    printf("char(%lu): %d \n", sizeof(c),c);
    printf("unsigned char(%lu): %d \n", sizeof(uc),uc);
    printf("short(%lu): %d \n", sizeof(s),s);
    printf("unsigned short(%lu): %d \n", sizeof(us),us);
    printf("int(%lu): %d \n", sizeof(i),i);
    printf("unsigned(%lu): %d \n", sizeof(u),u);
    printf("long(%lu): %ld \n", sizeof(l),l);
    printf("unsigned long(%lu): %ld \n", sizeof(ul),ul);

    return 0;
}