#include<stdio.h>
#include<math.h>
#define pi 3.1415

struct camel {
  float radius, height, length,weight;
};

typedef struct camel Camel;

Camel input();
float find_weight(Camel c);
void output(Camel c);

int main()
{
  Camel c;
  c=input();
  find_weight(c);
  output(c);
  return 0;
}
Camel input()
{
  Camel c;
  printf("Enter the radius,height,length of the camel");
  scanf("%f%f%f",&c.radius,&c.height,&c.length);
  return c;
}
float find_weight(Camel c)
{
  c.weight= pi*pow(c.radius,3)*sqrt(c.height*c.length);
  return c.weight;
}
void output(Camel c)
{
 printf("The weight of the camel with radius %f height %f length %f is %f",c.radius,c.height,c.length,c.weight); 
}