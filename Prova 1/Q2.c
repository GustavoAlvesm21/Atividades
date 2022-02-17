#include<stdio.h>
#include <stdlib.h>

typedef struct coordenada
{
    int x; 
    int y;
}coordenada;

int main()
{
    int i,n,x,y,q1=0,q2=0,q3=0,q4=0,cx=0,cy=0,nula=0;
    struct coordenada a[10]; 

    printf("Insira N-> "); 
    scanf("%d",&n); 

    for(i=0;i<n;i++)
    {
        printf("coordenada de x:");
        scanf("%d",&a[i].x); 

        printf("coordenada de y:");
        scanf("%d",&a[i].y);

        if(a[i].x > 0 && a[i].y > 0)
        {
          q1++; 
        }
        else if (a[i].x < 0 && a[i].y > 0)
        {
          q2++; 
        }
        else if(a[i].x < 0 && a[i].y < 0)
        {
          q3++; 
        }
        else
        {
          q4++; 
        }

        if(a[i].x == 0)
        {
          cx++; 
        }
        if(a[i].y == 0)
        {
          cy++; 
        }
        if(a[i].x == 0 && a[i].y == 0)
        {
          nula++;
        }
    }

    FILE * fp; 

    fp = fopen("resultado.txt","w");
     if(fp == NULL)
     {
         printf("Erro na abertura do arquivo"); 
     }
     else
     {
        fprintf(fp,"%d",q1); 
        fprintf(fp,"%d",q2);
        fprintf(fp,"%d",q3);
        fprintf(fp,"%d",q4);
        fprintf(fp,"%d",cx);
        fprintf(fp,"%d",cy);
        fprintf(fp,"%d",nula);
     }

     fclose(fp); 
  
    
    return 0; 
}