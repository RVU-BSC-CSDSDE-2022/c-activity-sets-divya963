#include<stdio.h>
#include<math.h>

int input_array_size();
void init_array(int n, int a[n]);
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);

int main()
{
  int n ;
  n= input_array_size();
  int a[n];
  init_array(n,a);
  erotosthenes_sieve(n,a);
  output(n,a);
  return 0;
}

int input_array_size()
{
  int n;
  printf("Enter the size of the array");
  scanf("%d", &n);
  return n;
}
void init_array(int n, int a[n])
{
  for(int i;i<n;i++)
    {
      a[i]=i;
    }
}
void erotosthenes_sieve(int n, int a[n])
{
  int i,j;
  for(i=2;i*i<=n;i++)//finding square root of nth number and calculating the prime numbers till that number and printing the unmarked numbers.
    {
      if(a[i]!=0)
      {
        for(j=i*i;j<=n;j+=i)
          {
            a[j]=0;
          }
      }
    }
}
void output(int n, int a[n])
{
  printf("The prime numbers in between %d are\n",n);
  for(int i=2;i<n;i++)
    {
      if(a[i]!=0)
      {
        printf("%d\n",i);
      }
    }
}