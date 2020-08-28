//strlen

#include<stdio.h>
#include<string.h>

int main()
{
	char *ptr="Hello";
    char SZstr[]="Good";

	printf("\n the length of Hello is %ld\n",strlen(ptr));
    printf("\n the length of Good is %ld\n",strlen(SZstr));
    printf("\n the length of morning is %ld\n",strlen("morning"));
   
    return 0;
}
