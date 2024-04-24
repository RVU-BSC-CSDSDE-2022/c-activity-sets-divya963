//use strtok()  char *strtok(char *str, const char *delims);

#include<stdio.h>
#include<string.h>

void input_string(char *a);// inputing the string with space
int count_words(char *string);//count the number of words in the entered string, if find out a space count the value
void output(char *string, int no_words);//print the string and no of words in string

int main()
{   
   char a[100];
   input_string(a);
   int no_words;
   char string;
   no_words = count_words(&string);
   output(&string,no_words);
   return 0; 
}

void input_string(char *a)
{
    printf("Enter the strings");
    scanf("%[^\n]",a);
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
    printf("The number of words in");
    puts(string);
    printf("is %d\n",no_words); //there is no memory space for string to print 
}