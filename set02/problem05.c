#include<stdio.h>

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
    float power = 1;
    float factorial = 1;
    float term = 0;
    float sum = 1;
    int i =1;
    while((power/factorial)>=0.000001)//get rid of if inside the while loop
    {
        //for(int j=1;j<=((2*i)+1);j++)//No need of for loop, compute factorial from previous term.
        factorial *= (i*2) * ((2*i) + 1);
        power=power*x; 
        term = power/factorial ;
        //if ((term)>0.000001)
            sum +=term; 
            i=i+1; // we need to get 5,7... in denominator  
    }
    return sum;  
}
void output(int x, float result)
{
    printf("The borga value of %d is : %f ",x,result);
}  
