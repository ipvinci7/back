#include <stdio.h>

int main()
{
     //this program is to calculate factorial
     int number = 5;
     int result = 1;
     while(number>=1)
     {
         result = result * number;
         number = number -1;
     }
     printf("The result of the number is %d",result);
}