#include "binary_trees.h"
/**
 * binary_tree_balance - measure the balance factor of a binary tree
 * @tree: tree at hand
 * Return: 0, or measure
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lheight, rheight = 0;
	const binary_tree_t *temp = tree;

	if (tree == NULL)
		return (0);

	if (temp->left == NULL && temp->right == NULL)
	{
		return (1);
	}

	lheight = binary_tree_balance(temp->left);
	rheight = binary_tree_balance(temp->right);

	return (lheight + rheight + 1);
}