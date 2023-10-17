#include <stdio.h>

int main(void){
    //El ejericio nos pide mostrar el promedio entero de los n primeros 
    //multiplos de 3 para un numero n leido

    int num;

    printf("Ingrese un numero entero \n");
    scanf("%d", &num);
    
    int suma=0, contador=0;

    for (int i = 1; contador < num; i++)
    {
        if (i % 3 == 0)
        {
            suma+=i;
            contador++;
        }
        
    }


    
    return 0;
}