#include "binary_trees.h"

/**
 * binary_tree_postorder - This function goes through a binary tree using
 * post-order traversal.
 * @tree: It's a pointer to the root node of the tree to traverse.
 * @func: It's a pointer to a function to call for each node.
 *
 * Return: None.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
