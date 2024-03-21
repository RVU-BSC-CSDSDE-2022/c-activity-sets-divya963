#include<stdio.h>
#include<string.h>

int input_size();
void input_array(int n, int a[n]);
int find_largest_index(int n, int a[n]);
void output(int index);

int main()
{
  int n,index;
  n=input_size();
  int a[n];
  input_array(n,a);
  index = find_largest_index(n,a);
  output(index);
  return 0;
}

int input_size()
{
  int n;
  printf("Enter the size of the array");
  scanf("%d",&n);
  return n;
}
void input_array(int n, int a[n])
{
  printf("Enter the elements of the array");
  for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
}
int find_largest_index(int n, int a[n])
{
  int max_index = 0;
  for(int i=0;i<n;i++)
    {
      if(a[i]>a[max_index])
      {
        max_index = i;
      }
    }
  return max_index;
}
void output(int index)
{
  printf("The index of the largest number in the array is %d",index);
}

