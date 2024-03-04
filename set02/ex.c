#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in an array");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in the array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The odd numbers are\n");
    for(int i=0;i<n;i++){
        if(a[i]%2==1){
            printf("%d\n",a[i]);
        }
    }
    return 0;
    
}

