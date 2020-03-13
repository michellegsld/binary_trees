#include "binary_trees.h"
/**
 * binary_tree_nodes - measure the number of nodes in a binary tree
 * @tree: tree at hand
 * Return: 0, or measure
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t lcount, rcount = 0;
	const binary_tree_t *temp = tree;

	if (tree == NULL)
		return (0);

	if (temp->left == NULL && temp->right == NULL)
	{
		return (1);
	}

	lcount = binary_tree_nodes(temp->left);
	rcount = binary_tree_nodes(temp->right);

	return (lcount + rcount + 1);
}