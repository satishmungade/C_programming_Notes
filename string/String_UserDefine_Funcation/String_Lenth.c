#include <stdio.h>
int MyStrLenth(const char str[]);
int main()
{
	char Str[100];
	int iLenth =0;
	printf("Enter Your string :");
	scanf("%[^'\n']s",Str); //New Line yei paret data ghe
	iLenth=MyStrLenth(Str);
	printf("Totol Lenth of Your String is :%d",iLenth);

	return 0;

}
int MyStrLenth(const char Str[] )
{
	int iLenth =0;
	/*while( Str[iLenth] != '\0')
	{
		iLenth ++;
		
	} */
	while(*Str !='\0')  // using pointer 
	{
		iLenth ++;
		Str ++;
	}
	return iLenth;
}
