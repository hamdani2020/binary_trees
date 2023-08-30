#include "binary_trees.h"

/**
 * binary_tree_leaves - count the number of leaves
 *@tr: the pointer to the root node of the tree to count the number of leaves.
 * Return: If tree is NULL, the function must return zero 0.
 */
size_t binary_tree_leaves(const binary_tree_t *tr)
{
	if (tr == NULL)
		return (0);
	else
		return (binary_tree_is_leaf(tr) +
			binary_tree_leaves(tr->right) +
			binary_tree_leaves(tr->left));

}

/**
 * binary_tree_is_leaf - the function that checks if a node is a leaf.
 *@node: pointer to the node to check.
 * Return: return 1 if node is a leaf, otherwise zero zero 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}
