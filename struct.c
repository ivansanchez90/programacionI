struct Persona {
    char nombre[50];
    int edad;
    float altura;
};



// Inicialización en declaración
struct Persona persona1 = {"Juan Pérez", 30, 1.75};

#include <stdio.h>
#include <string.h>

typedef struct {
    char nombre[50];
    int edad;
    float altura;
} Persona;

void imprimirPersona(Persona p) {
    printf("Nombre: %s\n", p.nombre);
    printf("Edad: %d\n", p.edad);
    printf("Altura: %.2f\n", p.altura);
}

int main() {
    Persona persona1 = {"Juan Pérez", 30, 1.75};
    Persona persona2;
    
    strcpy(persona2.nombre, "María García");
    persona2.edad = 25;
    persona2.altura = 1.68;
    
    printf("Persona 1:\n");
    imprimirPersona(persona1);
    
    printf("\nPersona 2:\n");
    imprimirPersona(persona2);
    
    return 0;
}