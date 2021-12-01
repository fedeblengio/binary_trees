#include "binary_trees.h"
/**
 *binary_tree_height - functiont that measures height of the tree
 *@tree: treebinary
 *Return: the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);

	right = binary_tree_height(tree->right);
	left = binary_tree_height(tree->left);
	if (right >= left)
		return (right + 1);
	else
		return (left + 1);

}
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
/**
 *binary_tree_balance - function that calculate balance
 *@tree: arbol
 *Return: balance of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0;
	int left = 0;

	if (tree == NULL)
		(return 0);
	if (tree->right)
		right = binary_tree_height(tree->right) + 1;
	if (tree->left)
		left = binary_tree_height(tree->left) + 1;
	return (left - right);
}
