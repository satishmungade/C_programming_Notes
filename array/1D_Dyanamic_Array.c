#include<stdio.h>
#include<malloc.h>
int main()
{
        int iNo,iCounter,
        int *pPtr=NULL;
        printf("Enter How many Element you want :\t");
        scanf("%d",&iNo);
        pPtr=(int *)malloc(iNo*sizeof(int));
        if(NULL==pPtr)
        {
                printf("Memory Allocation is faild");
                return -1;
        }
        printf("Enter the Element for 1D Array :");
        for(iCounter=0;iCounter <iNo;iCounter ++)
         {
               printf("\nThis is index [%d] Number for Element\t:",iCounter);	
               scanf("%d",&pPtr[iCounter]);
         }
        for(iCounter=0;iCounter < iNo; iCounter ++)
        {
                printf("[%d]%d\t ",iCounter,pPtr[iCounter]);
        } 
        free(pPtr);
        pPtr=NULL;
        return 0;
}
