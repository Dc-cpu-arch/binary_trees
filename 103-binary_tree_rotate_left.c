#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree.
 * @tree: reference to the root
 * Return: reference to the new root
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	if (!tree)
		return (NULL);

	tree->parent = tree->right;
	if (tree->right)
	{

		tree->right = tree->parent->left;
		tree->parent->left = tree;
		tree = tree->parent;
		tree->parent = NULL;
	}
	return (tree);
}
