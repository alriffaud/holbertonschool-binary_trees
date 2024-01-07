#include "binary_trees.h"

/**
 * binary_tree_uncle - This function finds the uncle of a node.
 * @node: It's a pointer to the node to check.
 *
 * Return: Pointer to the uncle node or null if failed.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
