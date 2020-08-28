#include<stdio.h>
#include<string.h>
int main()
{
	int iNo;
    char source[20];
    char destination[20];
    
 	printf("\n\nEnter the Source String:\t");
    gets(source);
    printf("\n\nEnter the value of n:\t");
	scanf("%d",&iNo);
    
    printf("\n\nSource String is:\t");
    puts(source);
    
    strncpy(destination,source,iNo);
    
    printf("\n\nDestination String is:\t");
    puts(destination);

  return 0;
}
