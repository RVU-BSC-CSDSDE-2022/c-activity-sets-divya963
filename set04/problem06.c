#include<stdio.h>
#include<string.h>

void input_string(char *a, char *b);
int sub_str_index(char *string, char *substring);
void output(char *string, char *substring, int index);

int main()
{
  char a[100],b[100];
  input_string(a,b);
  int index = sub_str_index(a,b);
  output(a,b,index);
  return 0;
}
void input_string(char *a, char *b)
{
  printf("Enter the string");
  scanf("%s",a);
  printf("Enter the substring");
  scanf("%s",b);
}
int sub_str_index(char *string, char *substring)
{
  int i,j,index = 0,position;  
  for(i=0;string[i]!='\0';i++)
    {
      j=i;
      while(string[j] == substring[index])
        {
          position = i;
          j++;
          index++;
        }
      if(substring[index] == '\0')
      {
        break;
      }
    }
  return index;
}
void output(char *string, char *substring, int index)
{
  printf("The index of '%s' in '%s' is %d",substring,string,index);
}