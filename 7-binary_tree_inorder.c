#include "binary_trees.h"

/**
 * binary_tree_inorder - funct goes through a B-tree using in-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func:  a pointer to a function to call for each node
 * DESC: The value in the node must be passed as a parameter to this function
 * Return: If tree or func is NULL, do nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (root == NULL)
		return;

	inoder(root->left);
	printf("%c ", root->binary_tree_t);
	inorder(root->right;
}
