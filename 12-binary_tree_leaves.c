#include "binary_trees.h"

/**
 * binary_tree_leaves - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of the tree, 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (!tree->left && !tree->right)
	{
		counter += 1;
	}
	counter += binary_tree_leaves(tree->left);
	counter += binary_tree_leaves(tree->right);
	return (counter);
}
