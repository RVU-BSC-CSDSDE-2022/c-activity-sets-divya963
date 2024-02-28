#include<stdio.h>
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int main()
{
  int a,b,gcd;
  a=input();
  b=input();
  gcd=find_gcd(a,b);
  output(a,b,gcd);
  return 0;
}

int input()
{
  int n;
  printf("Enter a number:");
  scanf("%d",&n);
  return n;
}
int find_gcd(int a, int b)
/*find the smaller and then select the smaller in for loop*/
{
  //compare a and b which is smaller
  int smallest,gcd;
  if(a<b)
  {
    smallest = a;
  }
  else
  {
    smallest = b;
  }
  for(int i=1;i<=smallest;i++)/*remove and operator.if we are giving a=2 and b=10000 loop is not exiting till it 
  reaches 10000*/
    {
      if(a%i==0 && b%i==0)
      {        
        gcd=i;
      }    
    }
  return gcd;
}
void output(int a,int b,int gcd)
{
  printf("The GCD of %d and %d is %d",a,b,gcd);
}