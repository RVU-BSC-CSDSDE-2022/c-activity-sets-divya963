/*comparing three numbers using call by referene ,using call by reference address is pased during the program
if there we are chainging anything in formal parameter it will effect the actuall parameter*/
#include<stdio.h>
int input(int *a,int *b,int *c);
void compare(int a,int b,int c, int *largest);
void output(int a,int b,int c,int largest);//Actual parameters

int main()// main function
{
  int num1,num2,num3,result;
  input(&num1,&num2,&num3);
  compare(num1,num2,num3,&result);
  output(num1,num2,num3,result);//formal parameters
    return 0; //program is successfully completed
}
int input(int *a,int *b,int *c) /*a pointer to a variable,a address of variable,which means the value in a is 
interpreted as a memory address and the value at that address is loaded*/
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