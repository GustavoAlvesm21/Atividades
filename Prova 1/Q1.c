#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int m,n,soma=0,i;

    printf("Valor de M ->"); 
    scanf("%d",&m);

    printf("Valor de N ->"); 
    scanf("%d",&n);

 
    if(m == 0 || n == 0)
    {
        printf("Algum dos valores e invalido"); 
    }


    for(i=n;i<m;i++)
    {
        soma = soma + i; 
        printf("%d ",i); 
    } 

    printf("%d",m); 

    printf("sum -> %d",soma+m); 

    return 0; 
}