#include<stdio.h>
int main()
{ 
        int iNo =10;
        int *p=&iNo;

        printf("%d\n",iNo);
        printf("%d\n",&iNo);

        printf("%d\n",p);
        printf("%d\n",&p);
        
        //printf("%d",*iNo);
        printf("%d\n",*p);
        
        return 0;
} 

        
