#include <stdio.h>


float finding_power_of_x(int x,int y);


int main() {
    int  x,y;

    printf("Enter the base value: ");
    scanf("%d", &y);

    printf("Enter the exponent value: ");
    scanf("%d", &x);

    float sum = finding_power_of_x(x,y);

    printf("Result: %f\n", sum);
    return 0;
}



//Adding another function into the program for incrementing factorial and power


float finding_power_of_x(int x,int y) {
    int factorial = 1;
    int n =1;
    for (int i = 1; i <= ((2*n)+1); i++) {//(2*n)+1 we need the first value 3.
    /*n need to be incremented if (power/factorial) <0.000001 the condition is true*/
        factorial *= i;
    }
    //return factorial;
    float output;
    float sum =1.0;
    float power = 1.0;
    
    for(int i=0;i<=x;i++)
        power *= y;
    
    output = power/factorial;
    
    if (output >0.000001)
    {
        sum += output;
    }
    return sum;
}
