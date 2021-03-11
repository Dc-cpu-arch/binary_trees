#include "binary_trees.h"

/**
 * binary_tree_uncle -  finds if a node have uncle
 * @node: reference to the node to find the uncle
 * Return: pointer to the uncle, NULL if there's no uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
