#include <stdlib.h>
#include "binary_trees.h"

/**
 * heap_insert - create a new tree
 * @root: double pointer to the root node of the Heap
 * @value: value store in the node to be inserted
 * Return: a pointer to the inserted node, or NULL on failure
 */

heap_t *heap_insert(heap_t **root, int value)
{
	binary_tree_t *newNode, *tmp = *root;

	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	if (*root == NULL) /*validate if empty tree*/
	{
		*root = newNode;
		newNode->parent = NULL;
		return (newNode);
	}
	/*If parent left is null add new to left*/
	if (tmp->left == NULL)
	{
		newNode->parent = tmp;
		tmp->left = newNode;
		return (newNode);
	}
	/*If parent left is not null, add new to right*/
	newNode->parent = *root;
	tmp->right = newNode;
	return (newNode);
}