#include<stdio.h>
int main()
{
	char Szstr[50]="hello,world";
	char s[100];
	
	printf("enter your string ");
	gets(s);
	printf("%s\n%s",Szstr,s);
	return 0;
}
// we use %s format specifier scanf read input upto but not first void space charcter (tab,in space ) it apand NULL charrater \0 then store in our memory whole address gives by of scanf.
