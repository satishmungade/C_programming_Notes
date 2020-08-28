#include<stdio.h>
int main()
{
        int n=5,n1=6,s;
        s=n|n1;
        printf("%d\n",s);
        s=n&n1;
        printf("%d\n",s);
        s=n^n1;
        printf("%d\n",s);
        s=!n;
        printf("%d",s);
}
