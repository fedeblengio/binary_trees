#include "binary_trees.h"

/**
* binary_tree_delete - a function that delate binary tree
* @tree: the binary tree
* Return: return
*/

void binary_tree_delete(binary_tree_t *tree)
{
if (!tree)
return;
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);
free(tree);
}
