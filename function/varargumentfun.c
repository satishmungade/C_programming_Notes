#include<stdarg.h>
#include<stdio.h>
int sum(int iNo_of_arguments,...);
int main()
{
	int iResult;
	iResult=sum(3,12,20,30);
	printf("The result of addition of 3 number is %d\n",iResult);
	iResult=sum(5,12,20,30,10,20);
	printf("The result of addition of 5 number is %d\n",iResult);
	
}
int sum(int iNo_of_arguments,...)
{
	int arg,iNo=0,iTotal=0;
	va_list ptr;
	va_start(ptr,iNo_of_arguments);
	arg=va_arg(ptr,int);
	while(iNo++<iNo_of_arguments)
	{
		iTotal+=arg;
		arg=va_arg(ptr,int);
	}
	va_end(ptr);
	return iTotal;
}
	
