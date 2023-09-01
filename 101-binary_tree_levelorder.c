#include "binary_trees.h"
/**
 * binary_tree_levelorder - it goes through a binary tree in level-order traversal
 * @tr: a pointer to the root node of the tree to traverse
 * @fu: a pointer to a function to call for each node.
 */
void binary_tree_levelorder(const binary_tree_t *tr, void (*fu)(int))
{
	size_t h = 0, i = 1;

	if (tr && fu)
	{
		h = binary_tree_height(tr);
		while (i <= h + 1)
		{
			print_at_level(tr, fu, i);
			i++;
		}
	}

}
/**
 * print_at_level - it prints node, especific level
 * @tr: a pointer to the root node of the tree to traverse
 * @fu: a pointer to a function to call for each node.
 * @level: a level to print
 */
void print_at_level(const binary_tree_t *tr, void (*fu)(int), int level)
{
	if (tr && fu)
	{
		if (level == 1)
			fu(tr->n);
		else
		{
			print_at_level(tr->left, fu, level - 1);
			print_at_level(tr->right, fu, level - 1);
		}
	}

}
/**
 * binary_tree_height - it measures the height of a binary tree.
 *@tr: a pointer to the root node of the tree to measure the height.
 * Return: if tree is NULL, your function must return 0.
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
