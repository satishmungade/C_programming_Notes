// using format specifier
#include<stdio.h>
int main()
{
	char Szstr[]="Hello";
	char *pSzstr="Good";
	pSzstr=NULL;
	printf("%s",Szstr);
	printf("%p",pSzstr);
	printf("%s","night");
	

	printf("%s%p%s",Szstr,pSzstr,"night");
	return 0;
}
