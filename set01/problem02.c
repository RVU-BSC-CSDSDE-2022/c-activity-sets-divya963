#include<stdio.h>
int main(){
  int a,b,sum;//declaring the variables
  printf("Enter two numbers:");
  scanf("%d %d", &a, &b);//input all types of data.
  sum = a + b;//a + b value is assigning into sum.
  printf("%d + %d = %d",a,b,sum);
  return 0;//whether the problem is completed successfully or not.
}