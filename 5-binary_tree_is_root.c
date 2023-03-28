#include "binary_trees.h"
/**
 * binary_tree_is_root - Function that checks if given node is root
 * @node: Pointer to the node to check
 *
 * Return: 1 if node is root, otherwise 0 if not or NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
	{
		return (0);
	}
	if (!(node->parent))
	{
		return (1);
	}
	return (0);
}
