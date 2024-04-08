#ifndef _search_algos_
#define _search_algos_

#include <stddef.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t x, size_t y);
int binary_search_index(int *array, size_t x, size_t y, int value);

#endif /* _search_algos_ */
