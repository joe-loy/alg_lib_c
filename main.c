#include <stdlib.h>
#include <stdio.h>
#include <string.h>


// Comparison function declarations
int int_cmp(void* e1, void* e2);
int char_cmp(void* e1, void* e2);
int first_char_cmp(void* e1, void* e2);
int flt_cmp(void* e1, void* e2);

// Sorting function declarations
void insertion_sort(void* arr, int size, void (*cmp_func)(void*, void*));
void selection_sort(void* arr, int size, void (*cmp_func)(void*, void*));
void merge_sort(void* arr, int size, void (*cmp_func)(void*, void*));
void quick_sort(void* arr, int size, void (*cmp_func)(void*, void*));

// Searching Algorithm declarations

int main()
{
  printf("Hello World!\n");
  return 0;
}

/*
 *  Sorting algorithms
 */
// Comparison Functions
int flt_cmp(const void *e1, const void *e2) {
    float e1_float = *(float *)e1;
    float e2_float = *(float *)e2;
    return (e1_float > e2_float) - (e1_float < e2_float);
}

int int_cmp(const void *e1, const void *e2) {
    return *(const int *)e1 - *(const int *)e2;
}

int char_cmp(const void *e1, const void **e2) {
    return *(const unsigned char *)e1 - *(const unsigned char *)*e2;
}

int first_char_cmp(const void *e1, const void **e2) {
    return **(const char **)e1 - **(const char **)*e2;
}


// Insertion Sort

// Selection Sort

// Merge sort

// Quicksort

/*
 * Searching Algorithms
 */

// Binary Search

// Linear Search

// Depth First Search

// Breadth First Search

/*
 * Graph algorithms
 */

// Djiskstra

// A* Search

// Nearest Neighbor

// Kruskal Algorithm

// Prim's Algorithm
