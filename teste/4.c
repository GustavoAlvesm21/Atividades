#include <stdio.h>
#include <stdlib.h>

typedef struct registros
{

    float valor;
    float porcentagem;
    struct registros *prox;
    struct registros *ant;

} registros;

typedef struct lista
{

    struct resgistros *ini;
    struct registros *fim;
    float total;
    int qtd;
} lista;

lista *inicia_lista();
registros *inicia_registros();
void inserir(lista *l1, float numero);
void recalcula(lista *l1);
void mostrar(lista *l);

int main()
{

    int n;

    lista *l1;
    l1 = inicia_lista();
    int op;
    float numero;
    do
    {
        scanf("%d", &op); // PRIMEIRO INPUT PARA SELECIONAR OPERAÇÃO E SEGUNDO PARA O VALOR
        switch (op)
        {
        case 1:
            scanf("%f", &numero);
            inserir(l1, numero);
            recalcula(l1);
            break;

        case 2:
            mostrar(l1);
            break;

        case 5:
            break;

        default:
            break;
        }
    } while (op != 5);

    return 0;
}

registros *inicia_registros()
{

    registros *novo;
    novo = (registros *)malloc(sizeof(lista));

    novo->prox = NULL;
    novo->ant = NULL;
    novo->valor = 0;
    novo->porcentagem = 0;

    return novo;
}

lista *inicia_lista()
{

    lista *novo;
    novo = (lista *)malloc(sizeof(lista));

    novo->ini = NULL;
    novo->fim = NULL;
    novo->total = 0;
    novo->qtd = 0;

    return novo;
}

void inserir(lista *l1, float numero)
{

    registros *novo;

    novo = inicia_registros();

    novo->valor = numero;

    if (l1->ini == NULL)
    {

        l1->ini = novo;
        l1->fim = novo;
        l1->total = l1->total + novo->valor;
        l1->qtd++;
    }
    else
    {

        l1->fim->prox = novo;
        novo->ant = l1->fim;
        l1->fim = novo;
        l1->total = l1->total + novo->valor;
        l1->qtd++;
    }
}

void recalcula(lista *l1)
{

    registros *aux;
    aux = l1->ini;

    for (int i = 0; i < l1->qtd; i++)
    {

        aux->porcentagem = (aux->valor * 100) / l1->total;
        aux = aux->prox;
    }
}

void mostrar(lista *l)
{
    registros *aux;

    if (l->ini == NULL)
    {
        printf("lista vazia");
    }
    else
    {
        aux = l->ini;
        printf("total:%.2f\n", l->total);
        while (aux != NULL)
        {
            printf("valor: %.2f / porcentagem em relacao ao total: %.2f\n", aux->valor, aux->porcentagem);
            aux = aux->prox;
        }
    }
}