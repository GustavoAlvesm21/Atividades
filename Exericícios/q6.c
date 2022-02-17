#include <stdio.h>
#include <stdlib.h>

int main() 
{
    
    int x,a,m,d; 

    printf("Insira a sua idade em dias -> "); 
    scanf("%d",&x); 

    a = x / 365 ; 
    m = (x % 365) / 30; 
    d = (x % 365) % 30; 

    printf(" %d ano(s)\n %d meses(s)\n %d dia(s)", a, m, d); 

    return 0; 
}