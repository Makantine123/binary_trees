#include "binary_trees.h"
/**
 * binary_tree_depth - Function measures the depth of a node in a binary tree
 * @tree: Pointer to a node to measure the depth
 *
 * Return: Depth size_t, else 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	if (tree->parent)
		depth = binary_tree_depth(tree->parent) + 1;

	return (depth);
}
