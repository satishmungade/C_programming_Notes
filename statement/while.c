/*syntax:
			i=0;	Assigment
			while(i<3) condition
				{
					printf("%d",i); Statement
					i++; Manipulation
				}
*/
#include<stdio.h>
int main()
{
/*---------------------------------------------------------------------------------------------------------------

	int i=2;
	while(i<10);
	{
		printf("The value is i%d",i);
		if (i==5)
	    //break; error: break statement not within loop or switch  break break fakt apan switch kiwa loop madhech lihu sakto
    }
} 
-------------------------------------------------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------------------------------------------------
int i=1;
	while(i<=5)
	{
		printf("%d\t",i);
		
		i=i+1;
		
	}
	printf("the value i after loop is %d",i);
}
o/p: 1	2	3	4	5	the value i after loop is 6
---------------------------------------------------------------------------------------------------------------------------*/
/*
int i=1;
	while(i<=5);
	{
		printf("%d\t",i);
		
		i=i+1;
		
	}
	printf("the value i after loop is %d",i);
} 
o/p: No output infinte loop end of the while header makes
--------------------------------------------------------------------------------------------------------------------------*/
int i=1;
	while(i<=5)
	{
		printf("%d\t",i);
		break;
		i=i+1;
		
	}
	printf("the value i after loop is %d",i);
}
op:1	the value i after loop is 1
