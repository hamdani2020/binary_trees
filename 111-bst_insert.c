#include "binary_trees.h"
/**
 * bst_insert - it inserts a value in a Binary Search Tree.
 * @tr: a double pointer to the root node of the BST to insert the value.
 * @value: the value to store in the node to be inserted.
 * Return: 0
 */
bst_t *bst_insert(bst_t **tr, int value)
{
	bst_t *aux = NULL;

	if (tr == NULL)
		return (NULL);
	if (*tr == NULL)
	{
		*tr = binary_tree_node(NULL, value);
		return (*tr);
	}
	aux = *tr;
	if (value < aux->n)
	{
		if (aux->left == NULL)
		{
			aux->left = binary_tree_node(aux, value);
			return (aux->left);
		}
		return (bst_insert(&(aux->left), value));
	}
	if (value > aux->n)
	{
		if (aux->right == NULL)
		{
			aux->right = binary_tree_node(aux, value);
			return (aux->right);
		}
		return (bst_insert(&(aux->right), value));
	}
	return (NULL);
}
