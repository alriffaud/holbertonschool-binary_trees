#include "binary_trees.h"

/**
 * binary_tree_nodes - This function counts the nodes in a binary tree.
 * @tree: It's a pointer to the root node of the tree to delete.
 *
 * Return: The number of nodes of the binary tree or 0 if tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	else
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
