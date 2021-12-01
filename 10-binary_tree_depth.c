#include "binary_trees.h"
/**
 * binary_tree_depth - depth of the tree
 * @tree: tree to depth
 * Return: count of the depth tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		count++;
		tree = tree->parent;
	}
	return (count);
}
