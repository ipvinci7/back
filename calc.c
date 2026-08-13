#include <stdio.h>

/*This program is a calculator that uses the switch operator for computation*/
int add(int x,int y);
int sub(int x,int y);
int mul(int x,int y);
int div(int x,int y);
int main()
{
      int x;
      int num1,num2;
      int res;
     printf("Enter the operation you want to perform\n");
    printf("Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division\n");
    
  scanf("%d",&x);
  printf("Enter the first operands\n");
  scanf("%d\n",&num1);
  printf("Enter the second operand\n");
  scanf("%d\n",&num2);
  switch(x)
  {
     case 1:
     res = add(num1,num2);
     break;
     case 2:
     res = sub(num1,num2);
     break;
     case 3:
     res = mul(num1,num2);
     break;
     res = div(num1,num2);
     break;
     default:
     printf("Invalid operation");
  }
  printf("The result of the operation is %d",res);
  return 0;
}


int add(int x,int y)
{
    return x+y;
}
int sub(int x,int y)
{
    return x-y;
}
int mul(int x,int y)
{
    return x*y;
}
int div(int x,int y)
{
    return x/y;
}