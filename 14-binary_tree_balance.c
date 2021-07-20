#include "binary_trees.h"

/**
 * tree_height - calculates the length of each side of the tree
 * @tree: the tree to count
 * Return: length
 */

int tree_height(const binary_tree_t *tree)
{
	int left_idx = 0, right_idx = 0;

	if (tree == NULL)
		return (0);

	left_idx += tree_height(tree->left) + 1;
	right_idx += tree_height(tree->right) + 1;

	if (left_idx > right_idx)
		return (left_idx);
	return (right_idx);
}

/**
 * binary_tree_balance - measures balance of a binary tree
 * @tree:  the tree to measure
 * Return: int representation of balance
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_idx, right_idx;

	if (!tree)
		return (0);

	left_idx = tree_height(tree->left);
	right_idx = tree_height(tree->right);
	return (left_idx - right_idx);
}
