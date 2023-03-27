#include "binary_trees.h"

/**
 * binary_tree_node - Function creates a binary tree node
 *
 * @parent: Parent node
 * @value: Value
 * Return: Pointer to new node or NULL if failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	newNode = malloc(sizeof(binary_tree_t));

	if (!newNode)
	{
	return (NULL);
	}
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->n = value;

	return (newNode);
}
