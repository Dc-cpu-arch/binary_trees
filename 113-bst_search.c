#include "binary_trees.h"
/**
 * bst_search - searches for a value in a BST
 * @tree: reference to the BST to be analized
 * @value: value to look inside the BST
 * Return: reference to the match
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *node = NULL;

	if (!tree)
		return (NULL);
	node = (bst_t *)tree;
	while (node)
	{
		if (node->n == value)
			return (node);
		if (node->n < value)
			node = node->right;
		else
			node = node->left;
	}
	return (NULL);
}
