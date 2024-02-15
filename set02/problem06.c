#include<stdio.h>
int input_n();
void input(int n, int a[n]);
float odd_average(int n, int a[n]);
void output(float avg);
int main(){
    int n;
    n= input_n();
    int a[n];
    input(n,a);
    float avg;
    avg = odd_average(n,a);
    output(avg);
    return 0;
}
int input_n()
{
    int n;
    printf("Enter the size of array");
    scanf("%d",&n);
    return n;
}
void input(int n, int a[n])
{
    printf("Enter the elements of array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
float odd_average(int n, int a[n])
{
    int i;
    if(n % 2 == 0 ) // condition tells the element is even
    
    //compare each element whether they are odd or not
}
void output(float avg)
{
    printf("The average of odd elements are %f",avg);
}