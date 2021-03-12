#include "binary_trees.h"

/**
 * bst_intert - inserts a value in a BST
 * @tree: reference to the root
 * @value: goes inside the node to insert
 * Return: reference to the new node
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *current = NULL, *parent = NULL;

	if (!*tree)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}
	current = *tree;
	while (current)
	{
		parent = current;
		if (current->n == value)
			return (NULL);
		if (current->n < value)
			current = current->right;
		else
			current = current->left;
	}
	if (parent->n < value)
	{
		parent->right = binary_tree_node(parent, value);
		return (parent->right);
	}
	else
	{
		parent->left = binary_tree_node(parent, value);
		return (parent->left);
	}
	return (NULL);
}
