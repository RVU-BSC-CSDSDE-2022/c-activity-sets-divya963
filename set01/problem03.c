#include<stdio.h>

int input();
int add(int a, int b);
void output(int a,int b, int sum);  //actual argument
//void is only for printing it will not return any value.
int main()
{
  int num1,num2,result;
  num1 = input();
  num2 = input();
  result = add(num1,num2);  //formal argumrnts
  output(num1,num2,result);
  return 0;
}

int input()
{
  int num;
  printf("Enter a number:");
  scanf("%d",&num);
  return num;
}

int add(int a, int b)
{
  return a + b;
}

void output(int a, int b, int sum)
{
  printf("The result is %d ",sum);
  
}