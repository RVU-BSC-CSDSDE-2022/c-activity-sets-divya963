
#include<stdio.h>

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main()
{
  int a,b,c,isscalene;
  a = input_side();
  b = input_side();
  c = input_side();
  isscalene = check_scalene(a,b,c);
  output(a,b,c,isscalene);
  return 0;
}

int input_side()
{
  int n;
  printf("Enter the side of the triangle\n");
  scanf("%d",&n);
  return n;
}
int check_scalene(int a, int b, int c)
{
  if(a!=b && b!=c && a!=c)
  {
    return 1;
  }
return 0;
}
void output(int a, int b, int c, int isscalene)
{
  if(isscalene)
  {
    printf("scalene");
  }
  else
  {
    printf("Not Scalene");
  }        
}
