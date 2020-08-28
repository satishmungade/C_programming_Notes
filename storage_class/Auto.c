#include<stdio.h>
//auto int iNo2;  we can not write auto storage class global.
int main()
{
	
	//auto register int iNo2=20;Error  multiple storage classes in declaration specifiers compile comfuse ha variable me stack madhe ka    registe tya mule error muunch 2n stroge class nhi use karu sakt apan.............imp
  auto int iNo2=20;

	printf("%d\t",iNo2);
	{
		int iNo1=10;
		printf("%d\t",iNo1);
		printf("%d\t",iNo2);
	}
	printf("%d\t",iNo2);
	//printf("%d\t",iNo1);
	return 0;
}
/*
all local variable by defloult auto storage class,
auto ha stack vr work hoto.tya jaga hi stack vr milte (memory)
default  : value -grabage. 
scope    : local (tevthya function purta).
lifetime : local.
linkage  : Nolinkage. 

All local variable by default have auto storage class.
we can not write auto storage class global..... .ka tya jaga ch hi stack var milte mg kas ky golbal lihu kasto
hear iNo2 iNo1 is both auto storage class but iNo1 is that function spsicific */

