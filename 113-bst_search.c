#include "binary_trees.h"
/**
 * bst_search - Function searches for a value in Binary Search Tree
 * @tree: Pointer to the root node of BST to search
 * @value: Value to search in the tree
 *
 * Return: Pointer to the node containing a value equals to value
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (!tree || !value)
		return (NULL);

	if (tree->n == value)
		return ((binary_tree_t*) tree);

	if (tree->n < value)
		return (bst_search(tree->right, value));

	return (bst_search(tree->left, value));
}
