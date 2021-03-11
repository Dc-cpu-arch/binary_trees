#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a tree in pre-order traversal
 * @tree: reference to the root of the tree
 * @func: calls each node with it's value as parameter
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
