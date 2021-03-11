#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a tree
 * @tree: reference to the root
 * Return: tree's size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
        size_t subL = 0, subR = 0, size;

        if (!tree)
                return (0);
        if (tree->left != NULL)
                subL = binary_tree_size(tree->left);
        if (tree->right != NULL)
                subR = binary_tree_size(tree->right);
        size = subL + subR + 1;
        return (size);
}
