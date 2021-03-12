#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_is_bst - Checks if a binary tree is a valid BST
 * @tree: reference to the root
 * Return: 1 if a valid BST, 0 it isn't
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (bst_check(tree, INT_MIN, INT_MAX));
}

/**
 * bst_check - checks if a binary tree is a valid BST
 * @tree: reference to the root.
 * @lesser: to analyze lesser than root value
 * @greater: to analyze greater than root value
 * Return: 1 if a valid BST, 0 if it is not
 */

int bst_check(const binary_tree_t *tree, int lesser, int greater)
{
	if (!tree)
		return (1);

	if (tree->n >= greater || tree->n <= lesser)
		return (0);

	return ((bst_check(tree->left, lesser, tree->n)) &&
		(bst_check(tree->right, tree->n, greater)));
}
