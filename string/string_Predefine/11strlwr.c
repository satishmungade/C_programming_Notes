#include<stdio.h>
#include<string.h>

int main()
{
   char SZstring[20];
   
   printf("\n\nEnter the String;\t");
   gets(SZstring);

   strlwr(SZstring);
  
   printf("\n\n String Is Lower Case:\t");
   puts(SZstring);

   return 0;
}
