#include "binary_trees.h"
/**
 * bst_insert_recursion - Recursive transvers a Binary Search Tree
 * @tree: Pointer to tree node
 * @value: Value to insert
 *
 * Return: Pointer to new node, NULL on failure
 */
bst_t *bst_insert_recursion(bst_t *tree, int value)
{
	bst_t *new = NULL;

	if (tree->n > value)
	{
		if (tree->left == NULL)
		{
			new = binary_tree_node(tree, value);
			tree->left = new;
			return (new);
		}
		return (bst_insert_recursion(tree->left, value));
	}
	if (tree->n < value)
	{
		if (tree->right == NULL)
		{
			new = binary_tree_node(tree, value);
			tree->right = new;
			return (new);
		}
		return (bst_insert_recursion(tree->right, value));
	}

	return (NULL);
}

/**
 * bst_insert - Function inserts a value in Binary Search Tree
 * @tree: Double pointer to root node of BST to insert value
 * @value: Value to store in thr node to be inserted
 *
 * Return: Pointer to created node, or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *newNode;

	if (tree == NULL)
	{
		newNode = binary_tree_node(NULL, value);
		*tree = newNode;
		return (newNode);
	}
	return (bst_insert_recursion(*tree, value));
}
