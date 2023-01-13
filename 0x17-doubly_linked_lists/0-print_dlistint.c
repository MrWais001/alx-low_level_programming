#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: doubly linkedlist
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes = 0;

	while (h)
	{
		printf("%i\n", h->n);
		num_nodes++;
		h = h->next;
	}

	return (num_nodes);
}




vi 1-dlistint_len.c

#include "lists.h"

/**
 * dlistint_len - return length of linkedlist
 * @h: doubly linkedlist
 * Return: number of elements in a linked dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	while (h)
		h = h->next, length++;

	return (length);
}




vi 2-add_dnodeint.c

#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * @head: doubly linkedlist
 * @n: value of node
 * Return: all the linkedlist
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
