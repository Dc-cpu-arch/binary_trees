#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: is the parent of the new node
 * @value: goes inside new node
 * Return: a pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->left = NULL, new->right = NULL;
	new->n = value;
	new->parent = parent;
	return (new);
}
