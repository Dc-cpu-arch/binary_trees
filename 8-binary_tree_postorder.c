#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a tree using post-order traversal
 * @tree: reference to the root
 * @func: function pointer, calls each node with it's value as parameter
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
