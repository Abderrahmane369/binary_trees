#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: is a pointer to the node to measure the depth
 * Return: the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth = 0;
const binary_tree_t *ptr;
if (!tree)
return (0);
ptr = tree;
while (ptr->parent)
{
depth++;
ptr = ptr->parent;
}
return (depth);
}
