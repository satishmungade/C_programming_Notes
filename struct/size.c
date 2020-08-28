
#include<stdio.h>
/*struct demo
{
     int iNo;
     char chChar;
     //float fNo;
     //double dNo;
}obj; 

int main()
{
   printf("%ld\n",sizeof(struct demo));
}
*/
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
   printf("%ld\n",sizeof(union outer)); //8
}

