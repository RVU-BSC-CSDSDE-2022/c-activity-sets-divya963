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
    int arr[n];
    int sum = 0;
    int count = 0;
    int avg =0;
    
    //printf("The odd numbers are\n");
    for(int i=0;i<n;i++){
        if(a[i]%2==1){
            arr[i] = a[i];
            count++ ;
            //printf("%d\n",arr[i]);
            sum = sum + arr[i];
            avg = sum/count;
        }
    } 
    return avg;
    
}
void output(float avg)
{
    printf("The average of odd elements are %f",avg);
}