#include<stdio.h>
int main()
{ //relational operators always out boolean value one or zero
	int iAns;
    iAns=10<20;  //less than <
	printf("%d\n",iAns) ;
	iAns=140>20; //getter than  >
	printf("%d\n",iAns) ;
	
	
	iAns=10>20!=1; // 10>20 is true manjech one 1!=1 maject not equal to 
	printf("%d",iAns);
}
//Relation operators
<: less than
>: getter than
<=: less than or equal					imp: binary oprators   precedence (level 1) Associtivty (L->R)
>=: getter than or equal
-----------------------------------------------------------------------------------------------------------------------------------
==: equal to 
!=: not equal          imp: binary oprators   precedence (level 2) Associtivty (L->R)
