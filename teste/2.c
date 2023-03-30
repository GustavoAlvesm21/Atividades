#include <stdio.h>
#include <stdlib.h>

typedef struct registros
{

    int valor;
    struct registros *prox;
    struct registros *ant;

} registros;

typedef struct lista
{

    struct resgistros *ini;
    struct registros *fim;
    int qtd;
} lista;

lista *inicia_lista();
registros *inicia_registros();
void inserir(lista *l1, int numero);
int calcula(lista *l1);

int main()
{

    int n;

    lista *l1;
    l1 = inicia_lista();

    inserir(l1, 0);
    inserir(l1, 1);

    calcula(l1);

    return 0;
}

registros *inicia_registros()
{

    registros *novo;
    novo = (registros *)malloc(sizeof(lista));

    novo->prox = NULL;
    novo->ant = NULL;
    novo->valor = 0;

    return novo;
}

lista *inicia_lista()
{

    lista *novo;
    novo = (lista *)malloc(sizeof(lista));

    novo->ini = NULL;
    novo->fim = NULL;
    novo->qtd = 0;

    return novo;
}

void inserir(lista *l1, int numero)
{

    registros *novo;

    novo = inicia_registros();

    novo->valor = numero;

    if (l1->ini == NULL)
    {

        l1->ini = novo;
        l1->fim = novo;
        l1->qtd++;
    }
    else
    {

        l1->fim->prox = novo;
        novo->ant = l1->fim;
        l1->fim = novo;
        l1->qtd++;
    }
}

int calcula(lista *l1)
{

    int n;
    int soma;
    registros *aux;
    aux = l1->fim;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        soma = aux->valor + aux->ant->valor;

        if (soma == n)
        {

            printf("%d pertence a sequencia", n);

            return 0;
        }
        else
        {

            inserir(l1, soma);
            aux = l1->fim;
        }
    }

    printf("%d não pertence a sequencia", n);

    return 0;
}