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
 *binary_tree_is_perfect - Function that verify if the tree is perfect
 *@tree: arbol binarii
 *Return: 1 if pro 0 if kk
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *left, *right;

	if (tree == NULL)
		return (0);
	left = tree->left;
	right = tree->right;
	if (binary_tree_is_leaf(tree))
		return (1);
	if (left == NULL || right == NULL)
		return (0);
	if (binary_tree_height(right) == binary_tree_height(left))
	{
		if (binary_tree_is_perfect(right) && binary_tree_is_perfect(left))
			return (1);
	}
	return (0);
}
