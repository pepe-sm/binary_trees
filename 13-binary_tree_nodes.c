#include "binary_trees.h"

/**
 * binary_tree_nodes - this counts how many nodes a tree has
 *
 * @tree: is pointer to root node of tree
 *
 * Return: is the number or nodes, 0 if tree does not exist
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);

	nodes += (tree->left || tree->right) ? 1 : 0;
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	return (nodes);
}
