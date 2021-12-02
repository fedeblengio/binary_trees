#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes
 * @tree: pointer to the root
 * Return: nodes
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t aux = 0;
if (!tree)
return (0);
if (tree->right || tree->left)
aux = binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left) + 1;
return (aux);
}
