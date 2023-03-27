#include "binary_trees.h"
/**
 * binary_tree_insert_left - Function inserts a node as the left-child
 * of another node
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to store in new node
 *
 * Return: Pointer to the created node or NULL on faluire
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *leftNode = NULL;

	if (!parent)
	{
		return (NULL);
	}

	leftNode = binary_tree_node(parent, value);

	if (!leftNode)
	{
		return (NULL);
	}
	if (parent->left)
	{
		leftNode->left = parent->left;
		leftNode->left->parent = leftNode;
	}
	parent->left = leftNode;

	return (leftNode);
}
