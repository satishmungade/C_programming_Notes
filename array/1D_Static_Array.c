#include<stdio.h>
int main()
{
        int aar[50];
        int iNo,iCounter;

        printf("Enter How many Element you want :\t");
        scanf("%d",&iNo);

        printf("Enter the Element for 1D Array :");
        for(iCounter=0;iCounter <iNo;iCounter ++)
         {
               printf("\nThis is index [%d] Number for Element\t:",iCounter);	
               scanf("%d",&aar[iCounter]);
          }
        for(iCounter=0;iCounter < iNo; iCounter ++)
        {
                printf("[%d]%d\t ",iCounter,aar[iCounter]);
        }
}

