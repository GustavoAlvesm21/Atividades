/* Dois carros (X e Y) partem na mesma direção. O carro X sai com uma velocidade constante de 60 km / he o carro Y sai com uma velocidade 

constante de 90 km / h.

Em uma hora (60 minutos) o carro Y pode distanciar-se 30 quilômetros do carro X, ou seja, pode se afastar um quilômetro a cada 2 minutos.

Leia a distância (em km) e calcule quanto tempo leva (em minutos) para o carro Y percorrer essa distância em relação ao outro carro. */

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int d,km; 

    printf("Inserir distancia:"); 
    scanf("%d", &km); 

    d = km * 2; 

    printf("%d minutos", d); 

}