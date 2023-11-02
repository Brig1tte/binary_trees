#include "binary_trees.h"

/**
 * binary_tree_nodes - funct counts nodes with at least 1 child in a B-tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: 0, if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right != NULL)
		nodes++;
	else if (tree->left != NULL && tree->right == NULL)
		nodes++;
	else
		return (tree->left + tree->right);

	return (nodes);
}
