#include "binary_trees.h"
#include "11-binary_tree_size.c"
#include "14-binary_tree_balance.c"
#include "15-binary_tree_is_full.c"

/**
 * binary_tree_is_perfect - this checks if a binary tree is perfect
 * @tree: is pointer to root node
 *
 * Return: 1 if perfect,
 * 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (binary_tree_size(tree->left) == binary_tree_size(tree->right))
	{
		if (binary_tree_is_full(tree) && !binary_tree_balance(tree))
			return (1);
	}
	return (0);
}
