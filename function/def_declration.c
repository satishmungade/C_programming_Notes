#include<stdio.h>
int main()
{
	int i;

	i=fun(10,20);
	printf("%d",i);
	return 0;
} 
fun(int iNo,int iNo1)
{
	return iNo  + iNo1;
}
