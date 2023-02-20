#include<stdio.h>
int main(){
  int a,b,sum;
  printf("Enter two numbers:");
  scanf("%d %d", &a, &b);
  sum = a + b;
  printf("%d + %d = %d",a,b,sum);
  return 0;
}