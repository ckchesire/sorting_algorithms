#include "sort.h"

/**
 * insertion_sort_list - function that  sorts a doubly linked list using
 * insertion sort
 * @list: double pointer to the head of the list
 * Return: returns nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current_node, *prev_node, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current_node = (*list)->next;

	while (current_node != NULL)
	{
		tmp = current_node->next;
		prev_node = current_node->prev;

		while (prev_node != NULL && prev_node->n > current_node->n)
		{
			if (current_node->next != NULL)
				current_node->next->prev = prev_node;

			prev_node->next = current_node->next;
			current_node->next = prev_node;
			current_node->prev = prev_node->prev;
			prev_node->prev = current_node;

			if (current_node->prev != NULL)
				current_node->prev->next = current_node;
			else
				*list = current_node;

			print_list(*list);
			prev_node = current_node->prev;
		}
		current_node = tmp;
	}
}
