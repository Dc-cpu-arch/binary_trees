#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a tree
 * @tree: reference to the root
 * Return: total of leaves in the tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t Lleaves, Rleaves;

	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	Lleaves = binary_tree_leaves(tree->left);
	Rleaves = binary_tree_leaves(tree->right);

	return (Lleaves + Rleaves);
}
