#include <stdio.h>
#include <string.h>

int es_palindromo(char *cadena, int indice, int fin);

int main()
{
    char cadena[100];
    printf("Ingrese una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);
    cadena[strcspn(cadena, "\n")] = 0;
    int longitud = strlen(cadena);
    if (es_palindromo(cadena, 0, longitud - 1))
        printf("La cadena es un palíndromo.\n");
    else
        printf("La cadena no es un palíndromo.\n");
    
    return 0;
}
int es_palindromo(char *cadena, int indice, int fin)
{
    if (indice >= fin)
        return 1; 

    if (cadena[indice] != cadena[fin])
        return 0;

    return es_palindromo(cadena, indice + 1, fin - 1); 
}