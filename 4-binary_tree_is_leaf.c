#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: The node to check
 *
 * Return: 1 if node is a leaf, 0 if it isn't
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && (node->left == NULL && node->right == NULL))
		return (1);

	return (0);
}
