#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: If tree is NULL, return 0, else return balance factor.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int rh, lh;

	if (tree == NULL)
		return (0);
	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);
	return (lh - rh);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t rs, ls;

	if (tree == NULL)
		return (0);
	ls = binary_tree_height(tree->left);
	rs = binary_tree_height(tree->right);
	if (ls > rs)
		return (ls + 1);
	return (rs + 1);
}
