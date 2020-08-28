//same structure union point accesing and inilization object creation .
//1.all members shere same memory.
//2.hense only one member is active at time for current output.
//3.so while calculating size of union largest size of member is consider as union size.
// 4.we can not  inilitize member inside of structure or union bcoz te fakt declaration tyala memory  ch nhi mg tu kas ky lnitize karu sakto br
 #include<stdio.h>
union demo
{
        int iNo;
        int iNo1;
        int iNo2;
}obj;
int main()
{  
        
       printf("%d\n%d\n%d\n",obj.iNo,obj.iNo1,obj.iNo2); 
     
        obj.iNo=10; // Assing member by member method
        printf("%d\n%d\n%d\n",obj.iNo,obj.iNo1,obj.iNo2); //accessing value by member by member.
        
         obj.iNo1=20;
         printf("%d\n%d\n%d\n",obj.iNo,obj.iNo1,obj.iNo2);

         obj.iNo2=30;
         printf("%d\n%d\n%d\n",obj.iNo,obj.iNo1,obj.iNo2);
        
        return 0;
} 


/*
100 to 104 ka motha ya member ha 4 ch mnun 4byte  memoery allocate zali mg tich ti memoery shear kartat.


output:
0
0
0     garabage ka nhi karan obj ha globaly ahe mnun 
10
10 first 10 inilization mg tich value saglde shear zali.
10
20 mg 20 pn tasch
20
20
30
30 mg 30 pn tasch.  haech union propuff at time one member active.
30
*/
