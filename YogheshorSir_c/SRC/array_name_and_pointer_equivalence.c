#include <stdio.h> 
#include <stdlib.h> 

int A[5]; 	// A[i]
int *p; 	// *p,  *(p+k) 

void f(); 

int main(){
	// Array is used as if it were a pointer 
	int i; 
	for(i = 0; i < 5; ++i)
		*(A + i) = (i+1) * 100; 

	p = A; 

	/* pointer is used as if it were an array name */ 
	for(i = 0; i < 5; ++i)
		printf("p[%d]:%d\n", i, p[i]); 
}

void f(){
	int B[5]; 
	int *pB; 
	int i; 

	for(i = 0; i < 5; ++i)
		B[i] = (i+1) * 100; 				// array is used as array 

	pB = B; 

	for(i = 0; i < 5; ++i)
		printf("*(p+%d_:%d\n", i, *(p+i)); // pointer is used as pointer 

}