#include<stdio.h>
#include<malloc.h>
int main()
{
        int **pPtr=NULL;
        int iRow,iCol,iCounter1,iCounter2;
        
        printf("Enter a Row and col \t:");
        scanf("%d %d",&iRow,&iCol);

        pPtr=(int **)malloc(iRow*(sizeof(int *)));
        if(pPtr==NULL)
        {
                printf("Memory Allocation is Faild \t:");
                return -1;
        }
        for(iCounter1=0;iCounter1<iRow;iCounter1 ++)
        {        
                pPtr[iCounter1]=(int *)malloc(iCol*sizeof(int));
		  if(NULL==pPtr[iCounter1])
		{
			printf("Memory allocation failed");
			return -1;
		}
              
                for(iCounter2 = 0 ; iCounter2 < iCol ; iCounter2 ++)
                {
                        printf("\nThis is index [%d][%d] Number for Element & Also Enter Element \t:",iCounter1,iCounter2);	
                        scanf("%d",&pPtr[iCounter1][iCounter2]);
                }               
        }
         for(iCounter1=0; iCounter1 < iRow ; iCounter1++)
         {
               for(iCounter2=0; iCounter2 <iCol ; iCounter2 ++)
                {
                        printf("[%d] [%d] %d\t",iCounter1,iCounter2,pPtr[iCounter1][iCounter2]);
                }
                printf("\n");
        }
	for(iCounter1=0;iCounter1<iRow;iCounter1++)
	{
		 free(pPtr[iCounter1]);
		 pPtr[iCounter1]=NULL;
	}

	free(pPtr);
	pPtr=NULL;
	return 0;
}
