#include<stdio.h>

typedef struct fraction{
    int num, den;
} Fraction;

Fraction input();//for getting one input
void input_fractions(Fraction fraction[]);// for getting input and store into array 
Fraction smallestFraction(Fraction fraction[]);//finding the smallest fraction
void output(int num,int den);//numerator and denominator need to be printed
   
int main()
{
    Fraction fraction[3];
    input_fractions(fraction);
    Fraction smallest = smallestFraction(fraction);
    output(smallest.num,smallest.den);
    return 0;
}
Fraction input()
{
  Fraction f;
  printf("Enter numerator and denominator of fraction\n");
  scanf("%d%d",&f.num,&f.den);
  return f;
}

void input_fractions(Fraction fraction[]) 
{
  for(int i=0;i<3;i++)
    {
      printf("Enter the details of fraction %d\n",i +1);
      fraction[i]=input();
    }
}

Fraction smallestFraction(Fraction fraction[]) 
{
    Fraction smallest = fraction[0];
    for (int i = 0; i < 3; i++)
    {
        if (fraction[i].num * smallest.den < smallest.num * fraction[i].den) //numerators are common .
        {
            smallest = fraction[i];
        }
    }
    return smallest;
}

void output(int num,int den)
{
    printf("The smallest is %d/%d",num,den);
}





