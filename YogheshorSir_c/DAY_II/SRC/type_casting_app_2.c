#include <stdio.h> 
#include <stdlib.h> 


int main(){
	unsigned long long n; 
	printf("I:n = %llu\n", n); 
	*(char*)&n = 0xff;  
	printf("1:n = %llx\n", n);
	*(short*)((char*)&n + 1) = 0xffff; 
	printf("2:n = %llx\n", n);
	*(int*)((char*)&n + 3) = 0xffffffff; 
	printf("3:n = %llx\n", n); 
	*(char*)((char*)&n + 7) = 0xff; 
	printf("4:n = %llx\n", n); 
	return 0; 
}

/* 
n : ull
&n : ull*

*(&n) : *(ull*) = ull

// [] [] [] [] [] [] [] [] 
*(char*)&n = 0xff; 
// [ff] [] [] [] [] [] [] [] 

*(short*)((char*)&n + 1) = 0xffff; 

// [ff] [ff] [ff] [] [] [] [] [] 

	*(int*)((char*)&n + 3) = 0xffffffff; 

// [ff] [ff] [ff] [ff] [ff] [ff] [ff] [] 

*/ 
