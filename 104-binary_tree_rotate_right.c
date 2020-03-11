#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Performs a right-rotation on a binary tree
 * @tree: The binary tree to rotate
 *
 * Return: The pointer to the new root
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *root = NULL, *child = NULL;

	if (!tree)
		return (NULL);

	child = tree->left;
	tree->left = child->right;
	if (child->right != NULL)
		(child->right)->parent = tree;
	child->parent = tree->parent;
	if (tree->parent == NULL)
		root = child;
	else if (tree == (tree->parent)->right)
		(tree->parent)->right = child;
	else
		(tree->parent)->left = child;
	child->right = tree;
	tree->parent = child;

	if (root)
		return (root);
	return (child);
}
