#include "binary_trees.h"

/**
 * *binary_tree_sibling - a function that finds the sibling of a node
 * @node: a pointer to the node to find the sibling
 * Return: NULL, if node is NULL, node has no sibling or the parent is NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL && node->tree == NULL)
		return (NULL);

	if (node->tree->left == node)
		return (node->tree->right);

	return (node->tree->left);
}
