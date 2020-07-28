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
	/*Validate if there is no list the node will be the only element*/
	newNode->n = number;
	if (*head == NULL)
	{
		*head = newNode;
		newNode->next = NULL;
		return (newNode);
	}
	while(tmp != NULL)
	{
		if (number < tmp->n)
		{
			newNode->next = tmp;
			*head = newNode;
			return (newNode);
		}
		tmp = tmp->next;
	}
	return (newNode);
}
