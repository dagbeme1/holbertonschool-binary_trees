#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @node: A pointer to the node to measure the depth.
 * Return: If tree is NULL, your function must return 0, else return the depth.
 */

size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t c = 0;

	if (node == NULL)
		return (0);
	while (node->parent != NULL)
	{
		node = node->parent;
		c++;
	}
	return (c);
}
