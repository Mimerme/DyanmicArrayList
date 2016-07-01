#include "arraylist.h"

//Arraylists store pointer references


//Pass the pointer type size using sizeof([POINTER TYPE])
void *new_array(int type_size, void* first_val){
	void* arr_pnt =  malloc(sizeof(type_size));
	return arr_pnt;
}
