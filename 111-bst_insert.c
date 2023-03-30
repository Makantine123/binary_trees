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
	bst_t *newNode, *temp;

	if (tree == NULL)
	{
		newNode = binary_tree_node(NULL, value);
		*tree = newNode;
		return (newNode);
	}

	temp = *tree;

	while (temp != NULL)
	{
		if (temp->n == value)
		{
			return (NULL);
		}
		if (temp->n > value)
		{
			if (temp->left == NULL)
			{
				temp->left = binary_tree_node(temp, value);
				return (temp->left);
			}
			temp = temp->left;
		}
		if (temp->n < value)
		{
			if (temp->right == NULL)
			{
				temp->right = binary_tree_node(temp, value);
				return (temp->right);
			}
			temp = temp->right;
		}

	}
	return (NULL);

}
