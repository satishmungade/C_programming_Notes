#include<stdio.h>
/*void fun();
int main()
{
        extern int iNo ;
        printf("in Main %d\n",iNo);
        fun();
        return 0;
} */
void fun();
int main()
{
        extern int iNo ;
        printf("in Main %d\n",iNo);
        fun();
        return 0;
} 
int iNo=10;
