#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * binary_tree_insert_left - insert node left
 * @parent: parent
 * @value: value
 * Return: binary_tree_t
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));

	if (!newNode)
		return (NULL);

	newNode->left = parent->left;
	newNode->right = NULL;
	newNode->n = value;
	newNode->parent = parent;

	if (parent->left)
		parent->left->parent = newNode;

	parent->left = newNode;

	return (newNode);
}
