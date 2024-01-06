#include "binary_trees.h"

/**
 * binary_tree_depth - This function measures the depth of a binary tree.
 * @tree: It's a pointer to the root node of the tree to delete.
 *
 * Return: The depth of a binary tree or 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	return (1 +  binary_tree_depth(tree->parent));
}
