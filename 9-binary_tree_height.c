#include "binary_trees.h"

/**
 * binary_tree_height - it measures the height of the binary tree.
 * @tr: the pointer to a root node of the tree to measure the height.
 * Return: if the tree is NULL, function must return zero 0.
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
