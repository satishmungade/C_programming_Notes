#include<stdio.h>
char* LowerCase(char *Str);
int main()
{
	char Str[30];
	printf("Enter A string :");
	scanf("%[^'\n']s",Str);
	LowerCase(Str);
	printf("\nConvert into LowerCase to Upercase: \t %s",Str);
	return 0;

}
char* LowerCase(char *Str)
{
	int iCnt=0;
	while(Str[iCnt] !='\0')
	{
		if(Str[iCnt] >= 'a' && Str[iCnt] <='z')
		{
			Str[iCnt]=Str[iCnt]-32;
		}
		iCnt ++;
	}
	return Str;

}