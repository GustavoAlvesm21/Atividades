#include <stdio.h>
#include <stdlib.h> 

int calcula(int x,int y,int sel_op);

int main()
{
    int x,y,sel_op,resul; 

    printf("X -> "); 
    scanf("%d",&x);

    printf("Y -> "); 
    scanf("%d",&y);

    printf("1 -> ADICIONA PAI\n 2 -> MENOS É MAIS \n 3 -> MULTIPLICA SENHOR \n 4 -> SOCIALISMO \n");

    printf("OQ TU QUER FAZER ? "); 
    scanf("%d",&sel_op);

    resul = calcula(x,y,sel_op);

    printf("TA NA MAO BURRO-> %d",resul);

    return 0;  

}

int calcula(int x,int y,int sel_op)
{

    int resul; 

    if(sel_op == 1)
    {
        resul = x + y; 
    }
    else if(sel_op == 2)
    {
        resul = x - y; 
    }
    else if(sel_op == 3)
    {
        resul = x * y; 
    }
    else
    {
        resul = x / y;
    }

    return resul; 
}
