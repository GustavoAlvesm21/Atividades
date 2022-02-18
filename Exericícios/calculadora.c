#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void baskara(); 
void elevado(); 

int main ()
{

    float a,b,r;
    int s; 

    printf("1 - adicao \n 2 - subtracao \n 3 - multiplicacao \n 4 - divicao \n 5 - bhaskara \n 6 - Raiz \n 7 - Elevar a 2 \n 8 - Elevar A a B \n"); 

    scanf("%d",&s);

    switch (s)
    {
        case 1:
        scanf("%f",&a);
        scanf("%f",&b);
        r = a + b; 
        printf("%.2f",r); 
        break; 

        case 2:
        scanf("%f",&a);
        scanf("%f",&b);
        r = a - b; 
        printf("%.2f",r);
        break; 

        case 3:
        scanf("%f",&a);
        scanf("%f",&b);
        r = a * b; 
        printf("%.2f",r);
        break; 

        case 4:
        scanf("%f",&a);
        scanf("%f",&b);
        r = a / b; 
        printf("%.2f",r);
        break;

        case 5:
        baskara(); 
        break; 

        case 6:
        scanf("%f",&a);
        r = sqrt(a);
        printf("%.2f",r); 
        break; 

        case 7:
        scanf("%f",&a);
        r =  a * a; 
        printf("%.2f",r);
        break; 

        case 8:
        elevado();
        break;  
        
    }
    
    return 0; 
}

void baskara()
{
    int a,b,c,d;
    float x1,x2;

    scanf("%d %d %d",&a,&b,&c);   

    d = (b*b) - 4*a*c; 

    if(d < 0)
    {
        printf("Erro. Delta negativo"); 
    }
    else
    {
        x1 = -b - sqrt(d) / (2*a); 
        x2 = -b + sqrt(d) / (2*a);
    }

    printf("x1 = %.2f \n x2 = %.2f",x1,x2); 

}

void elevado()
{
    int a,b,r; 
    
    scanf("%d",&a); 
    scanf("%d",&b);

    for(int i=0;i<b;i++)
    {
        r = a * a; 
        r = r * a; 
    }

    printf("%d",r); 

}