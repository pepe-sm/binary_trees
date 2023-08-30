#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node on right side of new parent
 * @parent: points to parent
 * @value: val stored in the new node
 *
 * Return: pointer to new node,Null on failure
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node = NULL;

	if (!parent)
		return (NULL);

	n_node = binary_tree_node(parent, value);
	if (!n_node)
		return (NULL);

	if (parent->right)
	{
		n_node->right = parent->right;
		parent->right = n_node;
		n_node->right->parent = n_node;
		n_node->left = NULL;
	}
	parent->right = n_node;

	return (n_node);
}
