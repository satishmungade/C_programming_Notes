#include<stdio.h>
void add(int ,int);
void sub(int ,int );
int main()
{
	int iNo1,iNo2;
	printf("Enter two Nember:\t");
	scanf("%d %d",&iNo1,&iNo2);
	
	add(iNo1,iNo2);
	sub(iNo1,iNo2);
	return 0;
}
void add(int iNo1,int iNo2)
{
		int iAns;
		iAns=iNo1+iNo2;
		printf("Addtion is :%d\t",iAns);
}
void sub(int iNo1,int iNo2)
{
		int iAns;
		iAns=iNo1-iNo2;
		printf("substractin is :%d\t",iAns);
}

