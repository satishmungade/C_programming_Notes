#include <stdio.h> 
#include <stdlib.h>
#include <string.h> 

void fill_array(int (*parr)[5], int n); 

int main(){
	int A[4][5]; 
	int i, j; 

	memset(A, 0, 5*4*sizeof(int)); 
	printf("Before fill function:\n");  

	for(i = 0; i < 4; ++i)
		for(j = 0; j < 5; ++j)
			printf("A[%d][%d]:%d\n", i, j, A[i][j]); 

	fill_array(A, 4); 

	printf("After fill function:\n"); 
	for(i = 0; i < 4; ++i)
		for(j = 0; j < 5; ++j)
			printf("A[%d][%d]:%d\n", i, j, A[i][j]); 

	return 0; 
}

void fill_array(int (*p)[5], int n){
	int i, j; 

	for(i = 0; i < n; ++i)
		for(j = 0; j < 5; ++j)
			p[i][j] = i * j; 
}

/* 
int A[5][6][7]; 

int (*p)[6][7]; 

p = A; 

for(i = 0; i < 5; ++i)
	for(j = 0; j < 6; ++j)
		for(k = 0; k < 7; ++k)
			p[i][j][k] = i+j+k; 

*/ 

/* 

int A[] = {10, 20, 30, 40, 50}; // array of 5 integers; 
int A[5]; 
int A[5] = {10, 20}; // index 0->10, index 1->20, index 2,3,4->0 

int A[]; // WRONG 

int A[3][5] = {{0,1,2,3,4}, {5,6,7,8,9}}; // A[2][0] to A[2][4] -> 0 

int A[][5] = {{1,2,3,4,5}, {6,7,8,9,10}, {11,12,13,14, 15}, {16,17,18,19}}; // A[4][5] 
int A[][5]; // WRONG 

*(*(p+i) + j)
*/ 