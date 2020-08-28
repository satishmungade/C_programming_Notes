#include<stdio.h>
#include<string.h>
int main()
{
	char SZstring1[20],SZstring2[20];
    int ch;
	
    printf("\n\nEnter String1:\t");
    gets(SZstring1);
    printf("\n\nEnter String2:\t");
    gets(SZstring2);
   
    ch=strcmp(SZstring1,SZstring2);
   
    if(ch==0)
        printf("\n\n Both String Are Same\n");
    else
        printf("\n\nBoth String Are diffrent\n");
   // getch();

    return 0;
}
