#include <stdio.h>
#include <stdlib.h>



int main () 
{
    int t,v;
    double c;  

    printf("Inserir tempo em horas: "); 
    scanf("%d",&t); 

    printf("Inserir velocidade em km/h: "); 
    scanf("%d",&v);

    c = (t * v) / 12;

    printf("%.3f", c);  

    return 0; 
}