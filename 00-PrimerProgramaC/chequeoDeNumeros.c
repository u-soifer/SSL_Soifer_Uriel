#include<stdlib.h>
#include<stdio.h>

int main(){

    int numeroMinimo;
    int unNumero = 0;

    printf("Ingrese un numero: ");
    scanf("%d", &numeroMinimo);

    while(unNumero <= numeroMinimo){
        printf("Ingrese un numero mayor a %d\n", numeroMinimo);
        scanf("%d", &unNumero);
    }

    printf("El numero seleccionado luego del proceso es: %d", unNumero);
    
    return 0;
}