#include "binary_trees.h"
/**
 * binary_tree_levelorder - Function goes through binary tree
 * using level-order tranversal
 * @tree: Pointer to the root node of the tree to transverse
 * @func: Pointer to function to for eack node
 *
 * Return: Nothing, do nothing if tree or func is null
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height = 0;
	int i = 1;

	if ((!tree) || (!func))
		return;

	height = binary_tree_height(tree) + 1;

	while (i < height)
	{
		print_level(tree, i, func);
		i++;
	}

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
	/**
	 * if (tree->left == NULL && tree->right == NULL)
	 * return (0);
	 */

	left_height = binary_tree_height(tree->left) + 1;
	right_height = binary_tree_height(tree->right) + 1;

	if (left_height > right_height)
		return (left_height);

	return (right_height);
}

/**
 * print_level - Function prints nodes at a given level
 * @tree: Pointer to root node of tree
 * @level: number refers to node level. i.e 0,1,2 etc
 * @func: Pointer to function to call on each node
 *
 * Return: Nodthing
 */
void print_level(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (!tree)
		return;

	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		print_level(tree->left, level - 1, func);
		print_level(tree->right, level - 1, func);
	}
}
