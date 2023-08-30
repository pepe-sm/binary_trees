#include "binary_trees.h"
/**
  * binary_tree_is_root - evaluate if root
  * @node: enode to analyse
  * Return: if root 1 else 0.
  */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
	{
		return (0);
	}
	if (!node->parent)
	{
		return (1);
	}
return (0);
}
