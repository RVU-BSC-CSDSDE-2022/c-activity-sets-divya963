/*sum of n numbers*/
#include<stdio.h>
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);
int main(){
    int n,sum;
    n = input_n();
    sum = sum_n_nos(n);
    output(n,sum);
    return 0;
}
int input_n(){
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    return n;
}
int sum_n_nos(int n){
    int sum=0,i=0;/*i = 1 both i=0 and i=1 will produce same answer while initializing value of 0 it 
    calculates from 0,1,2,.. upto 10 ,if we are initializing value of 1 it calculates from 1,2,...10*/
    for(i;i<=n;i++){
        sum = sum + i;
    }
    return sum;
}
void output(int n, int sum){
    printf("The sum of %d numbers is %d",n,sum);
}