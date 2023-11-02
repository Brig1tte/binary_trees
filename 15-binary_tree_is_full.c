#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_is_full - function checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 * Return: 0, if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int is_full_left, is_full_right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	is_full_left = binary_tree_is_full(tree->left);
	is_full_right = binary_tree_is_full(tree->right);

	if (tree->left && tree->right)
		return (is_full_left && is_full_right);

	return (0);
}
