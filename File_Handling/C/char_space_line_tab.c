#include<stdio.h>
int main()
{
	FILE *fp;
	char chChar;

	int iNoOfChar=0;
	int iNoOfSpaces=0;
	int iNoOfTabs=0;
	int iNoOfLine=0;

	fp = fopen("Count_file.txt","r");
	if (fp== NULL)
	{
		printf("Cant open this file ");
		return -1;
	}
	while (1)
	{
		chChar=fgetc(fp);
		if(chChar == EOF)
			break;
		iNoOfChar ++;

		if(chChar == ' ')
			iNoOfSpaces ++;
		if (chChar == '\t')
			iNoOfTabs ++;
		if (chChar == '\n')
			iNoOfLine ++ ;
	}
	fclose(fp);
    printf("\nNo of Characters are : %d \n",iNoOfChar);
    printf("No of Spaces are :%d \n",iNoOfSpaces);
    printf("No of Tab are :%d  \n",iNoOfTabs);
    printf("No of Lines are : %d \n",iNoOfLine);
	return 0;
}
