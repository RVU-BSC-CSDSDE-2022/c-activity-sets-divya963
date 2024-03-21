/*Write a program to find the smallest of three fractions

***Input***
1 2
1 3
1 4
***Output***
The smallest of 1/2, 1/3 and 1/4 is 1/4*/

#include<stdio.h>

typedef struct {
    int num, den;
} Fraction;

int input(int *n1,int *d1,int *n2,int *d2,int *n3,int *d3);
find value of num/den of 3 numbers and compare the answers to find the smallest
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




