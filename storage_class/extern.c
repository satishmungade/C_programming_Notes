#include<stdio.h>
 extern int iNo=10; 
int main()
{
        //auto register extern int iNo2=20;Error  multiple storage classes in declaration specifiers compile comfuse ha variable me stack madhe ka    registe and extern tya mule error muunch  extern ha must ahe global lihne karan to variable apan dusrya file madhun pn use karu sakto 2n yach linkage pn external asto baher ahe yach declratin  stroge class nhi use karu sakt apan.............imp
	
	extern int iNo;
	//extern int iNo=10; //error local
	int iNo1=20;
	printf("%d\n",iNo);
	printf("%d",iNo1);

 
	return 0;
}

/*


default  : value -zero. 
scope    : global.
lifetime : global.
linkage  : External linkage.

All global variable and function by default have extern strage class.
you can not define ..(defination)... local variable as extern.

if we write global :

int iNo; defination

int iNo=10; definatin

 extern int iNo; declration

 extern int iNo=10;defination 

=============================================================================================================================

if we write local :


int iNo; defination

int iNo=10; definatin

 extern int iNo; declration

 extern int iNo=10;Error

================================================================================================================================

extern int iNo; declaratin
int iNo ; default  extern definatin 
extern int iNo;// allow
extern int iNo=10; error local.

extern int iNo mense don't give memory its declearatin that variable its define globaly same where else.
storege class of that memory should be external.

*/
