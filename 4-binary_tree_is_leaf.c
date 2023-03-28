#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Function cheacks if a node is a leaf
 * @node: Pointer to node to check
 *
 * Return: 1 if node is leaf, otherwise 0 if not or node is NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
	{
		return 0;
	}
	if (node->left == NULL && node->right == NULL)
	{
		return 1;
	}
	else
		return 0;
}
