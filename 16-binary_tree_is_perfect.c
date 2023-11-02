#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function checks if the binary tree is perfect
 * @tree: A pointer to the root of the tree
 * Return: 1 if binary tree is perfect or 0 in otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if ((binary_tree_is_full(tree) == 1) &&
	    (binary_tree_balance(tree) == 0))
		return (1);

	return (0);
}

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

/**
 * binary_tree_balance - function measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: 0, if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree == NULL)
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	return ((int)(height_left - height_right));
}

/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: 0, if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right;

	if (tree == NULL)
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	if (height_left > height_right)
		return (height_left + 1);
	else
		return (height_right + 1);
}
