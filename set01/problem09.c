/*babylonian square root*/
#include<stdio.h>
#include<math.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);

int main()
{
  float n,sqrroot;
  n = input();
  sqrroot = square_root(n);
  output(n,sqrroot);
  return 0;
}
float input()
{
  float n;
  printf("Enter a number:");
  scanf("%f",&n);
  return n;
}
float square_root(float n)
{
  float x = 0.1;
  float xn;
  do{
    xn = 0.5 * (x + n /x) ;
    x = xn;
  } while((xn * xn - n) > 0.00001);
  return xn; 
}
void output(float n, float sqrroot)
{
  printf("The square root %f is %f",n,sqrroot);
}


  