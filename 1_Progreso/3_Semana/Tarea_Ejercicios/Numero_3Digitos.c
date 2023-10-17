#include <stdio.h>

int main(void){
    
    //El ejercicio nos pide que el usuario ingrese un numero entero de 3 digitos
    //y mostrar todos los numeros comprendidos entre 1 y cada uno de los digitos

    int numero;

    printf("Ingresar un numero entero de 3 digitos\n");
    scanf("%d", &numero);

    if (numero < 100 || numero > 999)
    {
        printf("El valor ingresado no contiene los 3 digitos solicitados\n");
        return 0;
    }

    //Se descompone el valor para examinar cada digito del mismo

    int num1 = numero/100;
    int num2 = (numero/10)%10;
    int num3 = numero%10;

    printf("Numeros enteros entre 1 y %d :", num1);
    for (int i = 1; i <= num1; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    printf("Numeros enteros entre 1 y %d :", num2);
    for (int i = 1; i <= num2; i++)
    {
         printf("%d ", i);
    }
    printf("\n");

    printf("Numeros enteros entre 1 y %d :", num3);
    for (int i = 1; i <= num3; i++)
    {
         printf("%d ", i);
    }
    printf("\n");
    
    
    return 0;
}