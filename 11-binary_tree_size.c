#include "binary_trees.h"

/**
 * binary_tree_size - it measures the size of a binary tree.
 *@tr: this is pointer to the root node of the tree to measure the size.
 * Return: if tree is NULL, must return zero 0.
 */
size_t binary_tree_size(const binary_tree_t *tr)
{
	if (tr == NULL)
		return (0);
	{
		size_t n_left, n_right;

		n_left = binary_tree_size(tr->left);
		n_right = binary_tree_size(tr->right);
		return (1 + n_left + n_right);
	}
}
