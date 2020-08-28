#include<stdio.h>
#include<string.h>

int main()
{
	char str[20],ch;
    int iNo;
	
    printf("\n\nEnter the String:\t");
    gets(str);
    printf("\n\nEnter character to set:\t");
    scanf("%d",&ch);
    printf("\n\nEnter the valeu of iNo;\t");
    scanf("%d",&iNo);

     strnset(str,ch,iNo);

     printf("\n\nNow String is:\t");
     puts(str);
   

    return 0;
}
