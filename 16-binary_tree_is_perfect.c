#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: reference to the root
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	size_t leftHeight = 1 + binary_tree_height(tree->left);
	size_t rightHeight = 1 + binary_tree_height(tree->right);

	return ((leftHeight > rightHeight) ? leftHeight : rightHeight);
}


/**
 * binary_tree_balance - measures the balance factor of a tree
 * @tree: reference to the root
 * Return: the balance between the left and right sub trees of a tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	return (binary_tree_height(tree->left) -
	binary_tree_height(tree->right));
}

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

/**
 * binary_tree_is_perfect - checks if a tree is perfect
 * @tree: reference to parent or root
 * Return: 1 if the tree is full and balanced, 0 if it isn't perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (binary_tree_balance(tree) == 0 && binary_tree_is_full(tree))
		return (1);
	return (0);
}
