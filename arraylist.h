#ifndef ARRAYLIST
#define ARRAYLIST

struct Arraylist{
	int type_size;
	void* ptr;
	int count;
};

void new_array(struct Arraylist *arr_struct);

void resize_array(struct Arraylist *arr_struct);

void destroy(struct Arraylist *arr_struct);

void check_arrs();
#endif
