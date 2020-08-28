1#include<stdio.h>
void add();
void sub();
int main()
{
	add();
	sub();
	return 0;
}
void add()
{
	int iNo1,iNo2 ,iAns;

	printf("Enter two Nember:\t");
	scanf("%d%d",&iNo1,&iNo2);

	iAns=iNo1+iNo2;

	printf("Addition is :%d\n",iAns);
}
void sub()
{
	int iNo1,iNo2 ,iAns;

	printf("Enter two Nember:\t");
	scanf("%d %d",&iNo1,&iNo2);

	iAns=iNo1-iNo2;

	printf("subtraction is :%d\n",iAns);
}
