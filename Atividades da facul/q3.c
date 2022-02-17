#include <stdio.h> 
#include <stdlib.h> 

int main ()
{

    int valor;
    int notas[7]; 

    printf("Inserir valor:"); 
    scanf("%d,",&valor); 

    notas[0] = valor / 100; 
    notas[1] = (valor % 100) / 50;
    notas[2] = ((valor % 100) % 50) / 20; 
    notas[3] = (((valor % 100) % 50) % 20) / 10;
    notas[4] = ((((valor % 100) % 50) % 20) % 10) / 5;
    notas[5] = (((((valor % 100) % 50) % 20) % 10) % 5) / 2;
    notas[6] = ((((((valor % 100) % 50) % 20) % 10) % 5) % 2) / 1;

    printf("%d nota(s) de 100 \n",notas[0]);
    printf("%d nota(s) de 50 \n",notas[1]);
    printf("%d nota(s) de 20 \n",notas[2]);
    printf("%d nota(s) de 10 \n",notas[3]);
    printf("%d nota(s) de 5 \n",notas[4]);
    printf("%d nota(s) de 2 \n",notas[5]);
    printf("%d nota(s) de 1 \n",notas[6]);


    return 0; 
}