#include "binary_trees.h"

/**
 * binary_tree_size - goes through a binary tree using postorder traversal
 * @tree:  is a pointer to the root node of the tree to traverse
 * Return: nothing
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
