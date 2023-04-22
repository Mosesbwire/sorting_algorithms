#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list - sorts a doubly linked list using insertion sort algo
 * @list: pointer to first node element of list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *node_bwd;
	listint_t *node_fwd;
	listint_t *key_node;
	listint_t *prev_node;
	listint_t *node = *list;
	listint_t *start_node = node->next;


	while (start_node)
	{

		key_node = start_node;
		prev_node = start_node->prev;


		while (prev_node != NULL && prev_node->n > key_node->n)
		{
			node_fwd = prev_node;
			node_bwd = key_node;

			if (prev_node->prev == NULL)
			{
				*list = node_bwd;
			} else
			{
				node_fwd->prev->next = node_bwd;
			}
			node_fwd->next = node_bwd->next;
			node_bwd->next = node_fwd;
			node_bwd->prev = node_fwd->prev;
			node_fwd->prev = node_bwd;
			if (node_fwd->next != NULL)
				node_fwd->next->prev = node_fwd;
			print_list(*list);
			prev_node = key_node->prev;

		}
		start_node = start_node->next;
	}
}
