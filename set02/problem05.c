#include<stdio.h>
#include<math.h>

int input();
float borga_X(int x);
void output(int x, float result);

int main(){
    int x;
    float result;
    x = input();
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
    float term = 1.0;
    float sum = 1.0;
    int power ,factorial;
      
    for(int i=1;sum<0.000001;i++)/*for loop to find 1+x^1/3.. if the sum less than 0.000001 it exit ,increment 
    i in each iteration*/
    {
        factorial *= (2*i) * (2*i+1);//find factorial
        power *= pow(x,i);//find square root
        term = power/factorial;//calculate factorial/squareroot sum is already fixed as 1 so 1 will add 
        sum = sum + term;
    }
    return sum;
}
void output(int x, float result)
{
    printf("The borga value of %d is : %f ",x,result);
}  
