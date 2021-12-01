#include "binary_trees.h"

/**
* binary_tree_insert_left - node to insert the left
* @value: The value to put in the new node
* @parent:Is the value to store in the new node
* Return: New node or NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *node;

if (!parent)
return (NULL);
node = binary_tree_node(parent, value);
if (!node)
return (NULL);
node->left = parent->left;
if (node->left)
node->left->parent = node;
parent->left = node;
return (node);
}
