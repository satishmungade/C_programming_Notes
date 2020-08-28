/*//switch menutreeone sadhi use karach.
switch(expresion)
	{
		case case_id1:
		case case_id2;
	}
-----------------------------------------------------------------------------------------------------------------------------
rules for switch :
:-its must intigral constant.
:-break is not a syntax te user la te case jar break karchi asel tehna lihiach last pn lihachi garaj nhi as te last switch stop ch honar so . 
:-default he pn last lihan ky campsary nhi te aapn kuthe pn switch madhe lihu sakto. 
 

      swwitch (expression) true zal te case find karto aani tithun sagle executation karto break ayi aleki thabto.
      tech jar  (expression) false zal tr to default find karto mg sagle executation karto break ayi aleli thabto.


working of swtich:
:- its sreach intigral expresion in all case_id if found execution from that case.

:-if not found expression it sreach for by default label statement if found start execution from.

:- if not execution control gos out side switch.

-------------------------------------------------------------------------------------------------------------------------------

#define iNo 1;
const int iNo1=2;
int iNo=2 ;
 
switch (65)
{
		case iNo: // ALLOW
		case iNo1: // ERROR NOT COMPILE TIME CONSTANT
		case iNo2: // ERROR NOT COMPILE TIME CONSTANT
		case 'A':  // aLLOW
		case 65:   // ERROR DUPLICATION
		case 10:   // aLLOW INTIGRAL CONSTANT
		case 2.5:  //  ITS NOT INTIGRAL CONSTANT
		case "hello": // ITS NOT INTIGRAL CONSTANT
		case 10+20:  // aLLOW IS EXPRESION THIS SOLVE 
		default: // ALLOW 
		default:// ERROE DUPLICATION 
}
		
*/
#include<stdio.h>
int main()
{
	char chChar;
	printf("Enter the  characters\t");
	scanf("%c",&chChar);

	switch (chChar)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
				printf("this character is small leter vowel ");
		break;

		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
				printf("this character is capital leter vowel");
	    break;
		default:
				printf("this charchter is consonants")	;
	}
  return 0;
}
