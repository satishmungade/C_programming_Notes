unconditional branching statement
1.go to statemane:
		int main()
		{
			
				go labal;
				{
					labal;
					----
					----
					----
					goto labal;
				}
				goto labal;
		}

total function krta use karata yeto


-----------------------------------------------------------------------------------------------------------------------------
2.break:
#include<stdio.h>
int main()
{
	int i;
	
	for(i=1;i<10;i++)
	{
		if(i%2==0)
		break;         // loop chya baher jaa
		printf("%d",i);
	}
	return 0;
}
//we can write break statement only inside switch or loop (for,while ,do while )break terminate current  loop or cureent	switch terminate 
-------------------------------------------------------------------------------------------------------------------------------
3.
#include<stdio.h>
int main()
{
	int i;
	
	for(i=1;i<10;i++)
	{
		if(i%2==0)
		continue ;        //true jar mag next itteration la janar mg i++ honar. 
		printf("%d",i);
	}
	return 0;
}
------------------------------------------------------------------------------------------------------------------------=---------
4.
return 
		return ; //jithun ala tithe nig 
		

		return expresition ;// jithun ala tithe nig pn jata jata hai expersition jaa.
		
------------------------------------------------------------------------------------------------------------------------
