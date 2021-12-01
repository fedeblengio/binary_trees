#include "binary_trees.h"
#include <stdio.h>
/**
 *binary_tree_preorder - function that goes through in pre-order traversal
 *@tree: tree pointer to the root tree
 *@func: function for call each node
 *Return: function
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		func(tree->n);
		if (tree->left != NULL)
			binary_tree_preorder(tree->left, func);
		if (tree->right != NULL)
			binary_tree_preorder(tree->right, func);
	}
}
