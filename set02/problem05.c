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
    printf("Enter the value of x");
    scanf("%d",x);
    return x;
}
float borga_X(int x)
{
    int result = 0,power;
    
    for(int n=1;n<=10;n++)
    { //iteration for finding power of x
    power = pow(x,n);
    }
    for(int i=0;i<=10;i+1)//to getting odd numbers 
    {
        continue the multiplication(3*2*1)
        factorial *=j;
    }
    result = 1 + power/factorial
    
    if (result < 0.000001) 
    {
        break;
    }
}
void output(int x, float result)
{
    printf("The borga value of %d is : %d ",x,result);
}  

  /* finding power of x,x is a user input and power is increased
    for(j=0;j<=n;j++)
    factorial finding
    initialize 3 and the next number should be odd 
    for(i=3;i<=n;i+1)
    if the answer < 0.000001 it comes out and print result whether the condition 
    is false satisfies iteration continuoes
    (x^n/f!) if the answer is >0.000001 continue*/
