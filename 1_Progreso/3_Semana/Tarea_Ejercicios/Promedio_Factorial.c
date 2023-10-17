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

    // Calcular el promedio entero de los factoriales
    int promedio = sumaFactoriales / contador;

    printf("El promedio entero de los factoriales de los números del 1 al %d es: %d\n", numero, promedio);


   

    return 0;
}