#include <stdio.h>

int main() {
    int numero;
    
    // Solicitar al usuario que ingrese un número entero
    printf("Ingrese un número entero: ");
    scanf("%d", &numero);

    // Asegurarse de que el número sea positivo
    if (numero < 0) {
        numero = -numero;
    }



    return 0;
}
