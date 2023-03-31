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
	}
	else if (value > root->n)
	{
		root->right = bst_remove(root->right, value);
	}
	else
	{
		if (root->left == NULL && root->right == NULL)
		{
			free(root);
			return (NULL);
		}
		else if  (root->left == NULL)
		{
			temp = root->left;
			free(root);
			return (temp);
		}
		else
		{
			temp = root->right;
			while (temp->left != NULL)
			{
				temp = temp->left;
			}
			root->n = temp->n;
			root->right = bst_remove(root->right, temp->n);
		}
	}
	return (root);
}
