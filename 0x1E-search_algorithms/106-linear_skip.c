#include "search_algos.h"


/**
* The linear_skip function looks for a value contained in a skip list; it assumes 
* a list of sorted values and a single skip layer with nodes at each index that is a multiple of the list's list size squared.

* When traversing a skip list, use the following syntax: 
* @list: pointer to the skip list's head  
* @value: value to look for Return: reference to the first node that contains the value, or NULL if list
* is NULL or if the value cannot be found. 
*/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *temp = NULL, *stop = NULL;

	if (!list)
		return (NULL);

	temp = list;
	while (temp && temp->express && temp->express->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       temp->express->index, temp->express->n);
		temp = temp->express;
	}
	stop = temp;
	while (stop && stop->next != stop->express)
		stop = stop->next;
	/* the vailue is fautly between two express nodes */
	if (temp->express)
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       temp->express->index, temp->express->n);
		printf("Value found between indexes [%lu] and [%lu]\n",
		       temp->index, temp->express->index);
	}
	/* the value is greater than last express in node, potentially out of list */
	else
		printf("Value found between indexes [%lu] and [%lu]\n",
		       temp->index, stop->index);

	while (temp != stop && temp->n < value)
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       temp->index, temp->n);
		temp = temp->next;
	}
	printf("Value checked at index [%lu] = [%i]\n",
	       temp->index, temp->n);

	if (temp == stop)
		return (NULL);
	return (temp);
}
