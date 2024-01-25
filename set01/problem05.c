
#include<stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);

int main()
{
  int a,b,c,largest;
  a = input();
  b = input();
  c = input();
  largest = compare(a,b,c);
  output(a,b,c,largest);
  return 0;
}
int input()
{
  int n;
  printf("Enter the number:");
  scanf("%d",&n);
  return n;
}
int compare(int a, int b, int c)
//how can i do without any variable Ans: we have 3 variables to do the comparison
{
  if(a>b && a>c)
  {
    return a;
  }
  else if(b>c)
  {
    return b;
  }
  else
  {
    return c;
  }
}
/*{
  int largest;
  if(a>b && a>c) if a is greater than b and c then a is the largest. if a is not ,then it is a uniqual number
  {
    largest = a;
  }
  else if (b>c)
  {
      largest = b;
  }
  else
  {
      largest = c;
  }
  return largest;
}
  //int largest = (a>b)?(a>c?a:c):(b>c?b:c);
  //return largest;
  /*int largest = a;
  if(b>largest)
  {
    largest = b;     
  }
  if(c>largest)
  {
    largest = c;
  }
  return largest; */
  /*if(a>b)
  {
    if(a>c)
    {
      largest = a;
    }
      else
    {
      largest = c;
    }
  }
  else
  {
    if(b>c)
    {
      largest = b; 
    }
      else
    {
      largest = c;
    }
  }*/
void output(int a, int b, int c, int largest)
{
 printf("The largest of %d,%d and %d is %d",a,b,c,largest); 
}