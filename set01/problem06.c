#include<stdio.h>
int input(int *a,int *b,int *c);
void compare(int a,int b,int c, int *largest);
void output(int a,int b,int c,int largest);

int main()
{
  int num1,num2,num3,result;
  input(&num1,&num2,&num3);
  compare(num1,num2,num3,&result);
  output(num1,num2,num3,result);
    return 0;
}
int input(int *a,int *b,int *c)
{
  printf("Enter the number");
  scanf("%d%d%d",a,b,c);
  return 0;

}
void compare(int a,int b,int c, int *largest)
{
 //*largest=(a>b)?(a>c?a:c):(b>c?b:c);
  if(a>b)
  {
    if(a>c)
      *largest = a;
    else
      *largest = c;
  }
  else
  {
    if(b>c)
      *largest = b;
    else
      *largest = c;
  }

}
void output(int a,int b,int c,int largest)
{
  printf("The largest among %d,%d,%d is %d",a,b,c,largest);
}