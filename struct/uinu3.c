//3. union inside union.
#include<stdio.h>

/*
union outer
{
        int iNo;
        float fNo;
        union inner
        {
                int iNo1;
                float fNo2;
        }iobj;
}Oobj;
int main()
{
   printf("%ld\n",sizeof(union outer));
}
1 to 4 memory is allocated all memory are shear ino,fno,iNo1,fNo2. */

/*
union outer
{
        int iNo;
        double dd;
        union inner
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
//1 to 8 memory is allocated all memory are shear memory ino,dd,c,ch,cha,dc */

union outer
{
        int iNo;
        float f;
        union inner
        {
                char c;
                char ch;
                
                       
        }iobj[5];
  
}Oobj;
int main()
{
   printf("%ld\n",sizeof(union outer));
}
