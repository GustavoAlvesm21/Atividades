#include <stdio.h>
#include <stdlib.h>

int main()
{

    char palavra[7] = "palavra";

    for (int i = 7; i > -1; i--)
    {

        printf("%c", palavra[i]);
    }

    return 0;
}