#include<stdio.h>
#include<string.h>

int main(int argc,char *argv[])
 {
 	int iCounter;
        int iSum;
    
         for(iCounter=0;iCounter<argc;iCounter++)
         puts(argv[iCounter]);
  
        iSum=atoi(argv[1])+atoi(argv[2]); //ascii to binary value.
         printf("%d",iSum);
 
   return 0;
}
