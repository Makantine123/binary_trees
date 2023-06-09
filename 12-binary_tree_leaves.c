#include "binary_trees.h"
/**
 * binary_tree_leaves - Function counts the leaves in a binary tree
 * @tree: Pointer to root node of tree to count
 *
 * Return: Returns leave count, else 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);

	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);
	/** Add root level to toatl**/
	return (leaves);
}
