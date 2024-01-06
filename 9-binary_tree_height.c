#include "binary_trees.h"

/**
 * max - This function return the maximum of two numbers.
 * @a: It's the first number.
 * @b: It's the second number.
 *
 * Return: The maximun of the two numbers.
 */
size_t max(size_t a, size_t b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

/**
 * binary_tree_height - This function measures the height of a binary tree.
 * @tree: It's a pointer to the root node of the tree to delete.
 *
 * Return: The height of a binary tree or 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	else
		return (1 + max(left_height, right_height));
}
