#include "binary_trees.h"

/**
 *binary_tree_inorder - traverse inorder
 *@tree: the tree
 *@func: function
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!func || !tree)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
