#include "binary_trees.h"
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
