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
    int j,new[j];
    for(int i=0;i<n;i++)
    {
        if(a[i] % 2 == 1)
        {
            new[j] = a[i];
            j++;
        }
    }
    return new[j];
    /*int sum,result,odd_array[n],j =0;
    for(int i=0;i<=n;i++){
        if(a[i] % 2 == 1){
            odd_array[j] = a[i];
            j++;
        }
            sum = sum + odd_array[n];
            result = sum/j;
        }
    return result;*/
}
void output(float avg)
{
    printf("The average of odd elements are %f",avg);
}