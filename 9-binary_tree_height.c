#include "binary_trees.h"

/**
 * binary_tree_height -returns height of a binary tree
 * @tree: points to root node
 *
 * Return: height of nodes, else 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (left >= right ? left + 1 : right + 1);
}
