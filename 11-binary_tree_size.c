#include "binary_trees.h"
/**
 * binary_tree_size - Measures the size of binary tree
 * @tree: Pointer to binary tree
 *
 * Return: Size, or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_height = binary_tree_height(tree->left) + 1;
	right_height = binary_tree_height(tree->right) + 1;

	return (left_height + right_height);
}
