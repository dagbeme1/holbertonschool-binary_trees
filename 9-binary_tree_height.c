#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t rs, ls;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
	return (0);
	}
	ls = binary_tree_height(tree->left);
	rs = binary_tree_height(tree->right);
	if (ls < rs)
		return (rs + 1);
	return (ls + 1);
}
