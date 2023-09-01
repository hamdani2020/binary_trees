#include "binary_trees.h"
/**
 * binary_tree_is_bst - it checks if ist a correctly bst tree
 * @tr: tree to check
 * Return: 1 if is bst 0 if not
 */
int binary_tree_is_bst(const binary_tree_t *tr)
{
	if (tr == NULL)
		return (0);
	return (croos_tree((binary_tree_t *)tr, (binary_tree_t *)tree));
}
/**
 * croos_tree - it crosses the tree checking if each node exist correctly
 * @root: a root node of the tree
 * @node: the current node to evaluate
 * Return: One 1 if is BST0 if no
 */
int croos_tree(binary_tree_t *root, binary_tree_t *node)
{
	if (root && node)
	{
		int aux = 0;

		aux = find_node(root, node);
		if (node->left)
			aux &= croos_tree(root, node->left);
		if (node->right)
			aux &= croos_tree(root, node->right);
		return (aux);
	}
	return (0);
}
/**
 * find_node -this function find node in a tree
 * @root: the root of the tre to evaluate
 * @node: the node to find
 * Return: one 1 if exits 0 if no
 */
int find_node(binary_tree_t *root, binary_tree_t *node)
{

	if (root == NULL)
		return (0);
	if (node == root)
		return (1);
	if (node->n < root->n)
		return (find_node(root->left, node));
	if (node->n > root->n)
		return (find_node(root->right, node));
	return (0);
}
