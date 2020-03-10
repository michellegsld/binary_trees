#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a tree by pre-order traversal
 * @tree: The binary tree to traverse
 * @func: The function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	if (tree->left)
		binary_tree_preorder(tree->left, *func);

	if (tree->right)
		binary_tree_preorder(tree->right, *func);
}
