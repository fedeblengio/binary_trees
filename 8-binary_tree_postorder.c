#include "binary_trees.h"
/**
 *binary_tree_postorder - functiont that print tree in post-order
 *@tree: tree created
 *@func: function for call the node and add value to the node
 *Return: tree in post order
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
		if (tree->left != NULL)
			binary_tree_postorder(tree->left, func);
		if (tree->right != NULL)
			binary_tree_postorder(tree->right, func);
		func(tree->n);
}
