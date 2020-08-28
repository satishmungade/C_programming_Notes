//4. structure inside union.
#include<stdio.h>

/*
union outer
{
        int iNo;
        float fNo;
        struct inner
        {
                int iNo1;
                float fNo2;
        }iobj;
}Oobj;
int main()
{
   printf("%ld\n",sizeof(union outer));
}
inter structure size is 8 and outer strcturch cha to member ch zal mg int float struct inner motho ha struct inner ahe mnun tyachisize in outer union lagat ahe karan tyala mothi valich pahije so size is 8. */

/*
union outer
{
        
        double dd;//8
        struct inner
        {
                int i;
                float f;
                               
        }iobj,iobj1; //8 //8
   double dc; //8
}Oobj;
int main()
{
   printf("%ld\n",sizeof(union outer));
} 
yaa matha 8 ahe so union size is 8 they are shear */

union outer
{
        int iNo;
        double dd;
        struct inner
        {
                char c;
                char ch;
                char cha;
                       
        }iobj,iobj1;
   double dc;
}Oobj;
int main()
{
   printf("%ld\n",sizeof(union outer));
} 
yaa matha 8 ahe so union size is 8 they are shear */
