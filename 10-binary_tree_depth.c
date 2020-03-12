#include "binary_trees.h"

/**
 * binary_tree_depth - measures the height of a binary tree
 * @tree: tree to be measured
 * Return: 0 if Tree is NULL, else returns height
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	const binary_tree_t *temp = tree;
	size_t count = 0;

	if (tree == NULL)
	{
		return (0);
	}
	while (temp->parent)
	{
		temp = temp->parent;
		count++;
	}
	return (count);
}
