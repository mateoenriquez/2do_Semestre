#include <stdio.h>

int main(void){
    
    int cinco=5;

printf("---TABLA DE MULTIPLICAR DEL 5---\n");
    for (int i = 1; i <= 12; i++)
    {
        printf("%d x %d = %d\n", cinco, i, cinco*i);

    }
    
    return 0;
}