#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer
 * Return: 1 or 0
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
int aux = 0;
if (!tree)
return (0);
if (!tree->right && !tree->left)
return (1);
else if (tree->right && tree->left)
aux = binary_tree_is_full(tree->right) * binary_tree_is_full(tree->left);
return (aux);
}
