#include<stdio.h>
#include<string.h>

int main()
{
	char SZstring1[20],SZstring2[20];
    int ch,iNo;
	
    printf("\n\nEnter String1:\t");
    gets(SZstring1);
    printf("\n\nEnter String2:\t");
    gets(SZstring2);
    printf("\n\nEnter iNo;\t");
    scanf("%d",&iNo);

    ch = strncasecmp(SZstring1,SZstring2,iNo);
   
    if(ch==0)
        printf("\n\n Both Strings Are Same\n");
    else
        printf("\n\nBoth Strings Are diffrent\n");
   //getch();

    return 0;
}
