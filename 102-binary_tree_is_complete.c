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

/**
 * tree_is_complete - Checks if tree is complete
 * @tree: Pointer to the tree node
 * @i: Node inded
 * @c_nodes: Node count
 * Return: 1 if tree is complete, else 0
 */
int tree_is_complete(const binary_tree_t *tree, int i, int cnodes)
{
	if (tree == NULL)
		return (1);

	if (i > cnodes)
		return (0);

	return (tree_is_complete(tree->left, (2 * i) + 1, cnodes) &&
		tree_is_complete(tree->right, (2 * i) + 2, cnodes));
}

/**
 * binary_tree_is_complete - Function checks if a binary tree is complete
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: Return 1 if tree is complete else 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t cnodes;

	if (tree == NULL)
		return  (0);

	cnodes = binary_tree_size(tree);

	return (tree_is_complete(tree, 0, cnodes));
}
