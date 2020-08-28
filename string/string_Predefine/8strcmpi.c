#include<stdio.h>
#include<string.h>
int main()
{
	char string1[20],string2[20];
    int ch;
	
    printf("\n\nEnter String1:\t");
    gets(string1);
    printf("\n\nEnter String2:\t");
    gets(string2);
   
    ch=strcasecmp(string1,string2);
   
    if(ch==0)
        printf("\n\n Both Strings Are Same\n");
    else
        printf("\n\nBoth Strings Are diffrent\n");
   // getch();

    return 0;
}
