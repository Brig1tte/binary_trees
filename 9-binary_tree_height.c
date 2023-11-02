#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: 0, if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	height(root) = tree;
	height(root->left)->left-height;
	height(root->right)->right-height;

	return (height(left-height, right-height) + 1);
}
