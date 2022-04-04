#include <stdio.h> 
#include <stdlib.h> 

typedef struct pilha
{
    int valor; 
    struct pilha *prox; 
} pilha; 

typedef struct lista
{
    int topo; 
    struct pilha *ini;   
} lista; 

void menu(lista *l); 
lista *aloca_lista(); 
pilha *aloca_pilha(); 
void incluir(lista *l,int numero); 
int remover(lista *l); 
void mostrar_lista(lista *l);

int main ()
{

    lista *l1; 

    l1 = aloca_lista(); 

    menu(l1); 

    return 0; 
}


void menu(lista *l)
{
    int numero; 
    int op; 
    int aux=0;

    do
    {
        printf("\n 1 -> Incluir elemento");
        printf("\n 2 -> Remover elemento");
        printf("\n 3 -> Mostrar lista");
        printf("\n 4 -> Sair"); 

        scanf("%d",&op); 

        switch (op)
        {
            case 1: 
                scanf("%d",&numero); 
                incluir(l,numero); 
                break; 

            case 2: 
                aux = remover(l);
                printf("%d foi removido", aux); 
                aux = 0; 
                break;

            case 3: 
                mostrar_lista(l); 
                break;             

            case 4:
                break; 

            default:
                printf("opção invalida"); 
                break;     
        }   
    }
    while(op != 4); 
}

lista *aloca_lista()
{
   lista *novo; 

   novo = (lista*)malloc(sizeof(lista)); 
   novo->ini = NULL;
   novo->topo = 0; 

   return novo; 
}

pilha *aloca_pilha()
{
    pilha *novo; 

    novo = (pilha*)malloc(sizeof(pilha)); 
    novo->prox = NULL; 
    novo->valor = 0; 

    return novo;  
}

void incluir(lista *l,int numero)
{
    pilha *novo; 
    
    novo = aloca_pilha(); 
    novo->valor = numero; 

    if(l->ini == NULL)
    {
        l->ini = novo; 
    }
    else
    {
        novo->prox = l->ini; 
        l->ini = novo; 
    }

    l->topo++;    
}

int remover(lista *l)
{
    int valor; 

    if(l->topo == 0)
    {
        return 0; 
    }
    else
    {
        pilha *aux=NULL; 
        aux = l->ini; 
        valor = aux->valor; 
        l->ini = aux->prox; 
        free(aux); 
        l->topo--; 
        return valor; 
    }

}

void mostrar_lista(lista *l)
{
    pilha *aux;
    if (l->ini == NULL)
    {
        printf("\n Lista vazia");
    }
    else
    {
        aux = l->ini;
        while (aux != NULL)
        {
            printf(" %d", aux->valor);
            aux = aux->prox;
        }
    }
}