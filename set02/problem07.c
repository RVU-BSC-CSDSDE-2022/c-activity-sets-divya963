#include<stdio.h>
#include<string.h>

void input(char *name);
int has_nice_name(char *c);
void output(int res);

int main()
{
  char name[100];
  input(name);
  int res = has_nice_name(name);
  output(res);
  return 0;
}
void input(char *name)
{
  printf("Enter the name of the camel");
  scanf("%s",name);
}
int has_nice_name(char *c)
{
  int vowels = 0,consonants =0;//use while loop without strlen
  //for(int i=0; i<strlen(c); i++)
  int i=0;
  while(c[i] != '\0')//Ascii value number (65-90A-Z,97-122a-z)
    {
      i++;
      if(c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u' || c[i] == 'A' || c[i] == 'E' || c[i] == 'I' || c[i] == 'O' || c[i] == 'U')
      {
        vowels++;
      }
      else if((c[i] >= 'A' && c[i] <= 'Z') || (c[i] >= 'a' && c[i] <= 'z'))/*find the consonants in the alphabets ,A-Z and a-z,but why we need to check A-Z
      (aeiou is already checked)*/
      {
        consonants++;
      }
    }
    
  if(vowels >= 2 && consonants >= 2)
  {
    return 1;
  }
  else
  {
    return 0;
  }
    
}
void output(int res)
{
  if(res == 1)
  {
    printf("The camel is having a nice name");
  }
  else
  {
  printf("The camel is not having a nice name ");
  }
}
