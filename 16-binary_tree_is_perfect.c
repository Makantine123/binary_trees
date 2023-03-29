#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_is_perfect - Function checks if binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->right && tree->left)
	{
		if ((!tree->left->left &&!tree->left->right) &&
			(!tree->right->left &&!tree->right->right))
			return (1);

		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}
	else if (!(tree->parent))
		return (1);

	return (0);
}
