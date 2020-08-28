#include<stdio.h>
int MyStrLenth(const char Str[] );
char * MyStrConcat( char *,const char * );
int main()
{
	char Str[100],Str1[100];
	int iNo=0;

	printf("\n Enter Your First String :");
	scanf("%[^'\n']s",Str);

	printf("\n Enter Your Secound String :");
	scanf("%[^'\n']s",Str1);
	
	MyStrConcat(Str,Str1);
	printf("\n Your string is ConCat new Location : %s",Str);
	
	return 0;
}
char * MyStrConcat(char Str[],const char Str1[])
{
	int iCounter=0,iCounter1=0;
	iCounter=MyStrLenth(Str);
	while(Str1[iCounter1] != '\0')
	{
				
		Str[iCounter] = Str1[iCounter1];
		iCounter ++;
		iCounter1 ++;
	}
	Str[iCounter]='\0';
	
	return Str ;	
	
}
int MyStrLenth(const char Str[] )
{
	int iLenth =0;
	while( Str[iLenth] != '\0')
	{
		iLenth ++;
		
	}
	return iLenth;
}
