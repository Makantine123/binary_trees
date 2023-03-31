#include "binary_trees.h"
/**
 * bst_remove - Function removes node from Binary Search Tree
 * @root: Pointer to root node tree
 * @value: Value to remove in the tree
 *
 * Return:Pointer to new root node of the tree after removing desired value
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *temp = NULL;

	if (!root)
		return (NULL);

	if (value < root->n)
	{
		root->left = bst_remove(root->left, value);
		if (root->left)
		{
			root->left->parent = root;
		}
	}
	else if (value > root->n)
	{
		root->right = bst_remove(root->right, value);
		if (root->right)
		{
			root->right->parent = root;
		}
	}
	else
	{
		if (root->left == NULL)
		{
			temp = root->right;
			free(root);
			return (temp);
		}
		else if  (root->right == NULL)
		{
			temp = root->left;
			free(root);
			return (temp);
		}
		temp = bst_find_low(root->right);
		root->n = temp->n;
		root->right = bst_remove(root->right, temp->n);
		if (root->right)
			root->right->parent = root;
	}
	return (root);
}

/**
 * bst_find_low - Find lowest value in Binary Tree Search
 *
 * @tree: BST root or subtree
 * Return: Node to the tree containing lowest value
 */
bst_t *bst_find_lowest(bst_t *tree)
{
	bst_t *temp = NULL;

	temp = tree;
	while (temp && temp->left)
		temp = temp->left;

	return (temp);
}
