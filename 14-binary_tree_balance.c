#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: reference to root or parent
 * Return: tree's height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight, rightHeight;

	leftHeight = 1 + binary_tree_height(tree->left);
	rightHeight = 1 + binary_tree_height(tree->right);

	return ((leftHeight > rightHeight) ? leftHeight : rightHeight);
}

/**
 * binary_tree_balance - measures the balance factor of a tree
 * @tree: reference to the root
 * Return: the balance between the left and right sub trees of a tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) -
	binary_tree_height(tree->right));
}
