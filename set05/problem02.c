#include<stdio.h>

typedef struct fraction{
    int num, den;
} Fraction;

int input(int *n1,int *d1,int *n2,int *d2,int *n3,int *d3);
find value of num/den of 3 numbers and compare the answers to find the smallest
n1/d1 = a1 
n2/d2 = a2 
n3/d2 = a3 
then compare a1,a2,a3 
Fraction fraction();
void compare(int a1,int a2,int a3);
void output(int *n1,int *d1,int *n2,int *d2,int *n3,int *d3,int n,int d);//numerator and denominator need to be printed
   
int main()
{
    int n1,n2,n3,d1,d2,d3,n,d;
    input(&n1,&d1,&n2,&d2,&n3,&d3);
    output(&n1,&d1,&n2,&d2,&n3,&d3,n,d);
    return 0;
}

int input(int *n1,int *d1,int *n2,int *d2,int *n3,int *d3)
{
    int num,den;
    printf("Enter the numerator and denominator of 1st fraction");
    scanf("%d %d",&n1,&d1);
    printf("Enter the numerator and denomenator of 2nd fraction");
    scanf("%d",&n2,&d2);
    printf("Enter the numerator and denomenator of 3nd fraction");
    scanf("%d",&n3,&d3);
}

void output(int *n1,int *d1,int *n2,int *d2,int *n3,int *d3,int n,int d)
{
    printf("The smallest of %d/%d, %d/%d ,%d/%d is %d/%d",n1,d1,n2,d2,n3,d3,&n,&d);
}





