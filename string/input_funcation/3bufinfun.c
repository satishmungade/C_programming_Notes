//buffered input function
#include<stdio.h>
int main ()
{
	char chChar1,chChar2;
	
	printf("Enter Your name :\t");
	printf("Enter Your sirname :\t");
	scanf("%c%c",&chChar1,&chChar2);
	
/*	printf("Enter Your sirname :\t");
	scanf("%c",&chChar2);
*/
	printf("Your name is :%c\t",chChar1);
	printf("Your sirname is :%c\t",chChar2);
	
	return 0;

}

//no buffer function (getch getche)
hear buffer not use that is function read from console directly meane read single character only.
