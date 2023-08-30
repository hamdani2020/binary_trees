#include "binary_trees.h"

/**
 * binary_tree_postorder - this goes through the binary tree using post - order.
 * @tr: the pointer to the root node of the tree to traverse
 * @fu: the pointer to a function to call for each node.
*/
void binary_tree_postorder(const binary_tree_t *tr, void(*fu)(int))
{
    if (tr && fu)
    {
        binary_tree_preorder(tr->left, fu);
        binary_tree_preorder(tr->right, fu);
        fu(tr->n);
    }
}
