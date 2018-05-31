#include <stdio.h>
#include <string.h>



int main()
{
  // str1 is a pointer to a constant - cannot change the contents of str1
  char* str1 = "abcdefghijklmnopqrstuvwxyz";
  
  printf("str1 : %s\n", str1);

  // DO NOT DO THIS - attempt to modify a character in a strong constant
  //   compiler will not complain though
  //*(str1 + 3) = 'c';


  
  // str2 is an array which holds a copy of the string constant
  char str2[27];
  char c = 'a';  
  for (int i = 0; i < 26; i++)
  {
    str2[i] = c;
    c++;
  }
  str2[26] = 0;
  printf("str2 : %s\n", str2);

  char* str2p = str2;

  if (strcmp(str1, str2) == 0)
    printf("The strings are identical\n");
  else
   printf("The strings are different\n");

  for (int i = 0; i < 26; i++)
  {
    
    if ((str2[i] > 95) && (str2[i] < 124))
      str2[i] = str2[i] - 32;

    //*(str2p + i) = '';  // OK to modify array
  }
    printf("str2 : %s\n", str2p);

  
  // str3 is also an array which holds a copy of the constant
  //   intialized to hold the string length
  char str3[52];

  strcpy(str3, str1);
  strcat(str3, str2);

  printf("str3 : %s\n", str3);
}
