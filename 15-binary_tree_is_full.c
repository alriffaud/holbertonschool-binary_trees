#include "binary_trees.h"

/**
 * binary_tree_is_full - This function checks if a binary tree is full.
 * @tree: It's a pointer to the root node of the tree to delete.
 *
 * Return: 1 if the binary tree is full. 0 if it isn't full or if it is NULL.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else if ((tree->left != NULL && tree->right == NULL) ||
		(tree->left == NULL && tree->right != NULL))
		return (0);
	else
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
