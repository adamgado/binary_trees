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
	size_t left_len = 0;
	size_t right_len = 0;

	if (tree == NULL)
	{
		return (0);
	}
	left_len = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_len = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return ((left_len > right_len) ? left_len : right_len);
}
