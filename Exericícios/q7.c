#include <stdio.h> 
#include <stdlib.h>


int main () 
{

    int i = 0; 
    int e = 0; 
    int es = 0;  

    FILE *  fp; 
    char numeros[1000]; 

    fp = fopen("teste.txt.txt", "r"); 

    if(fp == NULL)
    {
        printf("Problemas na execução do arquivo"); 
    }
    else 
    {
        while (fgets(numeros, 100 ,fp)!=NULL)
        {
          if(vte(numeros))
            {
                e++ ; 
            }
            else if(vti(numeros))
            {
                i++ ; 
            }
            else(vtes(numeros)); 
            {
                es++ ; 
            }  
        }

        printf("\n %d Tringulo(s) equilatero(s) \n %d Tringulo(s) isocele(s) \n %d Tringulo(s) escaleno(s)",e , i, es);   
    }
}

int vte(char * numeros)
{
    if(numeros[0] == numeros[2] && numeros[2] == numeros[4])
    {
        return 1; 
    }
    else 
    {
        return 0; 
    }
}

int vti(char * numeros)
{
    if(numeros[0] == numeros[2] || numeros[2] == numeros[4] || numeros[0] == numeros[4] && (!vte))
    {
        return 1;
    }
    else 
    {
        return 0; 
    } 
}

int vtes(char * numeros)
{
    if(numeros[0] != numeros[2] && numeros[2] != numeros[4] && (!vte))
    {
        return 1; 
    }
    else
    {
        return 0; 
    }
}
