#include<stdio.h>
void input_camel_details(float *radius, float *height, float *length);
int find_mood(float radius, float height, float length);
void output(float radius, float height, float length, int mood);

int main()
{
  float radius,height,length;
  input_camel_details(&radius,&height,&length);
  int mood=find_mood(radius,height,length);
  output(radius,height,length,mood);
  return 0;
}
void input_camel_details(float *radius, float *height, float *length)
{
  printf("Enter the radius,height,length of the camel");
  scanf("%f %f %f",radius,height,length);
}
int find_mood(float radius, float height, float length)
{
  if(radius<height && radius<length)
  {
    return 0;
  }
  else if(height<length && height<radius)
  {
    return 1;
  }
  else if(length<height && length<radius)
  {
    return 2;
  }
  else
  {
    return -1;
  }
}
void output(float radius, float height, float length, int mood)
{
  if(mood==0)
  {
    printf("The camel is sick");
  }
  else if(mood==1)
  {
    printf("The mood of camel is happy");
  }
  else if(mood==2)
  {
    printf("The camel is tensed");
  }
  else if(mood==-1)
  {
    printf("Invalid input");
  }
}