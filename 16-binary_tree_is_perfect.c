#include "binary_trees.h"
/**
 * compare_depth - calculate depth
 * @tree: pointer to the root of the binary tree
 * Return: depth
 */
int depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (1 + depth(tree->left) + depth(tree->right));
}
/**
 * binary_tree_is_perfect - check if binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is perfect else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_factor = 0, right_factor = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree != NULL && tree->left == NULL &&
	    tree->right == NULL)
	{
		return (1);
	}
	left_factor = depth(tree->left);
	right_factor = depth(tree->right);

	if (left_factor == right_factor)
	{
		return (1);
	}
	return (0);
}
