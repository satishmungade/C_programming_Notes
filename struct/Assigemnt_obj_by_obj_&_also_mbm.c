#include<stdio.h>
struct stud
{
        int iNo;
        char ChChar;
        //int iNo;
};
void info(struct stud obj1 ,struct stud* obj2,struct stud obj3);
int main ()        
{
        struct stud obj1,obj2,obj3;
        printf("Enter your 1st obje :\t");
        scanf("%d %c ",&obj1.iNo,&obj1.ChChar);
        
        
       
        info(obj1,&obj2,obj3);
        printf("\n After  Assigne main obj2 return by-> call by Address : %d\t %c\t", obj2.iNo, obj2.ChChar );//,obj2.iNo);    
        return 0;   
 }
void info(struct stud obj1,struct stud* obj2,struct stud obj3 )
{
        *obj2=obj1; // assign  bye Object
        printf("\nAfter Assigne Function 1 to 2 using  call by address print by direct member access -> symabll : %d\t%c\t",obj2->iNo,obj2->ChChar); 
             
	obj3.iNo=obj1.iNo;
	obj3.ChChar=obj1.ChChar; //member by member
       printf("\nAfter Assigne functon 1 to 3 by call by value member by member access  : %d\t%c\t",obj3.iNo,obj3.ChChar);
        
}       
