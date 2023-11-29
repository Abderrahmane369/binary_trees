#include "binary_trees.h"

/**
 * _bth_ - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 * @n: helper
 * Return: The height of the tree, or 0 if tree is NULL.
 */

/*size_t _bth_(const binary_tree_t *tree, int n)
{
size_t left_height, right_height;
if (tree == NULL)
return (n == 1 ? -1 : 0);
left_height = _bth_(tree->left, 1) + 1;
right_height = _bth_(tree->right, 1) + 1;
return (right_height > left_height ? right_height : left_height);
}*/

size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_height, right_height;

    if (!tree)
        return 0;

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    return (left_height > right_height ? left_height : right_height) + 1;
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The height of the tree, or 0 if tree is NULL.
 */

/*size_t binary_tree_height(const binary_tree_t *tree)
{
return (_bth_(tree, 0));
}*/

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root of the tree
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t left_height, right_height;
if (!tree)
return (1);
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
return ((int)(left_height == right_height) &&
	binary_tree_is_perfect(tree->left) &&
	binary_tree_is_perfect(tree->right));
}
