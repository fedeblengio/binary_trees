#include "binary_trees.h"
/**
 * 
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nodonew;
	
	nodonew = malloc(sizeof(binary_tree_t));
	if(!nodonew)
		return(NULL);
	nodonew->parent = parent;
	nodonew->n = value;
	nodonew->right = NULL;
	nodonew->left = NULL;
	return(nodonew);
}
