#include "binary_trees.h"

/**
 * binary_tree_is_perfect - it checks if a binary tree is perfect.
 *@tr: a pointer to the root node of the tree to check.
 * Return: if tree is NULL, function must return zero 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tr)
{
	size_t h = 0, perfect_size = 0;

	if (tr == NULL)
		return (0);
	h = binary_tree_height(tr);
	perfect_size = (1 << (h + 1)) - 1;
	if (perfect_size == binary_tree_size(tr))
		return (1);
	else
		return (0);
}
/**
 * binary_tree_size - itmeasures the size of a binary tree.
 *@tr: a pointer to the root node of the tree to measure the size.
 * Return: 0.
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
/**
 * binary_tree_height - it measures the height of a binary tree.
 *@tr: pointer to the root node of the tree to measure the height.
 * Return: 0.
 */
size_t binary_tree_height(const binary_tree_t *tr)
{
	if (tr)
	{
		int left = 0, right = 0;

		if (tr->right)
			right = 1 + binary_tree_height(tr->right);
		if (tr->left)
			left = 1 + binary_tree_height(tr->left);
		if (left > right)
			return (left);
		else
			return (right);
	}
	else
		return (0);
}
