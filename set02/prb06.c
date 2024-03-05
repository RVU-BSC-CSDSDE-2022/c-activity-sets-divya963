/*now need to find the average.for that we need to count the odd numbers and divide it with sum of odd numbers
already finded the sum of odd numbers now 
1)find count of odd numbers 
2)find average*/
#include<stdio.h>
int main()
{
     int n;
    printf("Enter the number of elements in an array");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in the array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int arr[n];
    int sum = 0;
    int count = 0;
    int avg =0;
    
    printf("The odd numbers are\n");
    for(int i=0;i<n;i++){
        if(a[i]%2==1){
            arr[i] = a[i];
            count++ ;
            printf("%d\n",arr[i]);
            sum = sum + arr[i];
            avg = sum/count;
        }
    } 
    printf("Sum %d\n",sum);
    printf("Average %d",avg);
    return 0;
}