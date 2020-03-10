#include "binary_trees.h"
#include <limits.h>
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to be measured
 * Return: 0 if Tree is NULL, else returns height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lcount, rcount;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
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
