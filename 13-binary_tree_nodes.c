#include "binary_trees.h"

/**
 * binary_tree_nodes - funct counts nodes with at least 1 child in a B-tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: 0, if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t leftNodes, rightNodes;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	leftNodes = binary_tree_nodes(tree->left);
	rightNodes = binary_tree_nodes(tree->right);

	return (1 + leftNodes + rightNodes);
}
