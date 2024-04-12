#include<stdio.h>

typedef struct fraction{
    int num, den;
} Fraction;

Fraction input();
void input_fractions(Fraction fraction[]);
Fraction smallestFraction(Fraction fraction[],int size);
void output(int num,int den);//numerator and denominator need to be printed
   
int main()
{
    Fraction fraction[3];
    input_fractions(fraction);
    Fraction smallest = smallestFraction(fraction,3);
    output(smallest.num,smallest.den);
    return 0;
}
Fraction input()
{
  Fraction f;
  printf("Enter numerator and denominator of triangle\n");
  scanf("%d%d",&f.num,&f.den);
  return f;
}

void input_fractions(Fraction fraction[]) 
{
  for(int i=0;i<3;i++)
    {
      printf("Enter the details of triangle %d\n",i +1);
      fraction[i]=input();
    }
}

Fraction smallestFraction(Fraction fraction[],int size) {
    Fraction smallest = fraction[0];
    for (int i = 1; i < size; i++) {
        int product1 = smallest.num * fraction[i].den;
        int product2 = fraction[i].num * smallest.den;
        if (product1 > product2) {
            smallest = fraction[i];
        }
    }
    return smallest;
}

void output(int num,int den)
{
    printf("The smallest is %d/%d",num,den);
}





