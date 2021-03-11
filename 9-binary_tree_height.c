#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: reference to the root
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight, rightHeight;

	if (!tree)
		return (0);
	leftHeight = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	rightHeight = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return ((leftHeight > rightHeight) ? leftHeight : rightHeight);
}
