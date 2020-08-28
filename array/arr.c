#include<stdio.h>
int main()
{
    


    int arr[]={10,20,30,40,50};
       

         printf("%d\n",arr);     // 2061922400
        printf("%d\n",&arr);     // 2061922400

        printf("%d\n",arr[0]);     // 10 
        printf("%d\n",arr+1);    // 2061922404

        printf("%d\n",arr[1]);    //20     
        printf("%d\n",&arr+1);   //2061922420

        printf("%d\n",arr[2]);        // 30
         printf("%d\n",&arr[2]);  //2061922408


        printf("%d\n",&arr[2]+1); // 2061922412
        printf("%d\n",arr [3]); // 40
        return 0;        
        
}







