/*#include<stdio.h>
int main(){
    int factorial = 1,n;
    printf("Enter the number ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        factorial *= i;
    }
    printf("%d",factorial);
  return 0;  
}//factorial of a number*/

#include<stdio.h>
int main(){
    int x,y,sqr = 1;
    printf("Enter the value");
    scanf("%d",&y);
    printf("Enter the power");
    scanf("%d",&x);
    for(int i=1;i<=x;i++){
        sqr = y * sqr;
    } 
	printf("Square : %d",sqr); 
	return 0; 
} //x^n (finding power of any given value n times)



/*#include <stdio.h>

int factorial(int n);
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

int factorial(int n) {
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

float finding_power_of_x(int x, int y, int fact) {
    float result = 1.0;
    for (int i = 0; i < x; i++) {
        result *= y;
    }
    return result / fact;
}*///coded (x^n)/fact!

/*x need to be user input ,the power of x need to set 1(iteration 1,2,3,...)(y need to be incremented), 
factorial of number set to 3(iteration 3,5,7,8,...)*/


/*#include <stdio.h>

int input();
float borga_X(int x);
void output(int x, float result);

int main() {
    int x = input();
    float result = borga_X(x);
    output(x, result);
    return 0;
}

int input() {
    int x;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    return x;
}

float borga_X(int x) {
    float borga = 1.0;
    float term = 1.0;

    for (int n = 1; term >= 0.000001; n++) {
        term *= (float)x / (2 * n * (2 * n + 1));
        borga += term;
    }

    return borga;
}

void output(int x, float result) {
    printf("borga(%d) = %.6f\n", x, result);
}
*/
/*Not getting the output correctly */

