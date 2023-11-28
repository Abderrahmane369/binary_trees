#include "binary_trees.h"

/**
 * binary_tree_sibling - goes through a binary tree using postorder traversal
 * @node:  is a pointer to the root node of the tree to traverse
 * Return: nothing
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node || !node->parent)
		return (NULL);

	parent = node->parent;

	return (node == parent->right ? parent->left : parent->right);
}
