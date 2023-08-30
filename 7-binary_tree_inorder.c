#include "binary_trees.h"

/**
 * binary_tree_inorder - this function goes through binary tree using inorder.
 * @tr: the pointer to the root node of the tree to traverse.
 * @fu: the pointer to the function to call for each node
*/
void binary_tree_inorder(const binary_tree_t *tr, void(*fu)(int))
{
    if (tr && fu)
    {
        binary_tree_inorder(tr->left, fu);
        fu(tr->n);
        binary_tree_inorder(tr->right, fu)
    }
}
