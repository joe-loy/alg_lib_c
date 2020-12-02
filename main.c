#include <stdio.h>
#include <malloc.h>

// Comparison function declarations
int int_cmp(void* e1, void* e2);
int str_cmp(void* e1, void* e2);
int dub_cmp(void* e1, void* e2);

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
