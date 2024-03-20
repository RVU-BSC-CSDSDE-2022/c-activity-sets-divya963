#include<stdio.h>
#include<math.h>
#define pi 3.1415 //macro
typedef struct _camel {
    float radius, height, length, weight;
} Camel;

int input_no_of_camels();
void input_camels(int n,Camel c[n]);
void input_camels_truckweight(float *truck_weight);
void find_camels_weight(int n, Camel c[n]);
float compute_total_weight(int n, Camel c[n], float truck_weight);
void output(float total_weight);

int main(){
  int n;
  n = input_no_of_camels();
  Camel c[n];
  input_camels(n,Camel c[n]);
  float truck_weight;
  input_camels_truckweight(n,c,&truck_weight);
  find_camels_weight(n, c);
  float total_weight;
  total_weight = compute_total_weight(n, c,truck_weight);
  output(total_weight);
  return 0;
}

int input_no_of_camels()//input no of camels
{
  int n;
  printf("Enter the number of the camels");
  scanf("%d",&n);
  return n;
}

void input_camels(int n,Camel c[n])
{
    for(int i=0;i<n;i++)
  {
    printf("Enter the height of the camel %d",i+1);
    scanf("%f",&c[i].height);
    printf("Enter the radius of the camel %d",i+1);
    scanf("%f",&c[i].length);
    printf("Enter the length of the camel %d",i+1);
    scanf("%f",&c[i].radius);
  }
}

void input_camels_truckweight(float *truck_weight)
{
  printf("Enter the weight of the truck");
  scanf("%f",truck_weight);
}
void find_camels_weight(int n, Camel c[n])
{
  float total_weight;
   
  for(int i=0;i<n;i++)
  {
    c[i].weight = pi * (pow(c[i].radius,3)) * sqrt(c[i].height * c[i].length);
  }
}
float compute_total_weight(int n, Camel c[n], float truck_weight)
{
  float total_weight;
  total_weight = truck_weight;
  int i;
  for(int i=0;i<n;i++)
  {
    total_weight = total_weight + c[i].weight;
  }
  return total_weight;
}
void output(float total_weight)
{
  printf("The total weight of the truck is %f",total_weight);
}
