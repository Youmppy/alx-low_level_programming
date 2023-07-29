#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: A pointer to the head of the linked list.
 *
 * Description: This function prints all the elements of a linked list of
 *              type list_t. Each element is printed in the format: [len] str
 *              where len is the length of the string and str is the string
 *              itself. If str is NULL, it prints [0] (nil).
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_list(const list_t *h)
{
	int n = 1;

	if (h->next == NULL)
	{
		printf("[0] (nil)");
		return ("0");
	}
	else
	{
		while (h->next != NULL)
		{
			h = h->next;
			n++;
		}
	printf("[%d] %s\n", h->len, h->str);
	return (n);
	}
}
