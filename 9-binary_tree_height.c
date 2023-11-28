#include "binary_trees.h"

/**
 *binary_tree_delete - deletor
 *@tree: tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
				size_t leftH, rightH;

				if (!tree)
								return (-1);

				leftH = binary_tree_height(tree->left) + 1;
				rightH = binary_tree_height(tree->right) + 1;

				return (leftH > rightH ? leftH : rightH);
}

