#include<stdio.h>
int main()
{
        int Arr[50][50][50];
        int iPlan,iRow,iCol,iCounter1,iCounter2,iCounter3;
        printf("Enter a How many Plan you Want \t:");
        scanf("%d",&iPlan);
        printf("Enter a Row & Col 3D Array \t:");
        scanf("%d%d",&iRow,&iCol);
       
        for(iCounter1=0;iCounter1<iPlan; iCounter1 ++)
        {
                for(iCounter2=0; iCounter2 < iRow ; iCounter2++)
                {
                        for(iCounter3=0; iCounter3 <iCol ; iCounter3 ++)
                        {
                           printf("This is index NO [%d][%d][%d]Enter the Element\t:",iCounter1,iCounter2,iCounter3);
                           scanf("%d",&Arr[iCounter1][iCounter2][iCounter3]);
                        }
                }
        }
        for(iCounter1=0;iCounter1<iPlan; iCounter1 ++)
        {
               for(iCounter2=0; iCounter2 < iRow ; iCounter2++)
                 {
                    for(iCounter3=0; iCounter3 <iCol ; iCounter3 ++)
                        {
                                printf("[%d] [%d] [%d]  %d\t",iCounter1,iCounter2,iCounter3,Arr[iCounter1][iCounter2][iCounter3]);
                        }
                        printf("\n");
                }
        }      
 }
