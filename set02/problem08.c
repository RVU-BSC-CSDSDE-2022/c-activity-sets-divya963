#include <stdio.h>
#include <math.h>

#define pi 3.1415 //macro

typedef struct _camel {
    float radius, height, length, weight;
} Camel;

int input();
Camel input_camel();
void input_camels(int n, Camel c[n], float *truck_weight);
void find_camel_weight(int n, Camel c[n]);
float compute_total_weight(int n, Camel c[n], float truck_weight);
void output(float total_weight);

int main() {
    int n;
    n = input();
    float truck_weight;
    Camel c[n];
    input_camels(n, c, &truck_weight);
    find_camel_weight(n, c);
    float total_weight;
    total_weight = compute_total_weight(n, c, truck_weight);
    output(total_weight);
    return 0;
}

int input() {
    int n;
    printf("Enter the number of camels: ");
    scanf("%d", &n);
    return n;
}

Camel input_camel()
{
    int n;
    Camel c;
    for(int i=0;i<n;i++)
    {
    printf("Enter the height of the camel ");
    scanf("%f",&c.height);
    printf("Enter the radius of the camel ");
    scanf("%f",&c.length);
    printf("Enter the length of the camel ");
    scanf("%f",&c.radius);
    return c;
    }
}

void input_camels(int n, Camel c[n], float *truck_weight) {
    printf("Enter the weight of the truck: ");
    scanf("%f", truck_weight);

    for (int i = 0; i < n; i++) {
        c[i] = input_camel();
    }
}

void find_camel_weight(int n, Camel c[n]) {
    for (int i = 0; i < n; i++) {
        c[i].weight = pi * pow(c[i].radius, 3) * c[i].height * c[i].length;
    }
}

float compute_total_weight(int n, Camel c[n], float truck_weight) {
    float total_weight = truck_weight;
    for (int i = 0; i < n; i++) {
        total_weight += c[i].weight;
    }
    return total_weight;
}

void output(float total_weight) {
    printf("The total weight of the truck with camels is: %f\n", total_weight);
}
