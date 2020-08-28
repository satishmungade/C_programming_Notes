#include<stdio.h>
void add (int,int,int*);
int main()
{
	int iNo1,iNo2;
	int sum;	
	printf("Enter two Number :\t");
	scanf("%d%d",&iNo1,&iNo2);

	add(iNo1,iNo2,&sum);
	printf("Addition is %d\t",sum);
	
	return 0;
}
void add(int iNo1,int iNo2,int* sum)
{
	
	*sum=iNo1+iNo2;
}
