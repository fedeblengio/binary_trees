#include "binary_trees.h"
/**
 *binary_tree_leaves - function that counts the leaves in tree
 *@tree: tree binary
 *Return: leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
