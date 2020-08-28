#include<stdio.h>
int MyStrNCmp(const char*,const char*,int);
int main()
{
	char Str[100],Str1[100];
	int iNo=0,iNo1=0;
	printf("\n Enter Your First String:");
	scanf("%[^'\n']s",Str);

	printf("\n Enter Your Secound String:");
	scanf(" %[^'\n']s",Str1);

	printf("\n Enter Your Number That Number Til Compair :");
	scanf("%d",&iNo1);

	iNo=MyStrNCmp(Str,Str1,iNo1);
	if(iNo == 1)
		printf("\n Both String are Equal :");	
	else 
		printf("\n Both String are Not-Equal :");	
	
	return 0;
}
int MyStrNCmp(const char Str[] ,const char Str1[],int iNo )
{
	int iCounter=0,iCounter1=0;
	while(Str[iCounter] != '\0' && Str1[iCounter1] !='\0')
	{
		if (Str[iCounter] == Str1[iCounter1])
			{
				if(iCounter == iNo)
				{ 
			
					return  1;
				}
			}	
			else
			{
				return 0 ;
			}
			
		
	}	
}	