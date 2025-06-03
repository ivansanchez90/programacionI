#include <stdio.h>
int sumar_n_numeros(int n);
int main()
{
    int n;
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Por favor, ingrese un número entero positivo.\n");
        return 1; 
    }

    int resultado = sumar_n_numeros(n);
    printf("La suma de los primeros %d números naturales es: %d\n", n, resultado);
    return 0;
}

int sumar_n_numeros(int n){
    if (n <= 0) {
        return 0; 
    } else {
        return n + sumar_n_numeros(n - 1); 
    }
}