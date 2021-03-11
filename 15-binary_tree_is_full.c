#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a tree is full
 * @tree: reference to the root
 * Return: 1 if the tree is full, 0 if its not
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int leftChild, rightChild;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	leftChild = binary_tree_is_full(tree->left);
	rightChild = binary_tree_is_full(tree->right);
	return ((leftChild == 0 || rightChild == 0) ? : 1);
}
