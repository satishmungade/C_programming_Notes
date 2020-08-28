//Structure object comparigion just simple type
#include<stdio.h>

struct demo
{
   int iNo;
   char chChar;
};
int main()
{
     struct demo obj1,obj2;
   
    printf("Enter the value of 1st obj1\t");
    scanf("%d%c",&obj1.iNo,&obj1.chChar);
   
   printf("Enter the value of 2nd obj2\t");
   scanf("%d%c",&obj2.iNo,&obj2.chChar);

  
   
  if(obj1.iNo==obj2.iNo && obj1.chChar==obj2.chChar)
  
     printf("object Are Equal\n");
   else
      printf(" object is Not Equal\n");
  
   
  
   return 0;
}

