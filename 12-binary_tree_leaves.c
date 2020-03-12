#include "binary_trees.h"

/**
 * binary_tree_leaves - measures the size of a binary tree
 * @tree: tree to be measured
 * Return: 0 if Tree is NULL, else returns height
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	const binary_tree_t *temp = tree;
	size_t count;

	if (tree == NULL)
	{
		return (0);
	}
	if (temp->right == NULL && temp->left == NULL)
	{
		return (1);
	}
	else
	{
		count = binary_tree_leaves(temp->right) + binary_tree_leaves(temp->left);
		return (count);
	}
}
