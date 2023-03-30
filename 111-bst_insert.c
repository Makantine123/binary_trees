#include "binary_trees.h"
/**
 * bst_insert - Function inserts a value in Binary Search Tree
 * @tree: Double pointer to root node of BST to insert value
 * @value: Value to store in thr node to be inserted
 *
 * Return: Pointer to created node, or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	binary_tree_t *newNode;

	if (tree == NULL)
		newNode = binary_tree_node(NULL, value);
		return (newNode);

	if (value < (*tree)->n)
		(*tree)->left = bst_insert((*tree)->left, value);
	else if (value > (*tree)->n)
		(*tree)->right = bst_insert((*tree)->right, value);

	return (*tree);

}
