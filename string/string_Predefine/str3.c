#include<stdio.h>

int main()
{ 

  char chChar1,chChar2,temp;
  printf("enter the first character");
  scanf("%c",&chChar1);


  printf("enter the 2nd character");
  scanf("%c%c",&chChar2,&temp);
  
  printf("first char is %c\n",chChar1);
  printf("2nd  char %c",chChar2);
  return 0;

}
