#include "binary_trees.h"
/**
 * binary_tree_is_root - this checks if a particular node is a root
 * @node: this pointer points to the node to be checked.
 * Return: 1 if the new node is root, otherwise return zero 0.
 * 
*/
int binary_tree_is_root(const binary_tree_t *node)
{
    if (node == NULL)
    return (0);
    if (node->parent == NULL)
    return (1);
    else
        return (0);
}
