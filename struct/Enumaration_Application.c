#include<stdio.h>
enum SWITCH{off,on};
enum CONNECTION{series=1,parrallel=2};
int main()
{
   
   enum CONNECTION ckt;
   enum SWITCH s1,s2;

   printf("enter connection you want :(series=1,parrallel=2)");
   scanf("%d",&ckt);
   
   printf("enter the two switches :(on=1,off=0)");
   scanf("%d%d",&s1,&s2);
   
  if(ckt== series)  
  {
	if(s1==on && s2==on)
      printf("Bulb will glow");
    else
      printf("Bulb will not glow");
  }
  else
   {
     if(s1==on || s2==on)
        printf("Bulb will glow");
     else
        printf("Blub will not glow");
   }
 
  return 0;
}

