#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: tree to be measured
 * Return: 0 if Tree is NULL, else returns height
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	const binary_tree_t *temp = tree;
	size_t count;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		count = binary_tree_size(temp->right) + 1 + binary_tree_size(temp->left);
		return (count);
	}
}
