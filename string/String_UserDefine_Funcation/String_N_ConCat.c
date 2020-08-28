#include<stdio.h>
int MyStrLenth(const char Str[] );
char * MyStrConcatN( char *,const char * ,int );
int main()
{
	char Str[100],Str1[100];
	int iNo=0;

	printf("\n Enter Your First String :");
	scanf("%[^'\n']s",Str);

	printf("\n Enter Your Secound String :");
	scanf("%[^'\n']s",Str1);
	
	printf("\n Enter Your Number That Number Til Concat :");
	scanf("%d",&iNo);

	MyStrConcatN(Str,Str1,iNo);
	printf("\n Concat Your string is new Location Til Number  That : %s",Str);
	
	return 0;
}
char * MyStrConcatN(char Str[],const char Str1[],int iNo)
{
	int iCounter=0,iCounter1=0;
	iCounter=MyStrLenth(Str);
	while(Str1[iCounter1] != '\0')
	{
		
			Str[iCounter] = Str1[iCounter1];
			iCounter ++;
			iCounter1 ++;

			if(iCounter1 == iNo)
				break;
	}
	Str[iCounter]='\0';
	return Str;
	
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
