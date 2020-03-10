#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a tree by post-order traversal
 * @tree: The binary tree to traverse
 * @func: The function to call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree->left)
		binary_tree_postorder(tree->left);

	if (tree->right)
		binary_tree_postorder(tree->right);

	func(tree->n);
}