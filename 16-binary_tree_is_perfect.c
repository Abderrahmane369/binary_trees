#include "binary_trees.h"

/**
 * binary_tree_height - returns the height of a binary tree
 * @tree: pointer to the root of the tree
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height, right_height;
if (!tree)
return (0);
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
return ((left_height > right_height ? left_height : right_height) +1);
}


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
