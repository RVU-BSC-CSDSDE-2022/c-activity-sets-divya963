#include <stdio.h>

float finding_power_of_x(int x, int y, int fact);


int main() {
    int n, x, y;

    printf("Enter the number to find factorial: ");
    scanf("%d", &n);
    int fact = factorial(n);

    printf("Enter the base value: ");
    scanf("%d", &y);

    printf("Enter the exponent value: ");
    scanf("%d", &x);

    float result = finding_power_of_x(x, y, fact);

    printf("Result: %.2f\n", result);
    return 0;
}



//Adding another function into the program for incrementing factorial and power


float finding_power_of_x(int x, int y, int fact) {
    {
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    float output;
    float sum =1.0;
    float result = 1.0;
    for (int i = 0; i < x; i++) {
        result *= y;
    }
    output = result/fact;
    
    if (output >0.000001)
    {
        sum += output;
    }
    }
    return sum;
}
