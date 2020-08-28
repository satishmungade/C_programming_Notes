//Nested structure:- nested mense somthing somthing inside somthing we can write.
//1. structure inside structure.
#include<stdio.h>

/*1.
struct outer
{
        int iNo;
        float fNo;
        struct inner
        {
                int iNo1;
                float fNo2;
        };
}Oobj;
int main()
{
   printf("%ld\n",sizeof(struct outer));
}
//without inner object create sizeof structure is 8 for linux complier... but same this program use vishul studio than 16 will be output al ast ka tithe viual studio inner la pn outer ch concider karto mnun.
*/

/*
2.
struct outer
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
   printf("%ld\n",sizeof(struct outer));
} 

//this will be size of structure is 16 inner outer 2 object are creted.  */

/* 3.
struct outer
{
        int iNo;
        char ch;
        struct inner
        {
                char ch1;
                char ch2;
        }iobj1,iobj2;
}iobj;
int main()
{
   printf("%ld\n",sizeof(struct outer));
}
byte size alignement(turbo c compiler) size  of structure is 9 but word size alignment (linux compiler ) is structure is 12. word size alignment manje che jo motho member tya nusar to size consider karto mg atta motha ha interger ahe tya nusar block is condier.  */
/*
4.
struct outer
{
        int iNo;
        double dNo;
        struct inner
        {
                int iNo;
                float fNo;
        }iobj1[2];
}iobj;
int main()
{
   printf("%ld\n",sizeof(struct outer));
}
byte size alignment (turbo c compiler) size  of structure is 28 but word size alignment (linux compiler ) is structure is 32. word size alignment manjech jo motho member tya nusar to size consider karto mg atta motha ha double ahe tya nusar block is condier. */
