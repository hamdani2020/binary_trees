#include "binary_trees.h"

/**
 * binary_tree_nodes - it counts the nodes with at least 1 child in a binary tree.
 *@tr: the pointer to a root node of the tree to count the number of nodes.
 * Return: If tree is NULL, function must return 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tr)
{
	if (tr == NULL)
		return (0);
	if (tr->right != NULL || tr->left != NULL)
		return  (1 + binary_tree_nodes(tr->right) +
			 binary_tree_nodes(tr->left));
	return (0);
}
