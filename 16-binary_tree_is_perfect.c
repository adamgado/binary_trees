#include "binary_trees.h"
/**
 * perfect_tree_loop - check if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: level of height or 0 if tree is not perfect
 */
int perfect_tree_loop(const binary_tree_t *tree)
{
	int left_factor = 0;
	int right_factor = 0;

	if (tree->left != NULL && tree->right != NULL)
	{
		left_factor = 1 + perfect_tree_loop(tree->left);
		right_factor = 1 + perfect_tree_loop(tree->right);
		if (right_factor == left_factor && right_factor != 0 && left_factor != 0)
		{
			return (right_factor);
		}
		return (0);
	}
	else if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * binary_tree_is_perfect - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree perfect else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		height = perfect_tree_loop(tree);
		if (height != 0)
		{
			return (1);
		}
		return (0);
	}
}
