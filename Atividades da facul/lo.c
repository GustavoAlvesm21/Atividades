#include <stdio.h> 
#include <stdlib.h>

typedef struct registros
{
    int valor; 
    struct registros *prox; 
    struct registros *ant; 
}registros; 

typedef struct lista
{
    int qtd; 
    struct registros *ini;
    struct registros *fim; 
}lista;    

lista *inicia_lista(); 
registros *inicia_registros(); 
void inserir(lista *l, int numero); 
int remover(lista *l); 
void mostrar(lista *l); 

int main ()
{
    int n; 
    int op; 
     
    lista *l1; 

    l1 = inicia_lista();

    do
    {

        printf("\n1 - inserir"); 
        printf("\n2 - mostrar"); 
        printf("\n3 - sair"); 

        scanf("%d",&op); 

        switch(op)
        {

            case 1:
                scanf("%d",&n);
                inserir(l1,n); 
                break; 

            case 2: 
                mostrar(l1);  
                break;

            case 3:
                break;

            default:
                printf("opção não existente"); 
                break;      
        }        
    }while(op != 3);       


    return 0; 
}

lista *inicia_lista()
{
    lista *novo; 
    novo = (lista*)malloc(sizeof(lista)); 

    novo->qtd = 0; 
    novo->ini = NULL; 
    novo->fim = NULL; 

    return novo; 
}

registros *inicia_registros()
{
    registros *novo; 
    novo = (registros*)malloc(sizeof(registros)); 

    novo->prox = NULL; 
    novo->ant = NULL; 
    novo->valor = 0; 

    return novo; 
}

void inserir(lista *l, int numero)
{
    registros *novo, *aux; 
    novo = inicia_lista();
    novo->valor = numero; 

    if(l->ini == NULL)
    {
        novo->prox = NULL;
        l->ini = novo; 
        l->fim = novo;
        l->qtd++;  
    }
    else if(l->qtd == 1)
    {
        novo->prox = l->ini; 
        l->ini = novo; 
    }
    else  
    {
        aux = l->ini; 
        while(aux != NULL)
        {
            if(numero > aux->valor)
            {
                novo->prox = aux->prox; 
                aux->prox->ant = novo; 
                aux->prox = novo; 
                novo->ant = aux; 
            }
        }
    }

}

void mostrar(lista *l)
{
    registros *aux; 

    if(l->ini == NULL)
    {
        printf("lista vazia");  
    }
    else
    {
        aux = l->ini; 
        while(aux != NULL)
        {
            printf("%d ", aux->valor); 
            aux = aux->prox; 
        }
    }

}

