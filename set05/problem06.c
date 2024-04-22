//use strtok()  char *strtok(char *str, const char *delims);

#include<stdio.h>
#include<string.h>

void input_string(char *a);
int count_words(char *string);
void output(char *string, int no_words);

int main()
{   
   char a[100];
   input_string(a);
   int no_words;
   char string;
   no_words = count_words(string);
   output(&string,no_words);
   return 0; 
}

void input_string(char *a)
{
    printf("Enter the strings");
    scanf("%[^\n]s",a);
}
int count_words(char *string)
{
    //char strtok(char string," ");
    int count = 0;
    char *token = strtok(string, " ");
    while (token != NULL) {
        count++;
        token = strtok(NULL, " ");
    }
    return count;
}
void output(char *string, int no_words)
{
    printf("The number of words in ""%s"" is %d",string,no_words);
}