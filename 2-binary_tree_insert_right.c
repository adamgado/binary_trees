#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert node as right-child
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	if (parent->right != NULL)
	{
		new_t->right = parent->right;
		parent->right->parent = new_t;
	}
	parent->right = new_t;
	return (new_t);
}
