#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of the tree, 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t counter_1 = 0, counter_2 = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL)
	{
		counter_1 += 1;
		counter_1 += binary_tree_height(tree->left);
	}
	if (tree->right != NULL)
	{
		counter_2 += 1;
		counter_2 += binary_tree_height(tree->right);
	}
	if (counter_1 > counter_2)
	{
		return (counter_1);
	}
	else
	{
		return (counter_2);
	}
}
