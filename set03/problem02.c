//A triangles side can have both integer value or floating value. 
#include<stdio.h>
#include<math.h>
#define p 0.00001
//#def cmpf(a,b) ((a-p))
//fabs(a-b)<p
//#define ISS(a,b,c) (((a - p) < (b)) && ((a + p) > b) && ((a - p) < c) && ((a + p) > c) && ((b - p) < a) && ((b + p) > a) && ((b - p) < c) && ((b + p) > c) && ((c - p) < a) && ((c + p) > a) && ((c - p) < b) && ((c + p) > b))
//#define ISS(a,b,c) ((fabs(a - p) < (b)) && (fabs(a + p) > b) && (fabs(a - p) < c) && (fabs(a + p) > c) && (fabs(b - p) < a) && (fabs(b + p) > a) && (fabs(b - p) < c) && (fabs(b + p) > c) && (fabs(c - p) < a) && (fabs(c + p) > a) && (fabs(c - p) < b) && (fabs(c + p) > b))
#define ISS(a,b,c) (fabs(a-b)>p && fabs(a-c)>p && fabs(b-c)>p)
float input_side();
float check_scalene(float a, float b, float c);
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

float input_side()
{
  float n;
  printf("Enter the side of the triangle\n");
  scanf("%f",&n);
  return n;
}
float check_scalene(float a, float b, float c)
{ 

  if (ISS (a,b,c))
  {
    return 1;
  }
  else
  {
    return 0;
  }
  /*//if we are using Floating numbers we need to set precision
//try it with fab funtion
   float p = 0.00001;//precision
   //make it readable
   //use a macro function
  if (((a - p) < (b)) && ((a + p) > b) != ((a - p) < c) && ((a + p) > c) != ((b - p) < a) && ((b + p) > a)
  != ((b - p) < c) && ((b + p) > c) != ((c - p) < a) && ((c + p) > a) != ((c - p) < b) && ((c + p) > b) )
  {
    return 1;
  }
  else
  {
    return 0;
  }*/
}
void output(float a, float b, float c, float isscalene)
{
  if(isscalene)
  {
    printf("Not scalene");
  }
  else
  {
    printf("Scalene");
  }        
}
