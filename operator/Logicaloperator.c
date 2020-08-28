#include<stdio.h>
int main()
{
	int iNo1=0,iNo2=1,iNo3=2,iAns;
	iAns=iNo1 && iNo2++ && iNo3++;
	//iAns=iNo1 && iNo2++ || iNo3++;
	printf("%d%d%d\t",iNo1,iNo2,iNo3);
	printf("%d%d%d",iNo1,iNo2,iNo3);
	return 0;
}
&& (&&)if first operand zero 0 then 2nd operator dont get solve the as desicition 
if frist oprand is non zero the desicition is pending

|| (OR)
f frist oprand is non zero the 2nd operand don't get solve.

Truth table:

		OPERAND1 |  OPERAND2  | &&(and)    |  ||(OR)  | ! (OPERAND1)       |
			1	 | 		1	  |   1        |     1    |	         0			   |
			1    |		0	  |	  0        |     1    |  	     0      	 |	
			0	 |		1	  |	  0        |     1    |	         1			   |
			0	 |		0	  |	  0        |     0    |          1		  	   |
