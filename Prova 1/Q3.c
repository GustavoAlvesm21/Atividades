#include<stdio.h>
#include <stdlib.h>

int main()
{
    
    int c1=0, c2=0, v1=0, v2=0, l1=0, l2=0; 

    char nome1[20]; 
    char nome2[20]; 

    char texto1[50];
    char texto2[50];

    printf("Nome do arquivo 1 -> ");
    scanf("%s",nome1);
    
    printf("Nome do arquivo 2 -> ");
    scanf("%s",nome2);

    FILE * fp; 

    FILE * fp2; 

    fp = fopen(nome1, "r"); 
    fp2 = fopen(nome2, "r"); 

    if(fp == NULL)
    {
        printf("Erro na abertura do primeiro arquivo");
    }
    else
    {
        while(fgets(texto1,50,fp))
        {
            if(texto1 == 'A' || 'E' || 'I' || 'O' || 'U')
            {
                v1++; 
            }
            else
            {
                c1++; 
            }

            if(texto1 == '\n')
            {
                l1++; 
            }
        }
    }
    
    if(fp2 == NULL)
    {
        printf("Erro na abertura do segundo arquivo");
    }
    else
    {
        while(fgets(texto2,50,fp2))
        {
            if(texto2 == 'A' || 'E' || 'I' || 'O' || 'U')
            {
                v2++; 
            }
            else
            {
                c2++; 
            }

            if(texto2 == '\n')
            {
                l2++; 
            }
        }
    }

    if(v1 > v2)
    {
        printf("texto 1 tem mais vogais"); 
    }
    else
    {
       printf("texto 2 tem mais vogais"); 
    }

    if(c1 > c2)
    {
        printf("texto 1 tem mais consoantes");
    }
    else
    {
        printf("texto 2 tem mais consoantes");
    }

    if(l1 > l2)
    {
        printf("texto 1 tem mais linhas");
    }
    else
    {
        printf("texto 2 tem mais linhas");
    }
    
    return 0; 
}