#include "binary_trees.h"
/**
 * binary_tree_height - Meansure the height of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Height of binary tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (!tree)
		return (-1);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_height = binary_tree_height(tree->left) + 1;
	right_height = binary_tree_height(tree->right) + 1;

	if (left_height > right_height)
		return (left_height);

	return (right_height);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 *
 * @tree: Pointer to th root node of the tree measure
 * Return: Balance measure, else 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left = binary_tree_height(tree->left);
	if (tree->right)
		right = binary_tree_height(tree->right);

	return (left - right);
}
