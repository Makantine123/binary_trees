#include "binary_trees.h"
/**
 * array_to_bst - Function that builds a Binary Search Tree from array
 * @array: Pointer to first element of the array to be converted
 * @size: Number of elements in the array
 *
 * Return: Pointer to root node, node created at BST, or NULL on failure
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t length;
	bst_t *tree = NULL;

	for (length = 0; length < size; length++)
		bst_insert(&tree, array[length]);

	return (tree);
}
