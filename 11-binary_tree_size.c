#include "binary_trees.h"
/**
 * binary_tree_size - Measures the size of binary tree
 * @tree: Pointer to binary tree
 *
 * Return: Size, or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t num = 0;

	if (!tree)
		return (0);
	num = binary_tree_size(tree->left) + 1;
	num += binary_tree_size(tree->right);
	/** Add root level to toatl**/
	return (num);
}
