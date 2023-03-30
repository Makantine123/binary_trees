#include "binary_trees.h"
/**
 * binary_tree_rotate_right - Function performs a right rotation on binary tree
 * @tree: Pointer to root node of the tree to rotate
 *
 * Returns: Pointer to new node of tree once rotated
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp, *parent = tree;

	if (!tree)
		return (NULL);

	temp = parent->left;
	if (!temp)
		return (tree);

	if (temp->right)
		temp->right->parent = parent;

	parent->left = temp->right;
	temp->right = parent;
	temp->parent = parent->parent;
	parent->parent = temp;

	if (temp->parent && temp->parent->left == parent)
		temp->parent->left = temp;
	else if (temp->parent)
		temp->parent->right = temp;

	return (temp);

}
