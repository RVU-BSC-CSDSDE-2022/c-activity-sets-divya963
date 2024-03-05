/*#include<stdio.h>
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
    }*/

    //create a new array to store the odd elements.

   /* #include<stdio.h>

    int main() {
    int n;
    printf("Enter the number of elements in an array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements in the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int arr[n]; // create a array to store odd elements 
    int count = 0; // count the number of odd elements in the array after checking whether its odd or not
    
    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 1) {
            arr[count] = a[i]; // Assigning odd elements to oddArray
            count++;
        }
    }
    printf("The odd numbers in array are:\n");
    for(int i = 0; i < count; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}*/

    // need to add the odd elements in the array

/*#include<stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in an array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements in the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int sum = 0; // Variable to store the sum of odd elements
    
    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 1) {
            sum += a[i]; // Adding odd elements to sum
        }
    }
    
    printf("The sum of odd numbers in the array is: %d\n", sum);

    return 0;
}*/

    #include<stdio.h>
    int main() {
    int n;
    printf("Enter the number of elements in an array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements in the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int arr[n]; // create a array to store odd elements 
    int count = 0; // count the number of odd elements in the array after checking whether its odd or not
    int sum
    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 1) {
            arr[count] = a[i]; // Assigning odd elements to oddArray
            count++;
        }
    }
    printf("The odd numbers in array are:\n");
    for(int i = 0; i < count; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
