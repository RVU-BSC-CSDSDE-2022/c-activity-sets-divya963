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
    Fraction f1,f2,sum;
    f1 = input_fraction();
    f2 = input_fraction();
    sum = add_fractions(f1, f2);
    output(f1,f2,sum);
    return 0;
}

Fraction input_fraction()
{
    Fraction f;
    printf("Enter the numerator and denominator");
    scanf("%d %d",&f.num,&f.den);
    return f;
}
int find_gcd(int a, int b)
{  
    int result;
    if (a % b == 0)
    {
        result = ((a < b) ? a : b); //find min of a and b
         while (result > 0) { 
        // Check if both a and b are divisible by result 
        if (a % result == 0 && b % result == 0) { 
            break; 
        } 
        result--; 
    } 
    // return gcd of a and b 
    return result; 
    } 
}
Fraction add_fractions(Fraction f1, Fraction f2)
{
    Fraction sum;
    sum.num = f1.num * f2.den + f2.num * f1.den;
    sum.den = f1.den * f2.den;
    int gcd = find_gcd(sum.num, sum.den);
    sum.num /= gcd;
    sum.den /= gcd;
    return sum;
}
void output(Fraction f1, Fraction f2, Fraction sum)
{
    printf("%d/%d + %d/%d = %d/%d",f1.num ,f1.den,f2.num,f2.den,sum.num,sum.den);
}
