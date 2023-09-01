#include "binary_trees.h"
/**
 * bst_search -the function find node in a tree
 * @tr: a root of the tre to evaluate
 * @value: a node to find
 * Return: One 1 if exits zero 0 if no
 */
bst_t *bst_search(const bst_t *tr, int value)
{

	if (tr == NULL)
		return (NULL);
	if (value == tr->n)
		return ((bst_t *)tr);
	if (value < tr->n)
		return (bst_search(tr->left, value));
	else
		return (bst_search(tr->right, value));
	return (NULL);
}
