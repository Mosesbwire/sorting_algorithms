#ifndef SORT_H
#define SORT_H
#include <stddef.h>


/**
 * struct listint_s - doubly linked list
 * @n: INteger in node;
 * @prev: pointer to previous element in list
 * @next: pointer to next element in list
 */

typedef struct listint_s
{
   const int n;
   struct listint_s *prev;
   struct listint_s *next;
} listint_t;


void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);



#endif
