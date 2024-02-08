#include<stdio.h>
#include<math.h>
struct _point {
  float x;
  float y;
};

typedef struct _point Point;

Point input();
void dist(Point a, Point b, float *res);
void output(Point a, Point b, float res);

int main()
{
  Point a,b;
  float res;
  a=input();
  b=input();
  dist(a,b,&res);
  output(a,b,res);
  return 0;
}
Point input()
{
  Point p;
  printf("Enter the x and y coordinates of point");
  scanf("%f %f",&p.x,&p.y);
  return p;
}
void dist(Point a, Point b, float *res)
{
  *res = sqrt(pow((b.x-a.x),2) + pow((b.y-a.y),2));
  //*res = sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y)); without using pow function.
  //*res = (pow((b.x - a.x),2) + pow((b.y - a.y),2))*.5; without using sqrt
}
void output(Point a, Point b, float res)
{
  printf("The distance between (%f %f) and (%f %f) is %f",a.x,a.y,b.x,b.y,res);
}


