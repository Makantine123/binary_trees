#include "binary_trees.h"
/**
 * binary_tree_rotate_left - Function that performs
 * a left-rotation on a binary tree
 * @tree: Pointer to the root node of the tree to rotate
 *
 * Return: Pointer to new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *temp, *parent = tree;

	if (!tree)
		return (NULL);

	temp = parent->right;
	if (!temp)
		return (tree);

	if (temp->left)
		temp->left->parent = parent;

	parent->right = temp->left;
	temp->left = parent;
	temp->parent = parent->parent;
	parent->parent = temp;

	if (temp->parent && temp->parent->left == parent)
		temp->parent->left = temp;
	else if (temp->parent)
		temp->parent->right = temp;

	return (temp);
}
