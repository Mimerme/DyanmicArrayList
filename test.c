#include <stdlib.h>
#include<stdio.h>
#include <string.h>

#include "arraylist.h"

int main(){
	printf("Hello World!\n");
	int first = 5;
	int* arr = (int*)new_array(sizeof(int*), &first);
	*arr = 5;
	printf("%d", *arr);
	free(arr);	
	return 0;
}
