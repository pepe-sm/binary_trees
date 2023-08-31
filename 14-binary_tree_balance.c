
#include "binary_trees.h"

/**
 * binary_tree_balance - this measures the balance factor of a binary tree
 * @tree: is pointer to root node
 *
 * Return: the balance factor,
 * 0 otherwise
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return (left - right);
}

/**
 * binary_tree_height - this  measures the height of a binary tree
 * @tree: is pointer to root node
 *
 * Return: the height of nodes,
 * 0 otherwise
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (left >= right ? left + 1 : right + 1);
}
