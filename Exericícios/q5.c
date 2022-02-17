#include <stdio.h>

int main()
{

    int n,c=0,r=0,s=0,t=0,l;
    int qtd;  

    printf("Quantidade de experimentos:");
    scanf("%d",&n); 

    for(int i=0;i<n;i++)
    {
        scanf("%d %c",&qtd,&l); 
    

    if(l == 'C')
    {
        c = c + qtd; 
    }
    if(l == 'R')
    {
        r = r + qtd; 
    }
    if(l == 'S')
    {
        s = s + qtd; 
    }
    t = c + s + r;
    }

     

    printf("Quantidade total: %d\n", t);
    printf("Quantidade de coelhos: %d\n", c);
    printf("Quantidade de ratos: %d\n", r);
    printf("Quantidade de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2f\n", c * qtd /100);
    printf("Percentual de ratos: %.2f\n", r * qtd /100);
    printf("Percentual de sapos: %.2f\n", s * qtd /100);

    return 0; 


}