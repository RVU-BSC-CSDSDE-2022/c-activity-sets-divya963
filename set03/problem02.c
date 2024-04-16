//A triangles side can have both integer value or floating value. 
#include<stdio.h>

int input_side();
int check_scalene(float a, float b, float c);
void output(float a, float b, float c, float isscalene);

int main()
{
  float a,b,c,isscalene;
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
int check_scalene(float a, float b, float c)
{
  if(a!=b && b!=c && a!=c)
  {
    return 1;
  }
return 0;
}
void output(float a, float b, float c, float isscalene)
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
