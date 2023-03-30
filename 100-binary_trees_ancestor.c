#include "binary_trees.h"
/**
 * binary_trees_ancestor - Function finds the lowest commonelif
 * ancestor of two nodes
 * @first: Pointer to first node
 * @second: Pointer to second node
 *
 * Return: Pointer to lowest common ancestor, else NULL if none found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *f_anc, *s_anc;

	for (f_anc = first; f_anc; f_anc = f_anc->parent)
	{
		for (s_anc = second; s_anc; s_anc = s_anc->parent)
		{
			if (f_anc == s_anc)
				return ((binary_tree_t *)f_anc);
		}
	}
	return (NULL);
}
