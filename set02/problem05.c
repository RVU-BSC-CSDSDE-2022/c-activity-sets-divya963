/*The formula for finding borga(x) is `1 + (x^1)/3! + (x^2)/5! + (x^3)/7! + ...`. Stop when the next term is 
less 0.000001 using four functions.*/

#include<stdio.h>
#include<math.h>

int input(int x);
float borga_X(int x);
void output(int x, float result);

int main(){
    int x;
    float result;
    input(x);
    result = borga_X(x);
    output(x,result);
    return 0;
}

int input(int x)
{
    printf("Enter the value of x : ");
    scanf("%d",&x);
    return x;
}
float borga_X(int x)
{
    int factorial = 1;
    int power = 1;
    float term = 1.0;
    float sum = 1.0;
    int i = 1;
    while(term >0.000001){
        factorial *= (2 * i) * (2 * i + 1);
        power = x*x;
        term = (float)power/factorial;
        sum = sum + term;//1+...
        i++;
    } 
    return sum;
}
void output(int x, float result)
{
    printf("The borga value of %d is : %f ",x,result);
}  
