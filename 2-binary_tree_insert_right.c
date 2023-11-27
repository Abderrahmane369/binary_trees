#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child.
 * @parent: is a pointer to the node to insert the right-child in.
 * @value:  is the value to store in the new node.
 * Return:  a pointer to the created node, or NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
if (!parent)
return (NULL);
binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
if (!new_node)
return (NULL);
new_node->n = value;
new_node->parent = parent;
new_node->left = NULL;
new_node->right = NULL;
if (parent->right)
{
new_node->right = parent->right;
new_node->right->parent = new_node;
}
parent->right = new_node;
return (new_node);
}
