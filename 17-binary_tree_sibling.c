#include "binary_trees.h"
/**
 * binary_tree_sibling - find sibling
 * @node: node
 * Return: return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

binary_tree_t *izq;
binary_tree_t *der;

if (!node)
return (NULL);
if (!node->parent)
return (NULL);

der = node->parent->right;
izq = node->parent->left;

if (der == node)
return (izq);
return (der);
}
