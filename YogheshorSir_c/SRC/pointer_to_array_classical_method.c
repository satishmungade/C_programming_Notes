#include <stdio.h> 
#include <stdlib.h> 

int A[5]; /* A is array 5 of integers. allocate 20 bytes. zero them out */ // S1 
int (*p)[5]; 	/* p is pointer to array 5 of integers */ 	// S2 

/* Array name itself is an address of array. 
	VALUE WISE - CORRECT 
	TYPEWISE -> CHUK CHUK CHUK CHUK CHUK 
*/ 

float B[5]; // 1.1, 2.2, 3.3, 4.4, 5.5 

void f(float(*)[5]); 	// S5

int main(){
	int i; 

	p = &A; 	// S3

	printf("Array A before assignment:\n"); 
	for(i = 0; i < 5; ++i)
		printf("(*p)[%d]:%d\n", i, (*p)[i]); 	// S4

	for(i = 0; i < 5; ++i)
		(*p)[i] = (i+1) * 100; 

	printf("Array A after assignment:\n"); 
	for(i = 0; i < 5; ++i)
		printf("(*p)[%d]:%d\n", i, (*p)[i]); 

	printf("Array B before function call:\n"); 
	for(i = 0; i < 5; ++i)
		printf("B[%d]:%f\n", i, B[i]); 

	f(&B); 	// S5

	printf("Array B after function call:\n"); 
	for(i = 0; i < 5; ++i)
		printf("B[%d]:%f\n", i, B[i]); 

	return 0; 
}

// S5
void f(float(*pf)[5]){
	int i; 

	for(i = 0; i < 5; ++i)
		(*pf)[i] = (((float)(i*10 + 1)) / 10); 
}


/* 
	if n is integer then &n must be stored in pointer to integer 
	if f is float then &f must be stroed in pointer to float 
	if int A[5] is array five of integers then &A must be stroed int pointer to array five of integer 
	
	int n; 
	int *pi; 
	float f; 
	float *fp; 

	int A[5]; 
	int (*p)[5]; 

	pi = &n; 
	pf = &f; 
	p = &A; 
*/ 

/* 
int*(*p)[5]; 

int *A[5]; 

	int* (*p) [5]; 

	int (*p)[5]; 
	^
	|
	|
	____ Type of array element (and not type of pointer )
*/ 