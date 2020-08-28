#include<stdio.h>
int main ()
{       //auto register int iNo2=20;Error  multiple storage classes in declaration specifiers compile comfuse ha variable me stack madhe ka    registe tya mule error muunch 2n stroge class nhi use karu sakt apan.............imp
	register int iCounter=200;
	printf("%d\n",iCounter);
	//printf("The address of varibale%p",&iCounter);
}
/*
register when we write only local varial register local... class creater we wish that varigale directly go to register instuted of getting memory or Ram (stack fram ) its for faster accessing perpos.

default  : value -grabage. 
scope    : local (total function purta).
lifetime : local.
linkage  : Nolinkage.


we can not write register storage class global.

Register is request to compiler if not satified then that variable gets memory in stack fram like auto.

we can not apple address '&' of operator to register variable .register is hardware tya mule tyyala address nasto.

printf("The address of varibale%p",&iCounter); karan operator ha compaile time solve hoto.



register types
sp.
Bp
Si
Di
