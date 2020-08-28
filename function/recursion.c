#include<stdio.h>
int Fact(int);
int main()
{
		int iNo,iAns;
		printf("Enter a number");
		scanf("%d",&iNo);
		iAns=Fact(iNo);
		printf("%d",iAns);
		return 0;
		
}
int Fact(int iNo)
{
	if(iNo==1)
		return 1;
	else
		return iNo*Fact(iNo-1);
}
/*
fuction calling its self with respactive c program.
total function repetetaly karach tenhach use karach recursion 
recursion infinte loop astani use karu naye tyani stack fram khup vathat.
without recursion saglech program che logic karta yete so nako use karu recursion.

yaa program ch logic bg

i=2,iAns=1;
while (i=<iNo)
{
	iAns = iAns * i ;
	i ++ ;
}
iAns astani kahi tri initialization pahije nhi tr grabage * as khi tri hote mg
*/
