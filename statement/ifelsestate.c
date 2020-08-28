if else statement
syntax:
		if(expression1)
			statemnt 1;
		else
			statement 2;
if expersion is true statement 1 is excute then otherwise statement 2 executed 
------------------------------------------------------------------------------------------------------------------------------
ex1:
			if(1)
				printf("one");
			else
				printf("two");
				printf("three");
		op:one,three true condition the one output and three is this sperate statement.
---------------------------------------------------------------------------------------------------------------------------
ex2:
			if(0)
				printf("one");
			else
				printf("two");
				printf("three");
op: two,three becouse false expersion then else statemnt exicute and three is this sperate statement.
=-----------------------------------------------------------------------------------------------------------------------------
ex3:
		if(1)
				printf("one");
		else
			{
				printf("two");
				printf("three");
			}
output:one 
-----------------------------------------------------------------------------------------------------------------------------
 ex4:      if(0)
				printf("one");
		else
			{
				printf("two");
				printf("three");
			}
output:two ,three
-----------------------------------------------------------------------------------------------------------------------------
ex4:
		if(1)
			printf("one");
			printf("two");
		else
			printf("three");
	
output: NO matching statement error if & else statement chya madhe ekch statement pahije te simple kiva compound aso
	if(1)
		{
			printf("one");
			printf("two");
		}
		else
			printf("three");
-------------------------------------------------------------------------------------------------------------------------------
ex 4;
	if(1);
		{
			printf("one");
			printf("two");
		}
		else
			printf("three");

output: error ka if chya natar ekch statement te simple kiva compand pn ethe 2n statement ahet ek ; null ahe dusri compound ahe so mnun no matching statement as error yete.
------------------------------------------------------------------------------------------------------------------------------
nested if else:
   syntax:
		if(expression 1)
			{
				if(expression 2)
					statemnt 1;
				else
		        	statement 2;
			}	
		else
			{
				if(expression 3)
					statemnt 3;
				else
		        	statement 4;
			}
------------------------------------------------------------------------------------------------------------------------------
