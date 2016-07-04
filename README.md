# DyanmicArrayList
A dynamic Arraylist implementation in C.

##About
Dynamic arrays are common place in modern programming languages. However in low level languages like C there is no standard for dynamic primitive types. This is my first C project, and I am constantly looking to improve this code.

##Implementation
- Include arraylist.h
```C
#include "arraylist.h"
```

- Create a new Arraylist struct
```C
struct Arraylist arraylist
```

- Set the type_size of the arraylist (declared as a varaible in the struct). (Ex. Set the arraylist to be of type int)
arraylist.type_size = sizeof(int)

- Call _new_array_ and pass a reference to the pre3viously created arraylist struct. This will asign 

```C
new_array(&arraylist)
```

##Untilization
To get the arraylist pointer call the arr_ptn of the struct

```C
arraylist.arr_pnt
```

To get and set values first cast arr_pnt to the type of the array (Ex. (int*)arraylist.arr_pnt)
