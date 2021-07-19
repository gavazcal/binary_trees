#include "binary_trees.h"

/**
 * binary_tree_insert_right - creates a new node as a right oriented child
 * @parent: root node
 * @value: n value to populate the child
 * Return: pointer to new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;

	if (parent == NULL)
		return (NULL);

	right_child = malloc(sizeof(binary_tree_t));

	if (right_child == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		right_child->right = parent->right;
		parent->right->parent = right_child;
	}

	else
	{
		right_child->right = NULL;
	}

	right_child->parent = parent;
	right_child->n = value;
	right_child->left = NULL;
	parent->right = right_child;

	return (right_child);
}
