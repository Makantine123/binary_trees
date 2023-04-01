#include "binary_trees.h"
/**
 * array_to_avl - Function builds an AVL tree from an array
 * @array: Pointer to 1st element of array to be converted
 * @size: Size is the number of element in the array
 *
 * Return: Pointer to the root node of the created AVL tree, or NULL
 */
avl_t *array_to_avl(int *array, size_t size)
{
	size_t i;
	avl_t *root = NULL;

	if (!array || size == 0)
		return (NULL);

	root = avl_insert(&root, array[0]);
	for (i = 1; i < size; i++)
		avl_insert(&root, array[i]);

	return (root);
}
