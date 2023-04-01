#include "binary_trees.h"
/**
 * binary_tree_is_avl - Function checks if a binary tree is a valid AVL Tree
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if tree is avalid AVL Tree, annd 0 otherwise
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	return (avl_tree_helper(tree, INT_MIN, INT_MAX));
}

/**
 * avl_tree_helper - Helper function to AVL checker
 * @tree: Pointer to root tree node
 * @min_val: Minimum value
 * @max_val: Maximum value
 *
 * Return: 1 or 0
 */
int avl_tree_helper(const binary_tree_t *tree, int min_val, int max_val)
{
	if (tree == NULL)
		return (1);
	if (tree->n <= min_val || tree->n >= max_val)
		return (0);

	if (!binary_tree_balance(tree))
		return (0);

	return (avl_tree_helper(tree->left, min_val, tree->n) &&
		avl_tree_helper(tree->right, tree->n, max_val));
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 *
 * @tree: Pointer to th root node of the tree measure
 * Return: Balance measure, else 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height, height_diff;

	if (!tree)
		return (0);
	if (tree == NULL)
		return (1);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	height_diff = left_height - right_height;

	if (height_diff < -1 || height_diff > 1)
		return (0);

	return (binary_tree_balance(tree->left) &&
		binary_tree_balance(tree->right));
}

/**
 * binary_tree_height - Meansure the height of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Height of binary tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (-1);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}
