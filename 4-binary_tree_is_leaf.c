#include "binary_trees.h"
/**
 *binary_tree_is_leaf - function that verify if have childrens.
 *@node: node that verify
 *Return: if is leaf or not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	
	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}
