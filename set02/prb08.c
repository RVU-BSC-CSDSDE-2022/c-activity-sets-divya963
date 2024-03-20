#include<stdio.h>
#include<math.h>
#define pi 3.14 //macro
typedef struct _camel {
    float radius, height, length, weight;
} Camel;

Camel input_camel();
void input_camels_truckweight(float *truck_weight);
void find_camels_weight(Camel *C);
float compute_total_weight(Camel C, float truck_weight);
void output(float total_weight);

int main()
{
  Camel C;
  C = input_camel();
  float truck_weight;
  input_camels_truckweight(&truck_weight);
  find_camels_weight(&C);
  float total_weight;
  total_weight = compute_total_weight(C,truck_weight);
  output(total_weight);
  return 0;
}
Camel input_camel()
{
    Camel C;
    printf("Enter the height of the camel");
    scanf("%f",&C.height);
    printf("Enter the radius of the camel");
    scanf("%f",&C.length);
    printf("Enter the length of the camel");
    scanf("%f",&C.radius);
    return C;
}
void input_camels_truckweight(float *truck_weight)
{
    printf("Enter the weight of the truck");
    scanf("%f",truck_weight);
}
void find_camels_weight(Camel *C)
{
    C->weight = pi * (pow(C->radius,3)) * sqrt(C->height * C->length);
}
float compute_total_weight(Camel C, float truck_weight)
{
    float total_weight;
    total_weight = truck_weight + C.weight;
    return total_weight;
}
void output(float total_weight)
{
    printf("The total weight of the truck is %f",total_weight);
}