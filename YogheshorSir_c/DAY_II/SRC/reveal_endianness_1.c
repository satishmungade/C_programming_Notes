#include <stdio.h> 
#include <stdlib.h> 

int n = 0xa0b0c0d; 

int main(){
	if(*(char*)&n == 0xd)
		puts("Little endian"); 
	else if(*(char*)&n == 0xa)
		puts("Big endian"); 
	else
		puts("Strange machine"); 
	return 0; 
}

/* 
*(char*)&n

n : int 
&n : int*

(char*)&n --> Assume the type of &n to be pointer to char

*(char*)&n 

Dereference operator will be evaluated in the context char*
and therefore only 1 byte or base address value will be read 

compare it with 0xd --> if equal --> Little 
else if compare it with 0xa --> if equal --> Big 
else --> control flow should never come here 

*/ 
 = *p 
 *p = ; *(char*)(&n)