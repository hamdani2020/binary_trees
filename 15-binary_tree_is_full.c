#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full.
 *@tr: pointer to the root node of the tree to check.
 * Return: If tree is NULL, your function must return 0.
 */
int binary_tree_is_full(const binary_tree_t *tr)
{
	if (tr == NULL)
		return (0);
	if (tr->left != NULL && tr->right != NULL)
		return (binary_tree_is_full(tr->left) && binary_tree_is_full(tr->right));
	if (tr->left == NULL && tr->right == NULL)
		return (1);
	return (0);
}
