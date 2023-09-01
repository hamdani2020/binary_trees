#include "binary_trees.h"

/**
 * binary_tree_rotate_right -  it performs a rigth-rotation on a binary tree
 * @tr: a pointer to binare_tree_t
 * Return: a pointer to the new root node of the tree once rotated;
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tr)
{
	binary_tree_t *aux, *temp;

	if (tr == NULL)
		return (NULL);
	if (tr->left)
	{
		temp = tr->left->right;
		aux = tr->left;
		aux->parent = tr->parent;
		aux->right = tr;
		tr->parent = aux;
		tr->left = temp;
		if (temp)
			temp->parent = tr;
		return (aux);
	}
	return (NULL);
}
