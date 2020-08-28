#include<stdio.h>
#include<string.h>
char stack[100];
int top = -1;
void push (char);
int pop();
int Experation_Ans();
int main()
{
        int iCounter,iNo;
        char Chchar[100];
        printf("Enter a Experation \t:");
        scanf("%s",Chchar);
        for(iCounter=0;iCounter < strlen(Chchar);iCounter ++ )
        {
                if(Chchar[iCounter]=='(' || Chchar[iCounter]=='{' || Chchar[iCounter]=='[')
                { 
                     push(Chchar[iCounter]);
                    
                }
        
               if(Chchar[iCounter]==')' ||Chchar[iCounter]=='}' || Chchar[iCounter]==']')
                 { 
                     pop();
                     
                }       
        }        
        Experation_Ans();        
       return 0;
            
}


void push(char Chchar)
        
{
        stack[top]==Chchar;
        top ++;
        
}      
int pop()
{
        top --;        
}
int Experation_Ans()
{  
        if(top== -1)
                printf("\nExperation Are Equal");
        else
                printf("\nExperation Are Not Equal");
        return 0;
}
       
               
