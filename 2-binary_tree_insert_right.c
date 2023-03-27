#include "binary_trees.h"
/**
 * binary_tree_insert_right - Function inserts a node as the right-child
 * of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: Value to store in new node
 *
 * Return: Pointer to the created node or NULL on faluire
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *rightNode = NULL;

	if (!parent)
	{
		return (NULL);
	}

	rightNode = binary_tree_node(parent, value);

	if (!rightNode)
	{
		return (NULL);
	}
	if (parent->right)
	{
		rightNode->right = parent->right;
		rightNode->right->parent = rightNode;
	}
	parent->right = rightNode;

	return (rightNode);
}







binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
