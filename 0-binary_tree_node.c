#include "binary_trees.h"

/**
 * binary_tree_node - creates binary tree node
 * @parent: points to parent node
 * @value: value to aadd to node
 *
 * Return: pointer to node or Null on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node = NULL;

	n_node = malloc(sizeof(binary_tree_t));
	if (!n_node)
	{
		free(n_node);
		return (NULL);
	}

	n_node->n = value;
	n_node->parent = parent;
	n_node->left = NULL;
	n_node->right = NULL;

	return (n_node);
}
