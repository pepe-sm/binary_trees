#include "binary_trees.h"

/**
 * binary_tree_height -returns height of a binary tree
 * @tree: points to root node
 *
 * Return: height of nodes, else 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_leaf = 0, right_leaf = 0;

	if (!tree || (!tree->left_leaf && !tree->right_leaf))
		return (0);

	left_leaf = binary_tree_height(tree->left_leaf);
	right_leaf = binary_tree_height(tree->right_leaf);

	return (left_leaf >= right_leaf ? left_leaf + 1 : right_leaf + 1);
}
