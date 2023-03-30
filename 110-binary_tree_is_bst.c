#include "binary_trees.h"
/**
 * binary_tree_is_bst - Function checks if a binary tree is valid
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if tree is valid BST, and 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	return isvalid_bst(tree, INT_MIN, INT_MAX);
}

/**
 * isvalid_bst - Compare nodes to too check
 * @minVal: min value
 * @maxVal: max value
 * @tree: Pointer to node to check
 *
 * Return: 1 success, 0 otherwise
 */
int isvalid_bst(binary_tree_t *tree, int minVal, int maxVal)
{
	if (!tree)
		return (1);

	if (tree->n <= minVal || tree->n >= maxVal)
		return (0);

	return isvalid_bst(tree->left, minVal, tree->n) &&
		isvalid_bst(tree->right, tree->n, maxVal);
}
