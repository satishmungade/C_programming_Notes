#include<stdio.h>
int MyLastOccur(char Str[],char ch);
int main()
{
	char Str[30],ch;
	int iRet=0;
	printf("Enter A String :");
	scanf("%[^'\n']s",Str);
	printf("\n Enter Your Charactor :");
	scanf(" %c",&ch);
	iRet=MyLastOccur(Str,ch);
	if(iRet == -1)
	{
		printf("\nThere Is No Such Charactor");
	}
	else
	{
		printf("Item Found Last Position is %d:",iRet);
	}
	return 0;

}
int MyLastOccur(char Str[],char ch)
{
	int ipos=-1,iCnt=0; 

	while(Str[iCnt]!='\0')
	{
		if(ch == Str[iCnt])
		{
			 ipos=iCnt;  
		}
		iCnt ++;
	}
	return ipos; 
}