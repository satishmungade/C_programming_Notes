#include <stdio.h> 
#include <stdlib.h> 

/* AIM : is to calculate offsets of a, b, c WITHOUT 
		 allocating a single instance of struct A
*/ 

#define OFFSET_OF(type_name, member_name)	((unsigned long int)&(((type_name*)0)->member_name))

struct A{
	int a; 	
	char b; 
	float c; 
}; 


struct B{
	int p; 
	char q[28]; 
	double r; 
}; 

int main(){
	struct A x;
	struct A* pA = NULL;  
	unsigned long int off_a, off_b, off_c;	

	off_a = (unsigned long int)((char*)&x.a - (unsigned long int)&x); // offset of a 
	off_b = (unsigned long int)((char*)&x.b - (unsigned long int)&x); // offset of b 
	off_c = (unsigned long int)((char*)&x.c - (unsigned long int)&x); // offset of c 

	printf("off_a = %lu, off_b = %lu, off_c = %lu\n", off_a, off_b, off_c); 

	
	off_a = 0; 
	off_b = 0; 
	off_c = 0; 

	off_a = (unsigned long int)(&pA->a); 
	off_b = (unsigned long int)(&pA->b);
	off_c = (unsigned long int)(&pA->c); 

	printf("off_a = %lu, off_b = %lu, off_c = %lu\n", off_a, off_b, off_c); 

	printf("WITHOUT MEMORY ALLOCATION:offset of a in struct A = %lu\n", (unsigned long int)&(((struct A*)0)->a)); 
	printf("WITHOUT MEMORY ALLOCATION:offset of b in struct A = %lu\n", (unsigned long int)&(((struct A*)0)->b));
	printf("WITHOUT MEMORY ALLOCATION:offset of c in struct A = %lu\n", (unsigned long int)&(((struct A*)0)->c));

	printf("USING MACRO:OFFSET_OF(struct A, a) = %llu\n", OFFSET_OF(struct A, a )); 
	printf("USING MACRO:OFFSET_OF(struct A, b) = %llu\n", OFFSET_OF(struct A, b)); 
	printf("USING MACRO:OFFSET_OF(struct A, c ) = %llu\n", OFFSET_OF(struct A, c)); 
	printf("USING MACRO:OFFSET_OF(struct B, p) = %llu\n", OFFSET_OF(struct B, p)); 
	printf("USING MACRO:OFFSET_OF(struct B, q) = %llu\n", OFFSET_OF(struct B, q)); 
	printf("USING MACRO:OFFSET_OF(struct B, r) = %llu\n", OFFSET_OF(struct B, r)); 

	return 0; 
}

(unsigned long int)&(((struct A*)0)->c)
(unsigned long int)&(((struct B*)0)->r)

0 : struct B* 

&0->r (32)