#include <stdio.h>

int main (void){
    
    int entero, i, suma=0;

    printf("Ingrese un numero entero positivo\n");
    scanf("%d", &entero);

    if (entero<=0)
    {
        printf("La suma de gauss es: 0 \n");

    }else{
        printf("La suma de gauss de %d es:\n", entero);
        for (i = 1; i <= entero; i++)
        {
            suma+=i;
        }

        printf("La suma de Gauss para el nu5mero %d es: %d\n", entero, suma);
        
    } 


    
    return 0;
}