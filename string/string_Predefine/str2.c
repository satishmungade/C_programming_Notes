#include<stdio.h>
int main()
{
  char SZstr[]="Hello";
  char *pSZstr="good";

  printf("%s",SZstr);
  printf("%s",pSZstr);
  printf("%s","night");
  

  printf(SZstr);///without using format secifier

 printf("%s%s%s",SZstr,pSZstr,"night");
return 0;
}

