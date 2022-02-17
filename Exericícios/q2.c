#include <stdio.h> 
#include <stdlib.h>

int* uniao(int *x1, int *x2, int n1, int n2, int *qtd);
int busca_numero(int * vet, int tam, int x);

int main (){

    int vet1[] = {1,2,3,4,5}; 
    int vet2[] = {2,3,4,7}; 
    int tam1 = 5, tam2 = 4; 

    int *vet3; 
    int tam3 = 0;
    int i; 

    vet3 = uniao(vet1,vet2,tam1,tam2,&tam3); 

    printf("\n União:");

    for(i = 0; i < tam3; i++){

        printf("%d", vet3[i]); 
    } 
    
    return 0; 
}

int busca_numero(int *vet, int tam, int x){

    int i; 
    for(i = 0; i < tam; i++){

        if(vet[i] == x)
        return 1; 
    }

    return 0; 
}

int *uniao(int *x1, int *x2, int n1, int n2, int *qtd){

    int tam3,i; 
    tam3 = n1+n2; 

    int *x3; 

    *qtd = 0; 

    x3 = (int*)malloc(sizeof(int)*tam3);

    *qtd = n1; 
    
    for(i = 0; i < n1; i++){
        
        x3[i] = x1[i];
    }

    for(i = 0; i < n2; i++){

        if(!busca_numero(x3, *qtd, x2[i])){

            x3[*qtd] = x2[i]; 
            (*qtd)++ ; 
        }
    }

    return x3; 
}