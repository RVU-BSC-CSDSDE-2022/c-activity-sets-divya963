#include<stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main()
{
  int n,sum;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  sum=sum_composite_numbers(n,a);
  output(sum);
  return 0;
}

int input_array_size()
{
  int n;
  printf("Enter the size of the array:\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n, int a[n])
{
  int i;
  printf("Enter the array elements:\n");
  for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
}
int sum_composite_numbers(int n, int a[n])
{
  int i,j,count,result = 0;
  for(i=0;i<n;i++)
    {
      count = 0;
      for(j=1;j<=a[i];j++)
        {
          if(a[i]%j==0)
          {
            count++;
          }
        }
      if(count>2)
      {
        result = result + a[i];
      }
    }
  return result;
}
void output(int sum)
{
  printf("The sum of composite numbers is %d \n",sum);
}
