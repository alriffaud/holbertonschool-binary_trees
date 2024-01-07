#include "binary_trees.h"

/**
 * binary_tree_sibling - This function finds the sibling of a node.
 * @node: It's a pointer to the node to check.
 *
 * Return: Pointer to the silbing node or null if failed.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
