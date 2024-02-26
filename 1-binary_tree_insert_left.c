#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert node as left-child
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_t;

	if (parent == NULL)
	{
		return (NULL);
	}
	new_t = binary_tree_node(parent, value);
	if (new_t == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		new_t->left = parent->left;
		parent->left->parent = new_t;
	}
	parent->left = new_t;
	return (new_t);
}
