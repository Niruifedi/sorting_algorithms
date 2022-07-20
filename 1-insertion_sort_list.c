#include "sort.h"

/**
 * insertion_sort_list - sorts list with insertion sort
 * @list: input list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *prev, *nxt;

	if (list && *list && (*list)->next)
	{
		temp = (*list)->next;
		prev = temp->prev;
		nxt = temp->next;

		while (temp)
		{
			if (temp->n < prev->n)
			{
				swap_list(prev, temp, nxt, list);
			}
			temp = nxt;
			if (temp)
			{
				nxt = temp->next;
				prev = temp->prev;
			}
		}
	}
}

/**
 * swap_list - swaps the position of two nodes in a linked list
 * @prev: previous node
 * @temp: temp
 * @nxt: next node
 * @h: head of list
 */
void swap_list(listint_t *prev, listint_t *temp, listint_t *nxt, listint_t **h)
{

	while (prev && temp->n < prev->n)
	{
		if (nxt)
			nxt->prev = prev;
		temp->next = prev;
		temp->prev = prev->prev;
		if (prev->prev)
			(prev->prev)->next = temp;
		prev->prev = temp;
		prev->next = nxt;
		nxt = prev;
		prev = temp->prev;
		if ((*h)->prev)
			*h = (*h)->prev;
		print_list(*h);
	}
}
