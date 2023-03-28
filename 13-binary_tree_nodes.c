#include "binary_trees.h"
/*
 * binary_tree_nodes - Function counts the nodes
 * with at least 1 child in binary tree
 * @tree: Pointer to the root node to start count
 *
 * Return: Count, else 0 if NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count;

	if (!tree)
		return (0);

	if ((tree->left) || (tree->right))
		count = 1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	else
		count = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	return (count);
}
