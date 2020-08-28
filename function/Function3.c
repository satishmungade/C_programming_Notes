#include<stdio.h>
int addition (int,int);
int subtraction (int,int);
int multiplication(int,int);
int division(int ,int);
int modulud(int,int);
int main()
{
	int iNo1,iNo2,iAns;
	printf("Enter two Number :\t");
	scanf("%d%d",&iNo1,&iNo2);

	iAns=add(iNo1,iNo2);
	printf("Addition is %d\t",iAns);
	
    iAns=sub(iNo1,iNo2);
	printf("substactin is %d\t",iAns);
	return 0;
}
int addition(int iNo1,int iNo2)
{
	int iAns;
	
	return iAns=iNo1+iNo2;
}
int subtraction(int iNo1,int iNo2)
{
	int iAns;
	
	return iAns=iNo1-iNo2;
}

