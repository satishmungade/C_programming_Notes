#include<stdio.h>

//int main()
/*
{
        
// 1.declaration of variable having same data type in same scope .
        extern int iNo;
        extern int iNo;  // same declaration of variablethis allow fakt olkh ahe memory ch khi den ghen nhi chalte
        printf("%d",iNo);
        return 0;
}
int iNo=10;
*/

/*{
// 2.declaration of variable having Diffrent data-type in same scope .

        extern int iNo;
        extern char iNo; eth confouse ahe error same variable name ahe pn data type dusr ahe .
        printf("%d",iNo);        
        return 0;
}
int iNo=10;
*/
/*
extern int iNo;
int main()
{
// 3. declaration of variable having same data-type in Diffrent scope .

        extern int iNo; // eth declaration ahet zana scope ch nhi global aso kiva local aso.
        printf("%d",iNo);        
        return 0;
}
int iNo=10;
*/

/*
extern int iNo;
{ 
// 4. declaration of variable having same data type in diffrent scope .       
   extern char iNo;
          printf("%d",iNo);       error extacly same 2. 
        return 0;
}
int iNo=10;
*/



/*
{
// 5. declaration of variable having same name & same data type in same scope .
        int iNo;
        int iNo;
        printf("%d",iNo);  //  Error Same variable name same datatype   
        return 0;
} 
*/

/*
{
// 6. declaration of variable having same name & Diffreant data type in same scope .
        int iNo;
        char iNo;
        printf("%d",iNo);    //Error Same variable name   iNo ha kona sadhi wapara ghela ha samjt nhi. 
        return 0;
} 
*/
// 6.8 declaration of variable having same name & Diffreant data type in same scope .
void fun();
int iNo=10;
int main()
{
          int iNo=20;
        printf("%d\n",iNo);    
        {
                char iNo='A';
                printf("%d\n",iNo);
        }
        printf("%d\n",iNo);
        fun();                                     //Allow diffrent diffrent scope 
        return 0;
}
void fun()
{
        printf("%d\n",iNo);
}














