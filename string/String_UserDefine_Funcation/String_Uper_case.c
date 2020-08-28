#include<stdio.h>
char* Upercase(char *Str);
int main()
{
	char Str[30];
	printf("Enter A string :");
	scanf("%[^'\n']s",Str);
	Upercase(Str);
	printf("\nConvert into UperCase to LowerCase : \t %s",Str);
	return 0;

}
char* Upercase(char *Str)
{
	int iCnt=0;
	while(Str[iCnt] !='\0')
	{
		if(Str[iCnt] >= 'A' && Str[iCnt] <='Z')
		{
			Str[iCnt]=Str[iCnt]+32;
		}
		iCnt ++;
	}
	return Str;

}