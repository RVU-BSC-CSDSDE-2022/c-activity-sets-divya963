#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the no:");
    scanf("%d",&a);
    printf("Enter the no:");
    scanf("%d",&b);
    int smallest;
if (a < b) {
    smallest = a;
} else {
    smallest = b;
}
printf("The answer is %d",smallest);
return 0;

}


