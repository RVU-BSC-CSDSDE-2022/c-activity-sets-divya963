#include<stdio.h>

typedef struct fraction
{
    int num, den;
} Fraction;

int input_n();
Fraction input_fraction();
void input_n_fractions(int n, Fraction f[n]);
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
Fraction add_n_fractions(int n, Fraction f[n]);
void output(int n, Fraction f[n], Fraction sum);

int main()
{
    int n;
    n = input_n();
    Fraction f[n];
    input_n_fractions(n,f);
    Fraction sum = add_n_fractions(n,f);
    output(n,f,sum);
    return 0;
}

int input_n()
{
    int n;
    printf("Enter the number of fractions to be calculated:");
    scanf("%d",&n);
    return n;
}
Fraction input_fraction()
{
    Fraction f;
    printf("Enter the numerator and denominator of the fraction");
    scanf("%d %d",&f.num,&f.den);
    return f;
}
void input_n_fractions(int n, Fraction f[n])
{
    int i;
    for (i=0;i<n;i++)
    {
        f[i] = input_fraction();
    }
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
Fraction add_n_fractions(int n, Fraction f[n])
{
    Fraction sum = f[0];
    for(int i=0;i<n;i++)
    {
        sum = add_fractions(sum,f[i]);
    }
    return sum;
}
void output(int n, Fraction f[n], Fraction sum)
{
    printf("Sum : \n");
    for (int i = 0; i < n; ++i) 
    {
        printf("%d/%d", f[i].num, f[i].den);
        if (i != n - 1)
            printf(" + ");
    }
    printf(" = %d/%d\n", sum.num, sum.den);
}