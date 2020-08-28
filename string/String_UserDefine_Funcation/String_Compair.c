#include<stdio.h>
int MyStrLenth(const char Str[] );
int MyStrCmp(const char*,const char*);
int main()
{
	char Str[100],Str1[100];
	int iNo=0;
	printf("\n Enter Your First String:");
	scanf("%[^'\n']s",Str);

	printf("\n Enter Your Secound String:");
	scanf(" %[^'\n']s",Str1);

	iNo=MyStrCmp(Str,Str1);
	if(iNo == 1)
		printf("\n Both String are Equal :");	
	else 
		printf("\n Both String are Not-Equal :");	
	
	return 0;
}
int MyStrCmp(const char Str[] ,const char Str1[] )
{
	int iCounter=0,iCounter1=0,iNo=0,iNo1=0;
	
		
		while((Str [iCounter] !='\0'||Str1[iCounter]) !='\0')
		{
			if(Str[iCounter] == Str[iCounter])
				iCounter ++;
				iCounter ++;
		}
		if(iCounter == iCounter)
		{
		    return 1;
		}	
		else
		{
			return 0;
		}
	
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
