#include<stdio.h>
#include <stdlib.h>
#define MAX 200
int stack[MAX];
int top= -1;
void push(int iNo);
int pop();
int is_Full();
int is_Empty();
void display();
int main()
{
        int iNo,iChoice;
        while(1)
        {
                printf("\n1.push : \n2.pop : \n3.Display : \n4.Exit :" );
                printf("\n\t Enter your Choice \t:");
                scanf("%d",&iChoice);
         switch (iChoice)
                {
                        case 1:  
                                while(1)
                                { 
                                  printf("\n\t Enter a Element to push \t:");
                                  scanf("%d",&iNo);    
                                  push(iNo);
                                  printf("\n\tIF You PUSH ELEMENT AGEIN PRESS NON ZERO OR No PRESS ZERO \t :");
                                  scanf("%d",&iNo);
                                  if(iNo !=0)
                                        continue;
                                  else
                                       break;
                                }
                                display();
                                 break;
                        case 2:
                                 printf("\n\t Your Poped Element is [%d]\n",pop());
                                 break;
                        case 3:
                                display();
                                break;
			case 4:
                                    exit(1) ;
            	       default:
			        printf("\n\t ! Your choice is Wrong !:-\n"); 

                }
                            if(iChoice == 4)
                               break;            
       }
        return 0;
}
void push(int iNo)
{
        if(is_Full())
           {
               printf("Stack is overflow");
                return;
            }
        stack[++ top]=iNo;
}
int pop()
{
        if(is_Empty ())
             {
                puts("\n\tStack is Empty "); 
                return -1;
              }
        return stack[top --];
}
int is_Full()
{
        if(top == MAX -1)
                return 1;
        return 0;
}
int is_Empty()
{
        if(top == -1)
               return 1;
         return 0;
}
void display()
{
        int iNo;
        for(iNo=0;iNo<=top;iNo++)
                printf("YOUR STACK Element is [%d]\n",stack[iNo]);
 } 
