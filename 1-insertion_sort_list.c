#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 *                       in ascending order using the
 *                       Insertion sort algorithm
 * @list: doubly linked list to be sorted
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *tp, *ptp, *ntp;

	if (!list || !(*list) || !(*list)->next)
		return;

	for (tmp = (*list)->next; tmp; tmp = tmp->next)
	{
		tp = tmp;
		while (tp->prev && tp->n < tp->prev->n)
		{
			ptp = tp->prev;
			ntp = tp->next;

			if (ntp)
				ntp->prev = ptp;
			tp->prev = ptp->prev;
			tp->next = ptp;
			ptp->prev = tp;
			ptp->next = ntp;
			if (tp->prev)
				tp->prev->next = tp;
			else
				*list = tp;
			print_list(*list);
		}
	}
}
