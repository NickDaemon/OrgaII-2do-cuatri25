#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Hola!!";
    size_t letras = strlen(str);

    for (size_t i = 0; i < letras; i++) {
    if (str[i] >= 'a' && str[i] <= 'z') { 
        str[i] = str[i] + ('A' - 'a');    
        }
    }
    printf("En mayus es: %s\n", str);
    return 0;
}