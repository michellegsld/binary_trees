#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Performs a left-rotation on a binary tree
 * @tree: The binary tree to rotate
 *
 * Return: The pointer to the new root
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *root = NULL, *child = NULL;

	if (!tree)
		return (NULL);

	child = tree->right;
	tree->right = child->left;
	if (child->left != NULL)
		(child->left)->parent = tree;
	child->parent = tree->parent;
	if (tree->parent == NULL)
		root = child;
	else if (tree == (tree->parent)->left)
		(tree->parent)->left = child;
	else
		(tree->parent)->right = child;
	child->left = tree;
	tree->parent = child;

	if (root)
		return (root);
	return (child);
}
