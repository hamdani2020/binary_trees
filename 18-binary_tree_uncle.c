#include "binary_trees.h"

/**
 * binary_tree_uncle - a function that finds the uncle of a node.
 *@node: the pointer to the node to find the uncle.
 * Return: a pointer to the node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
/**
 * binary_tree_sibling - it finds the sibling of a node.
 *@node: a pointer to the node to find the sibling.
 * Return: a pointer to the sibling node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->right == node)
		return (node->parent->left);
	else
		return (node->parent->right);

}
