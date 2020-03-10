#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: parent node
 * @value: some value of the node
 * Return: pointer to a node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (parent->left != NULL)
	{
		parent->left->parent = new_node;
		new_node->left = parent->left;
		parent->left = new_node;
	}
	else
	{
		parent->left = new_node;
	}
	return (new_node);
}
