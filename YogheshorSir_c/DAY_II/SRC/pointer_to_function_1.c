#include <stdio.h>
#include <stdlib.h> 
#include <assert.h>

// FROM HEADER FILE OF LIBRARY - START 
#define BUBBLE_SORT 1 
#define SELECTION_SORT 2 
#define INSERTION_SORT 3
#define MERGE_SORT 4
#define QUICK_SORT 5 
#define HEAP_SORT 6
#define RADIX_SORT 7 
#define BUCKET_SORT 8 
#define SHELL_SORT 9
#define COUNTING_SORT 10

#define SUCCESS 1 

int(*get_sort(int))(int*, int); 

typedef int(*sort_function_t)(int*, int); 

int bubble_sort(int*,int); 
int selection_sort(int*,int); 
int insertion_sort(int*,int); 
int merge_sort(int*,int); 
int quick_sort(int*,int); 
int heap_sort(int*,int); 
int radix_sort(int*,int); 
int bucket_sort(int*,int); 
int shell_sort(int*,int); 
int counting_sort(int*,int); 
// FROM HEADER OF LIBRARY END 

int main(){
	int a[] = {100, 34, 4, 363, 47, 4584, 3, 374, 2, 47}; 
	int size = 10; 

	int (*pfn_merge)(int*, int); 
	int (*pfn_bucket)(int*, int); 
	
	pfn_merge = get_sort(MERGE_SORT); 
	pfn_merge(a, 10); 

	pfn_bucket = get_sort(BUCKET_SORT); 
	pfn_bucket(a, 10); 

	sort_function_t pfn_quick, pfn_shell; 

	pfn_quick = get_sort(QUICK_SORT); 
	pfn_shell = get_sort(SHELL_SORT); 

	pfn_quick(a, 10); 
	pfn_shell(a, 10); 
	
	return 0; 
}


// THIS IS A LIBRARY ITSELF : YOU WILL LINK IT 

int (*get_sort(int sort_number))(int*, int){
	// declare an array 10 of pointer to function 
	// accepting int*, int and returning int 

	static int (*a_fun[10])(int*,int) = { 
		bubble_sort, selection_sort, insertion_sort, 
		merge_sort, quick_sort, heap_sort, 
		radix_sort, bucket_sort, shell_sort, 
		counting_sort 
	}; 

	assert(sort_number >= 1 && sort_number <= 10); 

	return a_fun[sort_number-1]; 
}

int bubble_sort(int *a, int n){
	puts("In bubble_sort"); 
	return SUCCESS; 
}

int selection_sort(int *a, int n){
	puts("In selection_sort"); 
	return SUCCESS; 
}

int insertion_sort(int *a, int n){
	puts("In insertion_sort"); 
	return SUCCESS; 
}

int merge_sort(int *a, int n){
	puts("In merge_sort"); 
	return SUCCESS; 
}

int quick_sort(int *a, int n){
	puts("In quick_sort"); 
	return SUCCESS; 
}

int heap_sort(int *a, int n){
	puts("In heap_sort"); 
	return SUCCESS; 
}

int radix_sort(int *a, int n){
	puts("In radix_sort"); 
	return SUCCESS; 
}

int bucket_sort(int *a, int n){
	puts("In bucket_sort"); 
	return SUCCESS; 
}

int shell_sort(int *a, int n){
	puts("In shell_sort"); 
	return SUCCESS; 
}

int counting_sort(int *a, int n){
	puts("In counting_sort"); 
	return SUCCESS; 
}
