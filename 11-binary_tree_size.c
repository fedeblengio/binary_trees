#include "binary_trees.h"
/**
* binary_tree_size - size of a binary tree
* @tree: root node
* Return: size
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
if (!tree)
return (0);
return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
