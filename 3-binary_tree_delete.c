#include "binary_trees.h"

/**
 * binary_tree_delete - This function deletes an entire binary tree.
 * @tree: It's a pointer to the root node of the tree to delete.
 *
 * Return: None.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
		tree = NULL;
	}
}
