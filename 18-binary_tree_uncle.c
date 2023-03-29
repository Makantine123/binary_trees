#include "binary_trees.h"
/**
 * binary_tree_uncle - Function that finds the uncle of a node
 * @node: Pointer to the node to find the uncle for
 *
 * Return: Pointer to uncle or NULL if fail
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	if (node->parent)
	{
		if (node->parent->parent)
		{
			if (node->parent->parent->left == node->parent)
			{
				return (node->parent->parent->right);
			}
			else if (node->parent->parent->right == node->parent)
			{
				return (node->parent->parent->left);
			}
		}
	}
	return (NULL);
}
