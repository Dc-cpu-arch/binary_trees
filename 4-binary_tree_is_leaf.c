#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: reference to the node to check
 * Return: 1 if node is a leaf, 0 if its not
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
	{
		if (!node->left && !node->right)
			return (1);
		else
			return (0);
	}
	return (0);
}
