#include<stdio.h>
#include<math.h>

#define pi 3.14

typedef struct _camel {
    float radius, height, length, weight;
} Camel;
void input(int n, Camel c[n], float *truck_weight);
void find_camel_weight(int n, Camel c[n]);
float compute_total_weight(int n, Camel c[n], float truck_weight);
void output(float total_weight);

int main()
{
  int n;
  float truck_weight,total_weight;
  Camel c[n];
  input(n,c,&truck_weight);
  find_camel_weight(n,c);
  total_weight=compute_total_weight(n,c,truck_weight);
  output(total_weight);
  return 0;
}

void input(int n, Camel c[n], float *truck_weight)
{
  printf("Enter the number of camels");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
    {
      printf("Enter the height of camel %d",i + 1);
      scanf("%f",&c[i].height);
      printf("Enter the length of camel %d",i + 1);
      scanf("%f",&c[i].length);
      printf("Enter the radius of camel %d",i + 1);
      scanf("%f",&c[i].radius);
    }
  printf("Enter the weight of the truck");
  scanf("%f",truck_weight);
}
void find_camel_weight(int n, Camel c[n])
{
  printf("The weight of each camel is\n");
  for(int i=0;i<n;i++)
    {
      c[i].weight=pi*pow(c[i].radius,3)*sqrt(c[i].height*c[i].length);
      printf("camel no %d : %f",i+1,c[i].weight);
    }
}
float compute_total_weight(int n, Camel c[n], float truck_weight)
{
  float total_weight= truck_weight;
  for(int i=0;i<n;i++)
    {
      total_weight=total_weight+c[i].weight;
    }
  return total_weight;
}
void output(float total_weight)
{
  printf("The total weight of the truck is %f",total_weight);
}