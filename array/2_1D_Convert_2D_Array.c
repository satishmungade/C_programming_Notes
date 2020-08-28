#include<stdio.h>
int main()
{
        int a[7]={10,20,30,40,50,60,70};
        int b[8]={100,200,300,400,500,600,700,800};
        int c[4][4];
        int i,j;
        for(i=0;i<8;i++)
        {
                for(j=1;j<8;j++)
                {
                        c[i][j]=a[i]+b[j];
                        printf("%d",c[i][j]);
                }
        

         }
}
