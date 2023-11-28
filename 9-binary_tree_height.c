#include "binary_trees.h"

/**
 * binary_tree_height - deletor
 * @tree: tree
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftH, rightH;

	if (!tree)
		return (0);

	leftH = binary_tree_height(tree->left);
	rightH = binary_tree_height(tree->right);

	return ((leftH > rightH ? leftH : rightH) + 1);
}
