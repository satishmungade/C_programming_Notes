#include<stdio.h>
int main()
{
	int iNo1=10,iNo2=20,ans;

		
	   if(iNo1 & iNo2)     //bitwise and
		   printf("Result is bitwise iNo1&iNo2 is  1\n");
	  if(iNo1 && iNo2) //logical and
		  printf("Result is logical iNo1&iNo2 is  1\n");

		iNo1=iNo1 ^ iNo2;
		iNo2=iNo1 ^ iNo2;
		iNo1=iNo1 ^ iNo2;

		printf(" After XOR, iNo1= %d and iNo2= %d\t",iNo1,iNo2);
	return 0;
}
