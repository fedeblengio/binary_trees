#include "binary_trees.h"
/**
 *
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightnew, *auxiliar;
	rightnew = malloc(sizeof(binary_tree_t));
	if (!parent)
		return (NULL);

	rightnew->n = value;
	rightnew->parent = parent;
	rightnew->left = NULL;
	
	if(parent->right == NULL)
	{
		rightnew->right = NULL;
		parent->right = rightnew;
		return(rightnew);
	}
	auxiliar = parent->right;
	parent->right = rightnew;
	rightnew->right = auxiliar;
	return(auxiliar);
}
