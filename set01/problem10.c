 #include<stdio.h>
  #include<string.h>

  void input_two_strings(char *string1, char *string2);
  int stringcompare(char *string1, char *string2);
  void output(char *string1, char *string2, int result);

  int main()
  {
    char str1[100],str2[100];
    int resultt;
    input_two_strings(str1,str2);
    resultt = stringcompare(str1,str2);
    output(str1,str2,resultt);
    return 0;
  }

  void input_two_strings(char *string1, char *string2)
  {
    printf("Enter the strings:");
    scanf("%s%s",string1,string2);
  }


    /*because we are not giving a statement for forloop
    so giving ;.
    for(i=0;string1[i] == string2[i] && string2[i]!='\0';i++) showing result hello=Hello. the code is wrong.
    for writing a for loop we need to add for(){statement} or even if we areyou are not adding statemnent 
    add ; for(); like this
    */
  int stringcompare(char *string1, char *string2) 
  {
    int i,result=0;
    for(i=0;string1[i] == string2[i] && string2[i]!='\0';i++);    
        
    if(string1[i]>string2[i])
          {
            result = 1;
          }
        else if (string1[i]<string2[i])
          {
            result = -1;
           }
       
      
    return result;
}
  void output(char *string1, char *string2, int result)
  {
    switch (result)
      {
        case 0: printf("%s is equal to %s",string1,string2);
        break;
        case -1: printf("%s is lesser than %s",string1,string2);
        break;
        case 1: printf("%s is greater than %s",string1,string2);
        break;
      }   
  }

/*i want to find whether two given strings are equal,greater than or not equal.
    first using == operator to find both of them are equal
    hello and hello come out of loop what will be the value of i,,here i is printing again and
     again it is not coming out of the loop,what to do to stop the iteration,apply condition
     while (string1[i] == string2[i] )  Array out of bound
        int i=0,result = 0;
         //while (string1[i] == string2[i] && (string1[i]!='\0' && string2[i]!='\0'))
         while (string1[i] == string2[i] && (string1[i]!='\0')) 


 (string1[i] == string2[i]) this condition checks both index of string1[0] is equal to string2[0] the 
 iteretion will continue until the given values are not equal.
  If the loop completes without encountering any unequal pairs, it suggests that the entire strings are 
  equal up to the length of the shorter string.that's why we need to add one condition to check null 
  character
  (string1[i] != string2[i]) this condition checks both index of string1[0] and string2[0] are not equal the
  iteration will continue if string1[1] is not equal to string2[1] the loop will execute until index values 
  become equal.(This is completely dumb)
  (string1[i]!='\0' && string2[i]!='\0')This checks if both strings have not reached their null ('\0').
  The characters at the current position in both strings are equal.
Neither of the strings has reached its null terminator.
while (string1[i] == string2[i] && string1[i]!='\0' || string2[i]!='\0') even i am using || in the place of && and vice versa the loop is continueing
given condition for termination(null value) to come out ,\0 is used to come out it is the last 
character in string.
/*while giving || operator ./axe is not working debugging getting  result No symbol table is loaded. 
Use the "file" command., no executables specified.
          {
           i++;// this block represent the exection as long as the string1[i] and string2[i] are equal
          }

        while(string1[i] > string2[i])
         {
          result = 1;
          break;//the loop will execute only once
         }
        while(string1[i] < string2[i])
         {
            result = -1;
            break;//the loop will execute only once if we find result no need to execute twice
         }
        return result;
  }
  /*{
     int i = 0;
     //ASCII value
    while(string1[i] == string2[i])//while loop to check if the strings are equal
      {
        if(string1[i] == '\0' && string2[i] == '\0')
          break;
        i++;
      }
    if(string1[i] == '\0' || string2[i] == '\0') // independent if statement
      return 0; //even if both are equal it print both are equal
    else if(string1[i] < string2[i])
      return -1;
    else
      return 1;
  }
   /*{
    int i,result = 0;
    for(i=0;string1[i]!='\0' && string2[i]!='\0';i++)
      {
        while(string1[i]>string2[i])
          {
            result = 1;
            break;
          }
        while(string1[i]<string2[i])
          {
            result = -1;
            break;
          }
      }
    return result;
  }

//try it without if statement
it will come out of loop as soon as it finds a difference*/