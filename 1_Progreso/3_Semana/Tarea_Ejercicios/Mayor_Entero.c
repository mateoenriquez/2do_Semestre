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

    int mayor = -1;  // Inicializar con un valor negativo para asegurarse de que se encuentre un dígito en el número
    int digito;

     while (numero > 0) {
        digito = numero % 10;  // Obtener el dígito más a la derecha

        if (digito > mayor) {
            mayor = digito;
        }

        numero /= 10;  // Eliminar el dígito más a la derecha
    }

    printf("El dígito más grande en el número ingresado es: %d\n", mayor);


       



    return 0;
}
