#include "binary_trees.h"

int binary_tree_is_full(const binary_tree_t *tree);
size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_is_perfect - checks to see if a binary tree is perfect
 * @tree: binary tree to be checked
 * Return: 0, 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_is_full(tree) &&
	(binary_tree_height(tree->left) == binary_tree_height(tree->right)))
		return (1);

	return (0);
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: tree to be examined
 * Return: 0 if NULL, or 1 if full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	const binary_tree_t *temp = tree;

	if (tree == NULL)
		return (0);

	if (temp->left == NULL && temp->right == NULL)
		return (1);

	if (temp->left && temp->right)
	{
		return (binary_tree_is_full(temp->left) && binary_tree_is_full(temp->right));
	}
	return (0);
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
