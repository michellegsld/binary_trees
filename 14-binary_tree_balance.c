#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - measure the balance factor of a binary tree
 * @tree: tree at hand
 * Return: 0, or measure
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	const binary_tree_t *temp = tree;

	if (tree == NULL)
		return (0);

	return (binary_tree_height(temp->left) - binary_tree_height(temp->right));
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to be measured
 * Return: 0 if Tree is NULL, else returns height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lcount, rcount;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		lcount = binary_tree_height(tree->left);
		rcount = binary_tree_height(tree->right);

		if (lcount > rcount)
			return (lcount + 1);
		else
			return (rcount + 1);
	}
}
