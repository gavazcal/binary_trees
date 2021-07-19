#include "binary_trees.h"

/**
 * binary_tree_insert_left - creates a new node as a left oriented child node
 * @parent: the root node
 * @value: n value to populate new node
 * Return: pointer to new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child;

	if (parent == NULL)
		return (NULL);

	left_child = malloc(sizeof(binary_tree_t));

	if (left_child == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		left_child->left = parent->left;
		parent->left->parent = left_child;
	}
	else
	{
		left_child->left = NULL;
	}

	left_child->parent = parent;
	left_child->n = value;
	left_child->right = NULL;
	parent->left = left_child;


	return (left_child);
}
