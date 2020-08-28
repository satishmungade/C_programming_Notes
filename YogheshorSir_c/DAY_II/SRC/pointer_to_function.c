#include <stdio.h>
#include <stdlib.h> 
#include <assert.h>

int my_add(int, int); 
int my_sub(int, int); 
int my_mul(int, int); 

int main(){
	int m, n; 
	int choice; 
	int rs; 

	int (*a_fun[3])(int, int); // !!

	// !! 
	a_fun[0] = my_add; 
	a_fun[1] = my_sub; 
	a_fun[2] = my_mul; 
	// !!

	printf("Enter m:"); 
	scanf("%d", &m); 

	printf("Enter n:"); 
	scanf("%d", &n); 

	printf("Enter a choice:[1]Addition [2]Subtraction [3]Multiplication:"); 
	scanf("%d", &choice); 

	assert(choice >= 1 && choice <= 3); 

	// !!
	rs = a_fun[choice - 1](m, n); 
	printf("Result:%d\n", rs); 

	return (0); 
}


int my_add(int n1, int n2){
	return n1+n2; 
}

int my_sub(int n1, int n2){
	return n1 - n2; 
}

int my_mul(int n1, int n2){
	return n1*n2; 
}