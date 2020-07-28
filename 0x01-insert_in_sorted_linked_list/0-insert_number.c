#include <stdlib.h>
#include "lists.h"
/**
 * insert_node -add node to list.
 * Description: Function that inserts a number into a sorted singly linked list
 * @head: pointer to a pointer, head of the list
 * @number: integer value to insert
 * Return: the address of the new node, or NULL if it failed
 **/
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *newNode;
	listint_t *tmp = *head;

	newNode = malloc(sizeof(listint_t)); /*Assign mwmory space for newNode*/

	if (newNode == NULL)
	{ /*validate that malloc is good, if not return null and free memory*/
		free(newNode);
		return (NULL);
	}
	newNode->n = number;
	if (*head == NULL) /*Validate if there is not elements in the list*/
	{
		*head = newNode;
		newNode->next = NULL;
		return (newNode);
	}
	if (tmp->next == NULL)
	{ /* validate if there is only one element in the list*/
		if (number < tmp->n)
		{
			newNode->next = tmp;
			*head = newNode;
			return (newNode);
		}
		newNode->next = NULL;
		tmp->next = newNode;
		return (newNode);
	}
	while (tmp != NULL)
	{/*go through the list*/
		if (number <= tmp->next->n)
		{
			newNode->next = tmp->next;
			tmp->next = newNode;
			return (newNode);
		}
		tmp = tmp->next;
	}
	return (newNode);
}
