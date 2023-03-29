#include "binary_trees.h"
/**
 * binary_tree_is_full - Function checks if a binary tree is full
 * @tree: Pointer to root node to check
 *
 * Return: 1 if tree is full else 0 if not or tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (1);

	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);

	if ((tree->left != NULL) && (tree->right != NULL))
		return binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);

	return (0);
}
