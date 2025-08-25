#include <stdio.h>

typedef struct  {
    char* nombre;
    int vida;
    double ataque;
    double defensa;
} monstruo;

monstruo monstruos[3] = {
    [0] = {"Levi", 100, 1000, 500},
    [1] = {"Tomioka", 90, 800, 700},
    [2] = {"Momo", 80, 800, 600}
};

int main(){
    for (int i = 0; i < 3; i++)
    {
        printf("Nombre: %s, Vida:%i\n", monstruos[i].nombre, monstruos[i].vida);
    }
    return 0;
}