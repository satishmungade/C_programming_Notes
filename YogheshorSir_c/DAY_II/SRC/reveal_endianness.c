#include <stdio.h> 
#include <stdlib.h> 

int n = 0xa0b0c0d; 
// BIG 
// [	][	 ][	  ][   ] :
// x 	  +1   +2   +3 
// 0xA 
// LITTLE 
// [	][	 ][	  ][   ] :
// x 	  +1   +2   +3 
// 0xD 

int main(){
	
	unsigned char uc = (unsigned char)n; 
	if(uc == 0xd)
		puts("Little endian"); 
	else if(uc == 0xa)
		puts("Big endian"); 
	else
		puts("Strange machine"); 


	return 0; 
}