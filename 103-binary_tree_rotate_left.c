#include "binary_trees.h"

/**
 * binary_tree_rotate_left - it performs a left-rotation on a binary tree
 * @tr: a pointer to binare_tree_t
 * Return: a pointer to the new root node of the tree once rotated;
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tr)
{
	binary_tree_t *aux, *temp;

	if (tr == NULL)
		return (NULL);
	if (tr->right)
	{
		temp = tr->right->left;
		aux = tr->right;
		aux->parent = tr->parent;
		aux->left = tr;
		tr->parent = aux;
		tr->right = temp;
		if (temp)
			temp->parent = tr;
		return (aux);
	}
	return (NULL);
}
