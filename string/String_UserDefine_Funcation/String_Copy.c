#include<stdio.h>
char * MyStrCopy( char *,const char *);
int main()
{
	char Str[100],Str1[100];
	printf("\n Enter Your String :");
	scanf("%[^'\n']s",Str);

	MyStrCopy(Str,Str1);
	printf("\n Copy Your string new Location :%s",Str);
	
	return 0;
}
char * MyStrCopy(char Str[],const char Str1[])
{
	int iCounter=0;
	while(Str1[iCounter] != '\0')
	{
		Str[iCounter] = Str1[iCounter];
		iCounter ++;
	}
	Str[iCounter]='\0';
	return Str;
}