#include<stdio.h>

typedef struct fraction{
    int num, den;
} Fraction;

int input(int *n1,int *d1,int *n2,int *d2,int *n3,int *d3);
Fraction smallestFraction(Fraction fractions[],int size);
void output(int n1,int d1,int n2,int d2,int n3,int d3,int num,int den);//numerator and denominator need to be printed
   
int main()
{
    Fraction fraction[3];
    int n1,n2,n3,d1,d2,d3,n,d;
    input(&n1,&d1,&n2,&d2,&n3,&d3);
    Fraction smallest = smallestFraction(fraction,3);
    output(n1,d1,n2,d2,n3,d3,smallest.num,smallest.den);
    return 0;
}

int input(int *n1,int *d1,int *n2,int *d2,int *n3,int *d3)
{
    printf("Enter the numerator and denominator of 1st fraction");
    scanf("%d %d",&n1,&d1);
    printf("Enter the numerator and denomenator of 2nd fraction");
    scanf("%d",&n2,&d2);
    printf("Enter the numerator and denomenator of 3rd fraction");
    scanf("%d",&n3,&d3);
}

Fraction smallestFraction(Fraction fractions[],int size) {
    Fraction smallest = fractions[0];
    for (int i = 1; i < size; i++) {
        int product1 = smallest.num * fractions[i].den;
        int product2 = fractions[i].num * smallest.den;
        if (product1 > product2) {
            smallest = fractions[i];
        }
    }
    return smallest;
}

void output(int n1,int d1,int n2,int d2,int n3,int d3,int num,int den)
{
    printf("The smallest of %d/%d, %d/%d ,%d/%d is %d/%d",n1,d1,n2,d2,n3,d3,&num,&den);
}





