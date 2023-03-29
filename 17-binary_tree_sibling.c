#include "binary_trees.h"
/**
 * binary_tree_sibling - Function finds the sibling of a node
 * @node: Pointer to the node to find sibling
 *
 * Return: Pointer to sibling, else NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	if (node->parent)
	{
		if (node->parent->left == node)
			return (node->parent->right);
		if (node->parent->right == node)
			return (node->parent->left);
	}
	return (NULL);
}
