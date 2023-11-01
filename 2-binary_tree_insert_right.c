#include "binary_trees.h"

/**
 * *binary_tree_insert_right - funct to insert a node(right-child) of another
 * *parent: a pointer to the node to insert the right-child in
 * value: the value to store in the new node
 * Return: a pointer to the created node, NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t new_node;

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
