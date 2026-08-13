#include <stdio.h>

int main()
{
    int x,y,z;
    printf("Enter the numbers you wish to compare\n");
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    if(x>y && x>z)
    printf("%d is the largest of the three numbers\n",x);
    if(y>x && y>z)
    printf("%d is the largest of the three numbers\n",y);
    if(z>x && z>y)
    printf("%d is the largest of the three numbers\n",z);
    return 0;
}