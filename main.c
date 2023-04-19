#include <stdio.h>
/*
8 . A través de una función que reciba por referencia un número entero, calcular el
cubo de dicho número y mostrarlo en el bloque principal de ejecución del
programa.
 */

int cubo (int *n);

int cubo (int *n){
    int multiplicar=0;
    multiplicar=(*n)*(*n)*(*n);
    return multiplicar;
}

int main() {
    int x=0;
    printf("Ingrese el numero al que quiere calcularle el cubo : ");
    scanf("%d",&x);
    printf("\n El cubo del numero ingresado es : %d",cubo(&x));
    return 0;
}
