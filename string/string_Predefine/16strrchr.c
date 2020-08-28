#include<stdio.h>
#include<string.h>

int main()
{
	char str[20],ch;
    char *ptr;
    
    printf("\n\nEnter the string:\t");
    gets(str);
    
    printf("\n\nEnter character to be found:\t");
    scanf("%c",&ch);
   
   ptr=strrchr(str,ch);
   
   if(ptr==NULL)
        printf("\n\n Character is not found:\n");
   else
       printf("\n\nCharacter is found at %ld location\n",(ptr-str)+1);
 
   return 0;
}
