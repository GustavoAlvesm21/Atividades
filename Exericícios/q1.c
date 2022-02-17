#include <stdio.h>
#include <stdlib.h>

void ordenar(int vetor[], int tam);

int main () { 

    int vetor[10], i; 

    for(i = 0;i < 10;i++){
 
        scanf("%d", &vetor[i]);  
    }

    ordenar(vetor,10);

    FILE * fp = fopen("maior.txt","w");
    if(fp == NULL)
    {
         printf("erro na abertura do arquivo maior.txt"); 
    }
    else
    {
       fprintf(fp,"O maior numero é: %d", vetor[0]); 
       fclose(fp);
    }
     
    FILE * fo = fopen("menor.txt","w"); 
    if(fp == NULL)
    {
         printf("erro na abertura do arquivo menor.txt"); 
    }
    else
    {
       fprintf(fo,"O menor numero é: %d", vetor[9]);
       fclose(fo);  
    }

    return 0; 
}

void ordenar(int * vetor, int tam){
    
    int qv,i; 
    float aux; 

    for(qv=0; qv<tam-1;qv++) {

        for(i=0;i<tam-1-qv;i++){

            if(vetor[i] < vetor[i+1]){

                aux = vetor[i]; 
                vetor[i] = vetor[i+1]; 
                vetor[i+1] = aux; 
            
            }
        }
    
    } 
}
 




