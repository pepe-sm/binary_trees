#include "binary_trees.h"

/**
 * binary_tree_depth - this measures the depth of a node in a binary tree
 * @tree: is a pointer to the node to measure the depth
 *
 * Return: is depth of nodes,
 * 0 if tree is NULL
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree && tree->parent)
		return (binary_tree_depth(tree->parent) + 1);
	return (0);
}
