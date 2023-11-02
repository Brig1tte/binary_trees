#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_preorder - funct goes through a B-tree using pre-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 * DESC: The value in the node must be passed as a parameter to this function
 * Return: If tree or func is NULL, do nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL && func == NULL)
		return;
	
	printf("%c ", tree->n);

	func () = preorder;
	preorder(tree->left);
	preorder(tree->right);
}
