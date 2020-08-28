#include<stdio.h>
int main()
{ /*
{ //Arithmatic oprators
	int iAns,i,j;
	iAns=2*4.25+((3+8)/2);
	printf("%d",iAns);
	printf("i/j=\n");
	printf("i%%j=");  //modules jar print karach asel tr %% 2nda deyach 
	return 0;
}
*/
/*
proper math solving is ans is 13.50 is.but iAns is integer types munun output will 13 bcoz integer ha decimal number ch print karto 
 division(/) 
 +/+=+
 +/-=-
 -/+=-
 -/-=+    division give to quation 


modules(%)
 +%+=+     nem/den 
 +%-=+
 -%+=-   modules give to only reminder (nem use bgto)
 -%-=-
*/
/*
{  //increment operator &  decrement operator 
	// post increment (iNo ++) its give result first (old value) then incremnent .&same -< (iNo--)
	// pre increment (++ iNo) its mense increment first then give result. &same as <- (--iNo)
	//ex:increment operator
   int iNo=10;
	int iAns;
	printf("%d",iNo);
	
		iAns=++iNo;
	
		printf("%d",iNo);
		printf("%d",iAns);

		iAns=iNo++;
		printf("%d",iNo);
		printf("%d",iAns);
	
		printf("%d",iNo++);
		printf("%d",iNo);

		printf("%d",iNo++);
		printf("%d",iNo);

		printf("%d",sizeof(iNo));
		printf("%d",sizeof (++iNo)); //size of complie time solve hote karn to keyword ahe keywords all re the complie time constant ahet 
		printf("%d",iNo);
		
	/*	printf("%d",++10);//lvalue required as increment operand (++10 ,10=10+1 ,10=11 )
		printf("%d",10++);//lvalue required as increment operand */

	
	/*rintf("%d",+ +iNo);// (+ +iNo)eth iNo ha operand zal ahe mag unary + operator
		printf("%d",iNo);
		return 0;
*/ 
//ex:decrement  opretor
int iNo=10;
printf("%d",iNo);
printf("%d",iNo--);
printf("%d",iNo);
printf("%d",--iNo);
}

Arithmatic oprators

+ :unary plus
- :unary minus         imp: unary oprators   precedence (level 1) Associtivty (R->L)
++ :increment
-- :decrement

------------------------------------------------------------------------------------------------------------------------------------
* :multiplication				imp: binary oprators   precedence (level 2) Associtivty (L->R)
/ :division
% :modules
-----------------------------------------------------------------------------------------------------------------------------------
+ :adition
- :substaction 				imp: binary oprators   precedence (level 3) Associtivty (L->R)







