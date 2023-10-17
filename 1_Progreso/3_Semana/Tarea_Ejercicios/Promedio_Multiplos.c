#include <stdio.h>

int main(void){
    //El ejericio nos pide mostrar el promedio entero de los n primeros 
    //multiplos de 3 para un numero n leido

    int num;

    printf("Ingrese un numero entero \n");
    scanf("%d", &num);
    
    int suma=0, contador=0;

//Con el for se evalua cada numero multiplo de 3 hasta llegar al entero ingresado con ayuda del contador
//Los multiplos de 3 se suman en una variable llamada "suma"

    for (int i = 1; contador < num; i++)
    {
        if (i % 3 == 0)
        {
            suma+=i;
            contador++;
        }
        
    }

//if y promedio para determinar el promedio

    if (contador > 0)
    {
        int promedio=suma/contador;
        printf("El promedio de los primeros %d numeros enteros multiplos de 3 son %d\n", num, promedio);
    }else{
        printf("No se encontraron multiplos de 3 para encontrar el promedio\n");

    }
    
    return 0;
}