#include<stdio.h>
int input_number();
int is_prime(int );
void output(int n, int reult);

int main()
{
  int num,result;
  num = input_number();
  result = is_prime(num);
  output(num,result);
  return 0;
}
int input_number()
{
  int num;
  printf("enter the number");
  scanf("%d",&num);
  return num;
}
int is_prime(int n)
{
  int i,result;
  for(i=2;i<n;i++)
    {
      if(n%i==0)
      {
        result = 0;
        break;
      }
        else
      {
        result = 1;
      }
    }
}
void output(int n, int result)
{
  if(result)
  printf("%d is prime",n);
  else
  printf("%d is not a prime number",n);  
}