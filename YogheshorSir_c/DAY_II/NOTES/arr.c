#include <stdio.h> 
#include <stdlib.h>

int A[3][5]; 

int main(){
	int (*p)[5]; 
	int i; 

	p = A; 
	for(i = 0; i < 3; ++i)
		printf("p+%d:%p\n", i, p+i);  

	return 0; 
}