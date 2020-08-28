#include<stdio.h>
int fact(int );
int main()
{
        int iNo,iAns;
        printf("Enter a Number\t");
        scanf("%d",&iNo);
        iAns=fact(iNo);
        printf("Factorial  is %d\t",iAns);
        return 0;
}
int fact(int iNo)
{
        if(iNo == 1)
                return 1;
        else
                return iNo * fact(iNo - 1);
}
