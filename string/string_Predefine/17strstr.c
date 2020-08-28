#include<stdio.h>
#include<string.h>
int main()
{
   char string1[20],string2[20],*ptr;
   
   printf("\n\nEnter the string:\t");
   gets(string1);
   printf("\n\nEnter string to found:\t");
   gets(string2);
   
   ptr=strstr(string1,string2);
  
   if(ptr==NULL)
   {
       puts("\n\nString not found\n");
   }
   else
    {
        printf("\n\n String is found at %d location\n",(ptr-string1)+1);
        printf("String is found in '%s'\n",ptr);
     }
      return 0;
}
