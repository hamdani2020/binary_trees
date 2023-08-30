#include "binary_trees.h"

/**
 * binary_tree_preorder - this goes through a binary tree using pre-order.
 * @tr: this pointer points to the root node of the tree to traverse.
 * @fu: this function points to a pointer to call for each node.
 * Return: Nothing
*/
void binary_tree_preorder(const binary_tree_t *tr, void (*fu)(int))
{
    if (tr && fu)
    {
        fu(tr->n);
        binary_tree_preorder(tr->left, fu);
        binary_tree_preorder(tr->right, fu);
    }
}
