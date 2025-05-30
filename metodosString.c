#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/***************************************
 * FUNCIONES DE MANIPULACIÓN DE STRINGS
 * (biblioteca <string.h>)
 ***************************************/

// 1. strlen - Obtiene longitud de un string
size_t ejemplo_strlen() {
    const char *texto = "Hola Mundo";
    return strlen(texto); // Retorna 10
}

// 2. strcpy - Copia un string
void ejemplo_strcpy() {
    char origen[] = "Copiar esto";
    char destino[50];
    strcpy(destino, origen);
    printf("Copiado: %s\n", destino);
}

// 3. strncpy - Copia con límite de caracteres
void ejemplo_strncpy() {
    char origen[] = "Texto muy largo";
    char destino[10];
    strncpy(destino, origen, sizeof(destino));
    destino[sizeof(destino)-1] = '\0';
    printf("Copia segura: %s\n", destino);
}

// 4. strcat - Concatena strings
void ejemplo_strcat() {
    char str1[50] = "Hola ";
    char str2[] = "Mundo";
    strcat(str1, str2);
    printf("Concatenado: %s\n", str1);
}

// 5. strncat - Concatenación segura
void ejemplo_strncat() {
    char str1[50] = "Hola ";
    char str2[] = "Mundo Cruel";
    strncat(str1, str2, 6); // Solo concatena "Mundo "
    printf("Concatenación segura: %s\n", str1);
}

// 6. strcmp - Compara strings
void ejemplo_strcmp() {
    char *s1 = "abc";
    char *s2 = "abd";
    int resultado = strcmp(s1, s2);
    printf("Comparación: %d\n", resultado); // Negativo (abc < abd)
}

// 7. strncmp - Comparación segura
void ejemplo_strncmp() {
    char *s1 = "abc123";
    char *s2 = "abc456";
    int resultado = strncmp(s1, s2, 3); // Solo compara primeros 3 chars
    printf("Comparación segura: %d\n", resultado); // 0 (abc == abc)
}

// 8. strchr - Busca primera aparición de carácter
void ejemplo_strchr() {
    char texto[] = "Buscar caracter";
    char *pos = strchr(texto, 'c');
    if (pos) {
        printf("Encontrado en posición: %ld\n", pos - texto);
    }
}

// 9. strrchr - Busca última aparición de carácter
void ejemplo_strrchr() {
    char texto[] = "repetir caracter r";
    char *pos = strrchr(texto, 'r');
    if (pos) {
        printf("Última 'r' en posición: %ld\n", pos - texto);
    }
}

// 10. strstr - Busca substring
void ejemplo_strstr() {
    char texto[] = "Este es un texto de ejemplo";
    char *pos = strstr(texto, "texto");
    if (pos) {
        printf("Substring encontrado en posición: %ld\n", pos - texto);
    }
}

// 11. strtok - Divide string en tokens
void ejemplo_strtok() {
    char texto[] = "token1,token2,token3";
    char *token = strtok(texto, ",");
    while (token != NULL) {
        printf("Token: %s\n", token);
        token = strtok(NULL, ",");
    }
}

// 12. strspn - Longitud de prefijo que contiene caracteres dados
void ejemplo_strspn() {
    char texto[] = "1298abc123";
    size_t len = strspn(texto, "1234567890");
    printf("Longitud numérica inicial: %zu\n", len); // 4
}

// 13. strcspn - Longitud de prefijo sin caracteres dados
void ejemplo_strcspn() {
    char texto[] = "fcba73";
    size_t len = strcspn(texto, "1234567890");
    printf("Longitud no numérica inicial: %zu\n", len); // 4
}

// 14. strpbrk - Busca cualquier carácter de un conjunto
void ejemplo_strpbrk() {
    char texto[] = "Este es un ejemplo";
    char *pos = strpbrk(texto, "aeiou");
    if (pos) {
        printf("Primera vocal en posición: %ld\n", pos - texto);
    }
}

// 15. strdup - Duplica string (memoria dinámica)
void ejemplo_strdup() {
    char *original = "Duplicar este texto";
    char *copia = strdup(original);
    printf("Copia: %s\n", copia);
    free(copia); // Importante liberar memoria
}

/***************************************
 * FUNCIONES DE CARÁCTERES
 * (biblioteca <ctype.h>)
 ***************************************/

// 16. isalpha - Verifica si es letra
void ejemplo_isalpha() {
    char c = 'A';
    printf("%c es letra? %d\n", c, isalpha(c));
}

// 17. isdigit - Verifica si es dígito
void ejemplo_isdigit() {
    char c = '5';
    printf("%c es dígito? %d\n", c, isdigit(c));
}

// 18. isalnum - Verifica si es alfanumérico
void ejemplo_isalnum() {
    char c = '_';
    printf("%c es alfanumérico? %d\n", c, isalnum(c));
}

// 19. isspace - Verifica si es espacio en blanco
void ejemplo_isspace() {
    char c = '\n';
    printf("%c es espacio? %d\n", c, isspace(c));
}

// 20. toupper - Convierte a mayúscula
void ejemplo_toupper() {
    char c = 'a';
    printf("Mayúscula: %c\n", toupper(c));
}

// 21. tolower - Convierte a minúscula
void ejemplo_tolower() {
    char c = 'Z';
    printf("Minúscula: %c\n", tolower(c));
}

/***************************************
 * FUNCIONES DE CONVERSIÓN
 * (biblioteca <stdlib.h>)
 ***************************************/

// 22. atoi - Convierte string a int
void ejemplo_atoi() {
    char num[] = "12345";
    int n = atoi(num);
    printf("Número: %d\n", n);
}

// 23. atof - Convierte string a double
void ejemplo_atof() {
    char num[] = "3.1416";
    double d = atof(num);
    printf("Double: %f\n", d);
}

// 24. strtol - Conversión segura a long
void ejemplo_strtol() {
    char num[] = "1234567890";
    char *endptr;
    long l = strtol(num, &endptr, 10);
    printf("Long: %ld\n", l);
}

// 25. strtod - Conversión segura a double
void ejemplo_strtod() {
    char num[] = "3.1416abc";
    char *endptr;
    double d = strtod(num, &endptr);
    printf("Double: %f, Caracteres no convertidos: %s\n", d, endptr);
}

/***************************************
 * FUNCIONES DE MEMORIA
 * (biblioteca <string.h>)
 ***************************************/

// 26. memset - Llena memoria con un valor
void ejemplo_memset() {
    char buffer[100];
    memset(buffer, 'A', sizeof(buffer));
    buffer[sizeof(buffer)-1] = '\0';
    printf("Buffer: %s\n", buffer);
}

// 27. memcpy - Copia bloques de memoria
void ejemplo_memcpy() {
    char origen[] = "Copiar este bloque";
    char destino[50];
    memcpy(destino, origen, strlen(origen)+1);
    printf("Copia: %s\n", destino);
}

// 28. memmove - Copia memoria con superposición
void ejemplo_memmove() {
    char str[] = "memmove puede ser útil";
    memmove(str + 4, str, 10);
    printf("Resultado memmove: %s\n", str);
}

// 29. memcmp - Compara bloques de memoria
void ejemplo_memcmp() {
    char buf1[] = "abc";
    char buf2[] = "abd";
    int res = memcmp(buf1, buf2, 3);
    printf("Comparación: %d\n", res); // Negativo (abc < abd)
}

/***************************************
 * FUNCIONES DE FORMATO
 * (biblioteca <stdio.h>)
 ***************************************/

// 30. sprintf - Escribe formato en string
void ejemplo_sprintf() {
    char buffer[100];
    int a = 10, b = 20;
    sprintf(buffer, "Suma de %d y %d es %d", a, b, a + b);
    printf("Resultado: %s\n", buffer);
}

// 31. snprintf - Versión segura de sprintf
void ejemplo_snprintf() {
    char buffer[10];
    int n = snprintf(buffer, sizeof(buffer), "Texto muy largo");
    printf("Escrito: %s, Longitud necesaria: %d\n", buffer, n);
}

// 32. sscanf - Lee formato desde string
void ejemplo_sscanf() {
    char datos[] = "Juan 25 1.75";
    char nombre[50];
    int edad;
    float altura;
    sscanf(datos, "%s %d %f", nombre, &edad, &altura);
    printf("Nombre: %s, Edad: %d, Altura: %.2f\n", nombre, edad, altura);
}

/***************************************
 * FUNCIÓN PRINCIPAL
 ***************************************/
int main() {
    printf("=== EJEMPLOS DE FUNCIONES PARA STRINGS EN C ===\n\n");
    
    // Ejecutar ejemplos
    ejemplo_strlen();
    ejemplo_strcpy();
    ejemplo_strncpy();
    ejemplo_strcat();
    ejemplo_strncat();
    ejemplo_strcmp();
    ejemplo_strncmp();
    ejemplo_strchr();
    ejemplo_strrchr();
    ejemplo_strstr();
    ejemplo_strtok();
    ejemplo_strspn();
    ejemplo_strcspn();
    ejemplo_strpbrk();
    ejemplo_strdup();
    
    ejemplo_isalpha();
    ejemplo_isdigit();
    ejemplo_isalnum();
    ejemplo_isspace();
    ejemplo_toupper();
    ejemplo_tolower();
    
    ejemplo_atoi();
    ejemplo_atof();
    ejemplo_strtol();
    ejemplo_strtod();
    
    ejemplo_memset();
    ejemplo_memcpy();
    ejemplo_memmove();
    ejemplo_memcmp();
    
    ejemplo_sprintf();
    ejemplo_snprintf();
    ejemplo_sscanf();
    
    printf("\n=== FIN DE EJEMPLOS ===\n");
    return 0;
}