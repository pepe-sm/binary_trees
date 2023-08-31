#include "binary_trees.h"
#include "17-binary_tree_sibling.c"

/**
 * binary_tree_uncle - this finds the uncle of a node
 * @node: is pointer to node to find the uncle
 *
 * Return: uncle node,
 * NULL otherwise
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	return (binary_tree_sibling(node->parent)); /* the parent's sibling = uncle */
}
