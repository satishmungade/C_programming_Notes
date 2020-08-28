#include<stdio.h>
#include<string.h>

int main()
{
   char SZstring[20],ch;
   
   printf("\n\nEnter the String;\t");
   gets(SZstring);
   printf("\n\n Enter the character to set:\t");
   scanf("%c",&ch);

   strset(SZstring,ch);
  
   printf("\n\nNow String Is:\t");
   puts(SZstring);

   return 0;
}
