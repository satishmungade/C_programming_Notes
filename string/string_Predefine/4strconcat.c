//Concatenated 
#include<stdio.h>
#include<string.h>
int main()
{
   char source[20],destination[20];
   
	printf("\n\nEnter Destination string:\t");
    gets(destination);
    printf("\n\nEnter Source String:\t");
    gets(source);
    
    strcat(destination,source);
    
    printf("\n\nConcatenated String is:\t");
    puts(destination);
    
    return 0;
}
