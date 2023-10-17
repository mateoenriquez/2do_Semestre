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
     

    return 0;
}