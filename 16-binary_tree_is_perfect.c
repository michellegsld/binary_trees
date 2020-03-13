#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks to see if a binary tree is perfect
 * @tree: binary tree to be checked
 * Return: 0, 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	const binary_tree_t *temp = tree;
	int lefter, righter;

	if (tree == NULL)
		return (0);

	if (temp->left == NULL && temp->right == NULL)
		return (0);

	if (temp->left == NULL || temp->right == NULL)
		return (1);

	lefter = binary_tree_is_perfect(tree->left);
	righter = binary_tree_is_perfect(tree->left);
	return (lefter && righter);
}
