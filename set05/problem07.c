#include<stdio.h>

typedef struct {
    int num, den;
} Fraction;

Fraction input_fraction();
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
void output(Fraction f1, Fraction f2, Fraction sum);

int main()
{
    Fraction f1,f2;
    f1 = input_fraction();
    f2 = input_fraction();
    return 0;
}

Fraction input_fraction()
{
    Fraction f;
    printf("Enter the numerator and denominator");
    scanf("%d %d",&f.num,&f.den);
    return f;
}
int find_gcd(int a, int b)/*we don't need to make the denominators common just check if they are common or not
if its common do the calculation else ...?*/
{
    if (denominator 1 and denominator 2 equal do addition else ?)
}
Fraction add_fractions(Fraction f1, Fraction f2)
{
    Fraction sum;
    sum.num = f1.num + f2.num ;
    if the denominator is same no need to change it so it remains same
    need to reduce the fraction
    return sum;
}
void output(Fraction f1, Fraction f2, Fraction sum)
{
    printf("%d/%d + %d/%d = %d/%d",f1.num ,f1.den,f2.num,f2.den,sum.num,sum.den)
}
