#include<stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);

int main()
{
  int n,result;
  n=input_number();
  result = is_composite(n);
  output(n,result);
  return 0;
}

int input_number()
{
  int n;
  printf("enter the number\n");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  // we can use square root of n also to find the composite number.
  int i,count=1;
  for(i=2;count<2;i++)
    {
      if(n%i==0)
      {
        count++;
      }
    }
  if(i==n)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}
void output(int n, int result)
{
  if(result==1)
  {
    printf("the composite number is %d \n",n);
  }
  else
  {
    printf("%d is not a composite number \n",n);
  }
}