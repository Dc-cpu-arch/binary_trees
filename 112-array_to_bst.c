#include "binary_trees.h"
/**
 * array_to_bst - builds a BST from an int array
 * @array: reference to index 0 of the array
 * @size: array's size
 * Return: reference to the root of the new BST
 */

bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root = NULL;

	if (!array || !size)
		return (NULL);
	root = binary_tree_node(NULL, array[0]);

	while (size > 0)
	{
		bst_insert(&root, *array);
		array++;
		size--;
	}
	return (root);
}
