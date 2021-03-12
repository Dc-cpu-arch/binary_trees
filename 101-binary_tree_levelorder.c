#include "binary_trees.h"
/**
 * binary_tree_levelorder - goes through a BST using level-order traversal
 * @tree: reference to the root of the BST
 * @func: calls to each node, passing its value as argument
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, i;

	if (!tree || !func)
		return;
	height = level_tree_height(tree);
	for (i = 0; i < height; i++)
		print_tree_level(tree, i, func);
}
/**
 * level_tree_height - measures the height of a binary tree
 * @tree: referece to the root of the tree
 * Return: tree's height
 */
size_t level_tree_height(const binary_tree_t *tree)
{
	size_t l_height = 0, r_height = 0;

	if (tree)
	{
		if (tree->left)
			l_height = level_tree_height(tree->left);
		if (tree->right)
			r_height = level_tree_height(tree->right);
		if (l_height >= r_height)
			return (l_height + 1);
		else
			return (r_height + 1);
	}
	else
		return (0);
}
/**
 * print_tree_level - prints the tree based on a level from a binary tree
 * @tree: pointer to the root of the tree.
 * @level: level of the current tree.
 * @func: reference to the given function to execute.
 */
void print_tree_level(const binary_tree_t *tree, size_t level,
		      void (*func)(int))
{
	if (tree == NULL)
		return;
	if (level == 0)
		func(tree->n);
	else if (level > 0)
	{
		print_tree_level(tree->left, level - 1, func);
		print_tree_level(tree->right, level - 1, func);
	}
}
