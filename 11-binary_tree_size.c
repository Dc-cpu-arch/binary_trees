#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a tree
 * @tree: reference to the root
 * Return: tree's size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t treeSize;
	if (!tree)
		return (0);
	treeSize = binary_tree_size(tree->left)	
	+ 1 + binary_tree_size(tree->right);
	return (treeSize);
}
