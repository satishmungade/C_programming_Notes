/* THIS IS A NOTES FILE */ 

#include <stdio.h> 
#include <stdlib.h> 

int A[3][5]; 

A is array 3 of array 5 of int. 

int	  A[3]		[5]


TE(&A[0])
TE(&A[1])
TE(&A[2])

A : [	|	|	|	|	][	|	|	|	|	][	|	|	|	|	]
			A[0]				A[1]				A[2]
	int 			[5]   int 			 [5]   int 			   [5]

Let p be a pointer to array A. 

p = A; // VE & TE of A is &A[0] 	int(*)[5]; 

int (*p)[5]; 

int main(){
	p = A; 
	p --> &A[0]
	p+1 	--> &A[1]
	p+2 	--> &A[2]
}

p + 1 = p + 1 * sizeof(pointer type) = p + 1 * sizeof(int [5]) = p + 5 * sizeof(int) = p + 5 * 4 = p + 20 


int A[3][5]; 

int (*p)[5]; 

A 	&A[0]

&A 

V(A) == V(&A) == V(&A[0]) == BASE ADDRESS OF ARRAY 

A 			TYPE 		int 	[N]
&A  		TYPE 		int	(*)	[N]
&A[0] 		TYPE 		T* 				where T is type of array element 


TYPE(A) == TYPE(&A[0])


