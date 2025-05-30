int busquedaBinaria(int arr[], int tamanio, int objetivo) {
    int izquierda = 0;
    int derecha = tamanio - 1;

    while (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;

        // Si el elemento está en el medio
        if (arr[medio] == objetivo)
            return medio;

        // Si el elemento es mayor, ignoramos la mitad izquierda
        if (arr[medio] < objetivo)
            izquierda = medio + 1;
        // Si el elemento es menor, ignoramos la mitad derecha
        else
            derecha = medio - 1;
    }

    // Si llegamos aquí, el elemento no está presente
    return -1;
}