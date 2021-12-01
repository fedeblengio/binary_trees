#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert a new node in the position right
 * @parent: father
 * @value: value of the new node
 * Return: the new node in the right
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightnew, *auxiliar;

	if (parent == NULL)
		return NULL;

	rightnew = malloc(sizeof(binary_tree_t));
	if (rightnew != NULL)
	{
		rightnew->n = value;
		rightnew->parent = parent;
		rightnew->left = NULL;

		if (parent->right == NULL)
		{
			rightnew->right = NULL;
			parent->right = rightnew;
			return (rightnew);
		}
		auxiliar = parent->right;
		parent->right = rightnew;
		rightnew->right = auxiliar;
	}
		return (auxiliar);
}
