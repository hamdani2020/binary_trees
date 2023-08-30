#include "binary_trees.h"

/**
 * binary_tree_depth - it measures the depth of the node in a binary tree.
 *@tr: this a pointer to the node to measure the depth.
 * Return: if tree is NULL, then the function must return 0.
 */
size_t binary_tree_depth(const binary_tree_t *tr)
{
	if (tr == NULL || tr->parent == NULL)
		return (0);
	else
		return (1 + binary_tree_depth(tr->parent));
}
