#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling
 * @node: pointer node
 * Return: sibling node
 * @node: returns NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (!node->parent || !node)
return (NULL);
if ((node->parent->right) == node)
return (node->parent->left);
return (node->parent->right);
}
