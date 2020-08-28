#include<stdio.h>
char * MyStrNCopy( char *,const char *,int );
int main()
{
	char Str[100],Str1[100];
	int iNo=0;

	printf("\n Enter Your String :");
	scanf("%[^'\n']s",Str);

	printf("\n Enter Your number That Number Til Count :");
	scanf("%d",&iNo);

	MyStrNCopy(Str,Str1,iNo);
	printf("\n Copy Your string new Location Number Til:%s",Str);
	
	return 0;
}


char * MyStrNCopy(char Str[], const char Str1[],int iNo)
{
	int iCounter=0;
	while(Str1[iCounter] != '\0')
	{
		Str[iCounter] = Str1[iCounter];
		if(iCounter == iNo)
			break ;
		 iCounter ++;
	}
	Str[iCounter]='\0';
	return Str ;	
}