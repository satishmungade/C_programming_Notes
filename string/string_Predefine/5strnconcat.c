//Concatenated n number
#include<stdio.h>
#include<string.h>
int main()
{
   char source[20],destination[20];
   int iNo;
   
   printf("\n\nEnter Destination String:\t");
   gets(destination);
   printf("\n\nEnter Source string is:\t");
   gets(source);
   printf("\n\nEnter value of iNo:\t");
   scanf("%d",&iNo);
   
  strncat(destination,source,iNo);
  
  printf("\n\nConcatenated String is:\t");
  puts(destination);
  
  return 0;

}
