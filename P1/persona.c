#include <stdio.h>

#include <stdlib.h>
#include <string.h>

typedef struct {char nombre[50]; int edad;} persona_t;

persona_t *crearPersona(char name[], int years) {
    persona_t *persona = malloc(sizeof(persona_t));
    if (!persona) return NULL;

    strcpy((*persona).nombre, name); 
    (*persona).edad = years;

    return persona;
}
void eliminarPersona(persona_t *persona){
    free(persona);
}

int main(){
    persona_t *p = crearPersona("Nico", 32);
    printf("Nombre: %s, Edad: %i\n", (*p).nombre, (*p).edad);
    eliminarPersona(p);
}
