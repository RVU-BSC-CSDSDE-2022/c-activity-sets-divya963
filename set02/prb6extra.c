#include <stdio.h>
int main() 
{
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements in the array: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nOdd numbers in the array are: ");

    for(int i=0;i<n;i++)
    { 
        if(arr[i]%2==1)
        //int arr1[n];  //you cannot assign arrays directly. an increment operation is needed.
        //arr[i] = arr1[i];
        printf("%d ", arr[i]);
    }  
            
}