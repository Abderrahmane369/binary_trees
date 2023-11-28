#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The height of the tree, or 0 if tree is NULL.
 */

size_t _bth_(const binary_tree_t *tree, int n)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (n == 1 ? -1 : 0);
	
	left_height = _bth_(tree->left, 1) + 1;
	right_height = _bth_(tree->right, 1) + 1;

	return (right_height > left_height ? right_height : left_height);
}

size_t binary_tree_height(const binary_tree_t *tree)
{
	return (_bth_(tree, 0));
}
