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
  printf("enter the number");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  int i,count=0;
  for(i=1;i<=n;i++)
    {
      if(n%i==0)
      {
        count++;
      }
    }
  if(count>2)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
void output(int n, int result)
{
  if(result==1)
  {
    printf("the composite number is %d",n);
  }
  else
  {
    printf("%d is not a composite number",n);
  }
}