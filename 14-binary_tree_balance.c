#include "binary_trees.h"

/**
 * binary_tree_balance - it measures the balance factor of a binary tree.
 *@tr: the pointer to the root node of the tree to measure the balance factor.
 * Return: If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tr)
{
	if (tr == NULL)
		return (0);
	return (binary_tree_height(tr->left)
		- binary_tree_height(tr->right));
}
/**
 * binary_tree_height - it measures the height of a binary tree.
 *@tr: the pointer to root node of the tree to measure the height.
 * Return: if tree is NULL, your function must return 0.
 */
size_t binary_tree_height(const binary_tree_t *tr)
{
	if (tr)
	{
		int left = 1, right = 1;

		if (tr->right)
			right +=  binary_tree_height(tr->right);
		if (tr->left)
			left +=  binary_tree_height(tr->left);
		if (left > right)
			return (left);
		else
			return (right);
	}
	else
		return (0);
}
