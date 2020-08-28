#include<stdio.h>
int main()
{ 
        int iNo =10;
        int *p=&iNo;
        
        int **q=&p;
        int ***r=&q;
        int ****s=&r;
        int *****x=&s;
        int ******y=&x;
        int *******z=&x;
        
        printf("%d\n",iNo);
        printf("%d\n",p);       
        printf("%d\n",z);
        printf("%d\n",*p);
        printf("%d\n",**q);
        printf("%d\n",**x);
        printf("%d\n",****z);
   //     printf("%d\n",*****s);
        printf("%d\n",*y);
        
         printf("%d\n",&(*y));
         printf("%d\n",*****z);
         printf("%d\n",(*p));
        
        return 0;
}
