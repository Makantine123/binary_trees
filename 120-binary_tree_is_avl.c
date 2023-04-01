#include "binary_trees.h"
/**
 * binary_tree_avl - Function checks if a binary tree is a valid AVL Tree
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if tree is avalid AVL Tree, annd 0 otherwise
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	int heightL, heightR;

	heightL = binary_tree_height(tree->left);
	heightR = binary_tree_height(tree->right);

	if (!tree)
		return (1);
	if ((heightL - heightR > 1) || (heightL - heightR < -1))
		return (0);

	return (binary_tree_height(tree->left) &&
			binary_tree_height(tree->right));
}

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
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_height = binary_tree_height(tree->left) + 1;
	right_height = binary_tree_height(tree->right) + 1;

	if (left_height > right_height)
		return (left_height);

	return (right_height);
}
