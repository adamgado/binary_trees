#include "binary_trees.h"
/**
 * binary_tree_height - measure height of binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: height of binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_len = 0;
	size_t right_len = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL)
	{
		left_len = 1 + binary_tree_height(tree->left);
	}

	if (tree->right != NULL)
	{
		right_len = 1 + binary_tree_height(tree->right);
	}
	if (right_len >= left_len)
	{
		return (right_len);
	}
	return (left_len);
}
