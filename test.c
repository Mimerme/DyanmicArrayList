#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "arraylist.h"

int main(){
	printf("Hello World!\n");
	int first = 5;

	struct Arraylist arraylist;
	arraylist.type_size = sizeof(int);
	new_array(&arraylist);
	*((int*)arraylist.ptr) = first;
	printf("Val : %d", *((int*)arraylist.ptr));	
	arraylist.count = 2;

	resize_array(&arraylist);

	*(((int*)arraylist.ptr)+1) = 6;
	printf("Val : %d", *((int*)arraylist.ptr+1));
	destroy(&arraylist);
	check_arrs();	
	return 0;
}
