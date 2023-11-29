#include "binary_trees.h"
/**
 * binary_tree_is_full - is it full?
 * @tree: the tree
 * Return: 1 if full or 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);

	if ((tree->left != NULL) + (tree->right != NULL) == 1)
		return (0);

	l = binary_tree_is_full(tree->left);
	r = binary_tree_is_full(tree->right);
	return ((l + r + 1) % 2);
}
