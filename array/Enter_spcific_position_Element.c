#include<stdio.h>
#define MAX_SIZE 100 
int main()
{
        int aar[MAX_SIZE];
         int iNo,iCounter,iNo1,iPos;
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
                printf("\n[%d] %d\t ",iCounter,aar[iCounter]);
        }
        printf("\n\n\nEnter the Element which to store \t ");
        scanf("%d",&iNo1);
        printf("\n\n\nEnter the Position \t");
        scanf("%d",&iPos);
        if(iPos > iNo +1 || iPos <= 0)
                {
                        printf("\nInVolid position enter position between 1 to %d",iNo);
                
                }
        else
             {            
                for(iCounter=iNo;iNo>=iPos ;--iNo)
                {
                        aar[iCounter]=aar[iCounter - 1];
                }
                aar[iPos-1]=iNo1;
                iNo ++;
                printf("\n After position inserted :\t");
                for(iCounter=0;iCounter < iNo; iCounter ++)
                {
                        printf("%d\t ",aar[iCounter]);
                }
              }
        for(iCounter=0;iCounter < iNo; iCounter ++)
        {
                printf("\n[%d] %d\t ",iCounter,aar[iCounter]);
        }
        return 0;
}  
