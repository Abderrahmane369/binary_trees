#include "binary_trees.h"

/**
 *binary_tree_is_root - is root or not
 *@node: node
 *Return: O or 1
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->parent)
		return (1);

	return (0);
}
