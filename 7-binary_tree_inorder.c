#include "binary_trees.h"
/**
 *binary_tree_inorder - in-order traversal
 *@tree: is a pointer
 *@func: is a pointer
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{

if (!tree)
return;

if (!func)
return;

binary_tree_inorder(tree->left, func);
func(tree->n);
binary_tree_inorder(tree->right, func);

}
