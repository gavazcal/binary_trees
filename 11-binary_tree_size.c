#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of the tree, 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t counter = 1;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL)
	{
		counter += binary_tree_size(tree->left);
	}
	if (tree->right != NULL)
	{
		counter += binary_tree_size(tree->right);
	}
	return (counter);
}
