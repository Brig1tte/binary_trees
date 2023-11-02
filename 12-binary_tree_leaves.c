#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_depth - a function that counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of leaves
 * Return: 0, if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int count = 0;

	if (tree->left == NULL && tree->right == NULL)
		count++;
}
