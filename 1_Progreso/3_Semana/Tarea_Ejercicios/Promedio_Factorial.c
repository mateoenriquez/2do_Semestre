#include <stdio.h>

int main(void){
    
    int numero;

    // Solicitar al usuario que ingrese un número entero
    printf("Ingrese un número entero: ");
    scanf("%d", &numero);

    int sumaFactoriales = 0;
    int contador = 0;

    int factorial = 1;
    for (int i = 1; i <= numero; i++) {
        factorial *= i;
        sumaFactoriales += factorial;
        contador++;
    }

   

   

    return 0;
}