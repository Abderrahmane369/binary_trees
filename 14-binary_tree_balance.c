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
 * binary_tree_balance -  a function that measures the balance factor.
 * @tree:  is a pointer to the root node of the tree.
 * Return: 1 or 0
 */
/*Balance Factor=Height of Left Subtree−Height of Right Subtree*/
int binary_tree_balance(const binary_tree_t *tree)
{
if (!tree)
return (0);
int balance_factor;
balance_factor = binary_tree_height(tree->left) -
	binary_tree_height(tree->right);
return (balance_factor);
}
