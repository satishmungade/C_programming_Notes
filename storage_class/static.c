/*
default  : value -zero. 
scope    : global & local
lifetime : global.
linkage  : internal linkage.
static manje tyach total file purta pn global purcist (tech value shear kart asto 1 asel interatin tyach +1 =2 asch puthe shear kart  jato jo paret process to paret.)
:-static yala stack madhe memory nahi milt lifetime memory aste initilize aslta tr .data madhe nhit non initilize asla tr bss madhe. 

:-if define localy it dosn't get memoey stack frame get memory data or bss like global variable (global life time ) there is scope is       localy. 
:- we can write static strage class global as well as local but no parameter becfouse actual prameter vak=lue the will sher this not good .
:- linkage gets convertted into external to internal.
:-scope is stil global limmeted its fill only.bot another fill.


*/
#include<stdio.h>
void fun1();
void fun2();
int main()
{
        int iNo;
        for(iNo=0;iNo<3;iNo++)
        fun1();
        for(iNo=0;iNo<3;iNo++)
        fun2();
        return 0;
}
void fun1()
{
        int iNo=10;
        iNo ++;
        printf("%d \n fun1 incremnt and print they can't be shaer \n",iNo);
}
void fun2()
{
        static int iNo=20;
        iNo ++;
        printf("%d static :",iNo);
        printf("\n static variables prsists (sherable ) between the function calls\n");
}
