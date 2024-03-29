#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check if node is a leaf of a binary tree
 * @node: pointer to the node to check
 * Return: 1 if node is a leaf else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	return (0);
}
