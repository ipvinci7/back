#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Hello\n");
    return 0;
}


int pow(int x, int y)
{
    int result = 1;

    for (int i = 0; i < y; i++)
    {
        result = result * x;
    }

    return result;
}