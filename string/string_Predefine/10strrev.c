#include<stdio.h>
#include<string.h>

int main()
{
   char string[20];
   
   printf("\n\nEnter the String;\t");
   gets(string);

   strrev(string);
  
   printf("\n\nREverse String Is:\t");
   puts(string);

   return 0;
}
