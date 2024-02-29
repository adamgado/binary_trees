#include "binary_trees.h"
/**
 * binary_tree_sibling - find sibling of node in binary tree
 * @node: pointer to the node to find the sibling of
 * Return: pointer to sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	return (node->parent->left);
}
