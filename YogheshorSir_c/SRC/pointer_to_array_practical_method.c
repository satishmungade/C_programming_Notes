#include <stdio.h> 
#include <stdlib.h> 

void f(int *p, int size); 

int main(){
	int A[5] = {0, 0, 0, 0 ,0}; 
	int i; 

	printf("Before function call, A:"); 
	for(i = 0; i < 5; ++i){
		printf("A[%d]:%d\n", i, A[i]); 
	}

	f(A, 5); /* VE(A) = Base addr of array : is this desired ? YES! 
			 TE(A) == TE(&A[0]) == int* 
		  */ 
	printf("After function call, A:"); 
	for(i = 0; i < 5; ++i){
		printf("A[%d]:%d\n", i, A[i]); 
	}

	return 0; 
}


void f(int *p, int size){
	int i; 
	for(i = 0; i < size; ++i)
		*(p+i) = (i+1)*100; 
}

/* 
&A[k]  = Address of A + k * sizeof(typeof(Array Element))
p + k = Address in p + k * sizeof(type(pointer type))

typeof(array element) = int = type(pointer type)

address in p = Address of A. 

p + k = address in p + k * sizeof(pointer type)
      = Address of A + k * sizeof(typeof(array element))
      = &A[k]

p+k == &A[k]
*/ 
