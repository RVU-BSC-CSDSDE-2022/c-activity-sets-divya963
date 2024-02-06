#include<stdio.h>
#include<math.h>

#define pi 3.1415

void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);

int main()
{
  float radius,height,length,weight;
  input_camel_details(&radius,&height,&length);
  weight=find_weight(radius,height,length);
  output(radius,height,length,weight);
  return 0;
}
void input_camel_details(float *radius, float *height, float *length)
{
  printf("Enter the radius,height and length of the camel");
  scanf("%f %f %f",radius,height,length);
}
float find_weight(float radius, float height, float length)
{
  float weight;
  weight=pi*pow(radius,3)*sqrt(height*length);
  return weight;
}
void output(float radius, float height, float length, float weight)
{
  printf("The weight of the camel with radius %f height %f and length%f is %f",radius,height,length,weight);
}