#include "sort.h"
/**
 *insertion_sort_list-sorts doubly linked list of int in ascending
 *order using Insertion sort algorithm
 *@list: list
 *Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp, *aux;

	if (!list)
	{
		return;
	}

	current = *list;

	while ((current = current->next))
	{
		tmp = current;

		while (tmp->prev && tmp->prev->n > tmp->n)
		{
			aux = tmp->prev;

			if (tmp->next)
			{
				tmp->next->prev = aux;
			}
			if (aux->prev)
			{
				aux->prev->next = tmp;
			}
			else
			{
				*list = tmp;
			}

			aux->next = tmp->next;
			tmp->prev = aux->prev;
			tmp->next = aux;
			aux->prev = tmp;
			print_list(*list);
		}
	}
}
