#include <stdio.h>

int factorial(int n);

int main(){
    int i = 6;
    int n = factorial(i);
    printf("El factorial de %i es: %i\n", i, n);
    return 0;
}

int factorial(int n){
    int temp = 1;
    for (int i = 2; i <= n; i++)
    {
        temp *= i;
    }
    return temp;
}