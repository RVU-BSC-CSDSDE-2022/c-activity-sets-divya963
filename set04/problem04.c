#include<stdio.h>
int input()
{
  int n;
  printf("enter the number");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n)
{
  int fibo;
  if(n==0)
  {
    fibo=0;
  }
  else if(n==1)
  {
    fibo=1;
  }
  else
  {
    fibo=find_fibo(n-1)+find_fibo(n-2);
  }
  return fibo;
}
void output(int n, int fibo)
{
  printf("fibonocci of %d is %d",n,fibo);
}
int main()
{
  int n, fibo;
  n = input();
  fibo = find_fibo(n);
  output(n,fibo);
  return 0;
}