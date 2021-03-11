#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as right child of another
 * @parent: points to new node's parent
 * @value: goes inside new node
 * Return: reference to the new node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);
	if (parent->right)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;
	return (new);
}
