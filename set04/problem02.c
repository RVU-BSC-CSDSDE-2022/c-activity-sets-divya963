#include<stdio.h>
#include<math.h>

void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);

int main()
{
  float x1,y1,x2,y2,x3,y3;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  int result=is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,result);
  return 0;
}
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("Enter the coordinates of the first point");
  scanf("%f %f",x1,y1);
  printf("Enter the coordinates of the second point");
  scanf("%f %f",x2,y2);
  printf("Enter the coordinates of the third point");
  scanf("%f %f",x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  float area = 1/2 * (x1 *(y2-y3) + x2*(y3-y1) + x3*(y1-y2));
  if (area == 0)
  {
    return 0;//ponts are 0 linear so they don't form a triangle
  }
  return 1;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
  if (result)
  {
    printf("form a triangle");
  }
  else
  {
    printf("doesnot form a triangle");
  }   
}