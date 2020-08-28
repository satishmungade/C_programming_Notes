#include<stdio.h>
#include<string.h>

int main()
{
   char SZstring[20];
   
   printf("\n\nEnter the String;\t");
   gets(SZstring);

   strupr(SZstring);
  
   printf("\n\n String Is Upper case:\t");
   puts(SZstring);

   return 0;
}
