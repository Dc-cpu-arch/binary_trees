#include "binary_trees.h"

/**
 * binary_tree_ancestor - finds the lowest common ancestor of two nodes
 * @first: reference to the first node
 * @second: reference to the second node
 * Return: a pointer to the lowest common ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *ancestor;

	if (!first || !second)
		return (NULL);
	ancestor = (binary_tree_t *)second;
	while (first)
	{
		while (second)
		{
			if (first == second)
				return ((binary_tree_t *)first);
			second = second->parent;
		}
		second = ancestor;
		first = first->parent;
	}
	return (NULL);
}
