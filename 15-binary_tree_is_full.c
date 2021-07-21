#include "binary_trees.h"

/**
 * tree_height - Check if a binary tree is full
 * @tree: pointer to the node
 *
 * Return: 1 if full or 0 is not balance
 */

static int tree_height(const binary_tree_t *tree)
{
	if (tree->left && tree->right)
	{
		return (tree_height(tree->left) && tree_height(tree->right));
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	return (0);
}

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: pointer to the root
 *
 * Return: 1 if full, 0 is not balance
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	if (!tree->left || !tree->right)
	{
		return (0);
	}
	return (tree_height(tree->left) && tree_height(tree->right));
}
