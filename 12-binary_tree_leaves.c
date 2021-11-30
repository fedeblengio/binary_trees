#include "binary_trees.h"
/**
 *
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int count = 0;

	if (!tree)
		return 0;

	if (tree->right == NULL && tree->left != NULL)
		count = 1;
	if (tree->left == NULL && tree->right != NULL)
		count = 1;
	if (tree->left != NULL && tree->right != NULL)
		count = 2;
	return (count);
}
