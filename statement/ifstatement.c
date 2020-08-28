//if evulation of branching statement true (non zero) then statement get excuted.that statement can be simple and compound statement
//ex1:
/*
		ex:1:if(1)
			printf("one");
			printf("two");
		
		output:one ,zero becouse if ch ek te simple kiva compound statement tyach aste condition true ahe manun one excute zal mh 2nd printf continew excute kel
------------------------------------------------------------------------------------------------------------------------------
ex:2:
	if(1)
	{
		printf("one");
		printf("two");
	}			

	 output: one, two   compound statement ahe true ahe mg mnun excute zal


---------------------------------------------------------------------------------------------------------------------------
ex:3:
		if(0)
			printf("one");
			printf("two");

		output:two  ka if experssion false zal mnun khalch expression print zal

----------------------------------------------------------------------------------------------------------------------------
ex4:

			if(0)
			{
				printf("one");
				printf("two");
			}

	output:no output will be print becouse total expresion is false

-------------------------------------------------------------------------------------------------------------------------
ex:4:	if(0);
			{
				printf("one");
				printf("two");
			}
		output:is ; is NULL statement whice consider if null statement  
-------------------------------------------------------------------------------------------------------------------------
nested if statement
	

	if(expresion 1)
		if(expresion 2)
		    statement ;


ex:int i=7
		if(i>=5)
			if(i>=7)
				printf("hellow")
there is pahila if ahe taych statement khalch if ahe mg tya ef ch statement printf ahe
----------------------------------------------------------------------------------------------------------------------------

*/

#include<stdio.h>
 int main()
{ 


	int x=0;
		if (x=0)
			printf("one");
		else
			printf("zero");
		
}
