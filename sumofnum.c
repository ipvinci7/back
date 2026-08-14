#include <stdio.h>

int main()
{
    int sum = 0;
    int number = 10;

    while (number >= 1)
    {
        sum += number;
        number--;
    }

    printf("The sum of the numbers is %d\n", sum);

    return 0;
}