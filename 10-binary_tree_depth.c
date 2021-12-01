#include "binary_trees.h"
/**
 * binary_tree_depth - depth of the tree
 * @tree: tree to depth
 * Return: count of the depth tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int count = 0;

	while (tree->parent != NULL)
	{	count++;
		tree = tree->parent;
	}
	return (count);
}
