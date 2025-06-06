#include <stdio.h>
#include <stdlib.h>

struct Nodo {
    int dato;
    struct Nodo* siguiente;
};

void agregarPrincipio(struct Nodo **cabeza, int valor){
     struct Nodo* nuevoNodo = (struct Nodo *)malloc(sizeof(struct Nodo));
     nuevoNodo->dato=valor;
     nuevoNodo->siguiente=*cabeza;
     *cabeza=nuevoNodo;
}
void imprimirLista(struct Nodo* cabeza) {
 printf("Lista: ");
 while (cabeza != NULL) {
 printf("%d -> ", cabeza->dato);
 cabeza = cabeza->siguiente;
 }
 printf("NULL\n");
}

void agregarFinal(struct Nodo **cabeza, int valor){
struct Nodo* nuevoNodo=(struct Nodo*)malloc(sizeof(struct Nodo));
}

int main()
{
    struct Nodo* lista = NULL;
    int agregarmas = 0;
    int valor=0;
    char lugar="";
    do{
        printf("\n¿Desea ingresar un elemento al inicio o al final?(i/f)\n");
        scanf("%c",&lugar);
    printf("\nIngrese un valor\n");
    scanf("%d",&valor);
       if(lugar=='i' || lugar =='I'){
        agregarPrincipio(&lista,valor);
       }
       else if (lugar=='f' || lugar == 'F')
       {
        agregarFinal(&lista,valor);
       }
       
    
    agregarPrincipio(&lista,valor);
    
    printf("\nDesea agregar otro elemento? 1_SI 2_NO\n");
    scanf("%d",&agregarmas);


    }while(agregarmas==1);

 imprimirLista(lista);

    
    return 0;
}
