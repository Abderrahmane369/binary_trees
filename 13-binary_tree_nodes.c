#include "binary_trees.h"

/**
 * binary_tree_nodes - goes through a binary tree using postorder traversal
 * @tree:  is a pointer to the root node of the tree to traverse
 * Return: nothing
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int val;

	if (!tree)
		return (0);

	val = (tree->left || tree->right) ? 1 : 0;
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + val);
}
