#include "binary_trees.h"

/**
 * binary_tree_delete - the function to delete the entire binary tree
 * @tr: pointer to the root node of the tree to delete
*/
void binary_tree_delete(binary_tree_t *tr)
{
    if (tr)
    {
        binary_tree_delete(tr->right);
        binary_tree_delete(tr->left);
        free(tr);
    }
}
