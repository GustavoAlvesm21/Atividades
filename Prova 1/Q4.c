/*
realmente fazer os exercicios do uri ajuda, pois ja vi essa 
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
    
    int t,i,pa,pb,soma=0;
    float ga,gb;  

    printf("Quantos casos->"); 
    scanf("%d",&t);

    for(i = 0; i < t; i++)
    {
        printf("População A -> "); 
        scanf("%d",&pa);

        printf("População B -> "); 
        scanf("%d",&pb);

        printf("Taxa de crescimento de A -> "); 
        scanf("%f",&ga);

        printf("Taxa de crescimento de B -> "); 
        scanf("%f",&gb);

        while(pa <= pb)
        {
            pa += (pa*ga)/100; 
            pb += (pb*gb)/100; 

            soma++ ;
        }

        if(soma > 100)
        {
            printf("mais de 1 seculo."); 
        }
        else
        {
            printf("%d",soma); 
        }
    } 
} 