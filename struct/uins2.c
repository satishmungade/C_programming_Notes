//2. union inside structure.
#include<stdio.h>

/*
struct outer
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
   printf("%ld\n",sizeof(struct outer));
}
//ethe union madhel ekch member consider hoto jo motha asel to inner union chi size is 4 and outer structure chi size 8 mnun total size is 12.  .................*/

/*
struct outer
{
        int iNo;
        
        union inner
        {
                char ch;
                char ch1;
        }iobj,iobj1;
        double dd;
}Oobj;
int main()
{
   printf("%ld\n",sizeof(struct outer));
}
ethe union madhel ekch member consider hoto jo motha asel to inner union che 2n object create ahet mnun 1 bit 1bit ahe 2n bit zale mg outer  structure madhe double and int ahet tyache 12 hote size by consider byte size alignemnt mg atta world size compiler ahe mnun int pn 8ch block condier karto tya 8 madhe int pn inner che 2n object chi size ahe tya madhe 2 bite baki ahe pn tya madhe double bast nhi mnun navin ek ch block create hoto tya total 8 bastat mg  total size is 16 pn use 14 hote mg tya chya complier pading add karto. */

struct outer
{
          double dd;;
        
        union inner
        {
                  double d;
                  double dd;
        }iobj[3];
      
}Oobj;
int main()
{
   printf("%ld\n",sizeof(struct outer));
}  
ethe inner chi size is 24 (8+8+8) karan eth array pn use ahe so outer ch ek member tyache 8 muan 32 .
