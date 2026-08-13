#include <stdio.h>
int even(int x);
int main()
{
    int num;
    int result;
    printf("Enter the number\n");
    scanf("%d",&num);
    result = even(num);
    if(result>0)
    printf("The number is an even number\n");
    else
    printf("The number is an odd number\n");
}


int even(int x)
{
    int even = 0;
    if(x%2==0)
    {
        even =1;
    }
    return even;

}