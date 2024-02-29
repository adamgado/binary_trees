#include "binary_trees.h"
/**
 * binary_tree_balance - measure balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
	return (0);
}
/**
 * binary_tree_height - measure height of binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: height of binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_len = 1;
	size_t right_len = 1;

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
