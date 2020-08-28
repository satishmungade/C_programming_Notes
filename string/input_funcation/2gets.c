#include<stdio.h>
int main ()
{
	char Szstr[100];
	printf("Enter Your name :\t");
	gets(Szstr);
	
	printf(" your Name is:%s\n",Szstr);
	printf("enter your sirname :\t");
	printf("Enter Your parents name %s\n",gets(Szstr));
	return 0;
}
//hear gets use total string print
