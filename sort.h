#ifndef SORT_H
#define SORT_H


#include <stdlib.h>
#include <stdio.h>


/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* print array, print list prototypes*/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* mandatory task prototypes*/
void bubble_sort(int *array, size_t size);
void swap_list(listint_t *pn, listint_t *temp, listint_t *nxt, listint_t **h);
void insertion_sort_list(listint_t **list);
void swap_ints(int *a, int *b);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

#endif
