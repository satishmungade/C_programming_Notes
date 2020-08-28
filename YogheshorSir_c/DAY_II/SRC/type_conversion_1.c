#include <stdio.h> 
#include <stdlib.h> 

struct A{
	int a; 
	char b; 
	float c; 
}inA; 

struct B{
	char a[10]; 
	double d; 
}; 

int main(){
	char c = 'A'; 
	int n = c; /* implicit : ok */ 
	double d = 34543535575765.3535353535435; 
	int m = d; /* implicit : warning */ 
	struct B* pB = NULL; 
	int Arr[10]; 


	printf("n = %d m = %d\n", n, m); 



	m = d * 100.42; 

	pB = &inA; 	/* Implicit type conversion from rhs to lhs WILL NOT BE performed. 
					Compile time error
				*/ 	

	pB = &Arr;  

	return (0); 
}