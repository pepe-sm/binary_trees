#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node, left side
 * @parent: points to node to add node on left
 * @value: val stored in node
 *
 * Return: pointer to new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;

	if (!parent)
		return (NULL);

	n_node = binary_tree_node(parent, value);

	if (!n_node)
		return (NULL);

	if (parent->left)
	{
		n_node->left = parent->left;
		parent->left->parent = n_node;
	}
	parent->left = n_node;

	return (n_node);
}
