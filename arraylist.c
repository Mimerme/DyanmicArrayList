#include "arraylist.h"

int NEW_ARRAYS = 0;
int DESTROYED_ARRAYS = 0;

void new_array(struct Arraylist *arr_struct){
	void* arr_pnt =  malloc(arr_struct->type_size);
	arr_struct->count = 1;
	arr_struct->ptr = arr_pnt;
	NEW_ARRAYS++;
}

void resize_array(struct Arraylist *arr_struct){
	realloc(arr_struct->ptr, arr_struct->type_size * arr_struct->count);
}

void destroy(struct Arraylist *arr_struct){
	free(arr_struct->ptr);
	DESTROYED_ARRAYS++;
}

void check_arrs(){
	if(NEW_ARRAYS != DESTROYED_ARRAYS){
		printf("\nThere was an error in the amount of memory allocated vs the amount freed. Check the program as there may be a memory leak.\n");
	}
}
