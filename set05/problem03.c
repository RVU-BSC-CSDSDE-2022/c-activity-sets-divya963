/*Write a program to find the `nCr` of given n and r
***Function Declarations***
void input_n_and_r(int *n, int *r);
int nCr(int n, int r);
void output(int n, int r, int result);
***Input***
6
3
***Output***
for n = 6 and r = 3, nCr = 20*/

#include<stdio.h>
void input_n_and_r(int *n, int *r);
int nCr(int n, int r);
void output(int n, int r, int result);

int main()
{
  int n,r,result;
  input_n_and_r(&n,&r);
  result = nCr(n,r);
  output(n,r,result);
  return 0;
}

void input_n_and_r(int *n, int *r)
{
  printf("Enter the value of n and r\n");
  scanf("%d%d",n,r);
}
int nCr(int n, int r)
{
  int i;
  if(r>n/2){
    r = n-r;
  }
  long long result = 1;
  for(int i = 1;i<=r;i++)
    {
      result *= n-r+i;
      result /= i;
    }
  return result;
}
void output(int n, int r, int result)
{
  printf("for n = %d and r = %d, nCr = %d\n",n,r,result);
}