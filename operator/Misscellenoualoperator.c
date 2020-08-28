/*   ----miscellaneous operators:------
function call ()
Array subscribe operator []
Member access operator 
	1.Direct member access . ex:obj.
	2.indirect member access ->
Derefarence *
conditional operator ?:
size of ()
como operator ,  associtivity l -> R
address of &
...............................

conditianal operator (?:)
{

		excperation1 ?  FIRST CONDITION ALWYES QUATION CH RAHNAR

        excperation2 :

		excperation3 ;
}	
--------------------------------------------------	
ADDRESS OF &
its give virtual address 
--------------------------------------
sizeof ()
syntax:
	sizeof(operand);
	sizeof(i);
	sizeof(10);
	sizeof(int);		

   sizeof i;
	sizeof 10;
	sizeof int; //error Data type asel tenha nhi chalt

:this operator consoan with size not a memory
:this operator compute the compiler time  its result in possitive interger. unsigned interger (size_t) .negative size det nhi
:we can give and operator which have size that is variable datatype litteral constant.
----------------------------------------------------------
*/	
#include<stdio.h>
int main()
{	
	int iNo=10;
       
	char Chchar='A';
	float fNo=57.3;
	double dNo=96.33;
 	

         int x= sizeof(iNo++);//4
        printf("%d",iNO);//10

	int ans;
	ans=10,20,30; //come is operator 
	printf("%d\n",ans);
	ans=(10,20,30); //coma is sperator
	printf("%d\n",ans);

	printf("%d\n",sizeof(iNo));
	printf("%d\n",sizeof(Chchar));
	printf("%ld\n",sizeof(fNo));
	printf("%ld\n",sizeof(dNo));
  printf("\n");
   printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(char));
	printf("%d\n",sizeof(float));
	printf("%d\n",sizeof(double));

   printf("\n");
    printf("%d\n",sizeof(10));
	printf("%d\n",sizeof('A'));
	printf("%d\n",sizeof(57.3));
	printf("%d\n",sizeof(96.33f));
printf("\n");

	printf("%d\n",sizeof iNo);
	printf("%d\n",sizeof 10);
	//printf("%d\n",sizeof int);

 printf("\n"); 
	printf("%d\n",iNo);
	printf("%d\n",sizeof(++iNo));
	printf("%d\n",iNo);
  //  printf("%d\n",sizeof(++10));





	return 0;
}
