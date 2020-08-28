#include<stdio.h>
#define MAX_SIZE 100 
int main()
{
        int aar[MAX_SIZE];
         int iNo,iCounter,iMin,iMax;
        printf("Enter the How many element you want :");
        scanf("%d",&iNo);
 
          
        printf("\nEnter the Element for 1D Array :");
        for(iCounter=0;iCounter <iNo;iCounter ++)
         {
               printf("\n\nThis is index [%d] Number for Element\t:",iCounter);	
               scanf("%d",&aar[iCounter]);
          }
        for(iCounter=0;iCounter < iNo; iCounter ++)
        {
                printf("[%d] %d\t ",iCounter,aar[iCounter]);
        }
        iMin=aar[0];
        iMax=aar[0];
        for(iCounter =0;iCounter <iNo; iCounter ++)
        {
                if(aar[iCounter] > iMax)
                  {
                       iMax=aar[iCounter];
                   }

                if(aar[iCounter] < iMin)
                {
                        iMin=aar[iCounter];
                }
        } 
         printf("\nMaximum element = %d\n", iMax);
         printf("\nMinimum element = %d\n", iMin);
        return 0;
}
