#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree perfect else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height = 0;
	int left_factor = 0;
	int right_factor = 0;

	if (tree == NULL)
	{
		return (0);
	}
	while (tree->left != NULL && tree->right != NULL)
	{
		left_factor = 1 + binary_tree_is_perfect(tree->left);
		right_factor = 1 + binary_tree_is_perfect(tree->right);
		if (right_factor == left_factor && right_factor != 0 && left_factor != 0)
		{
			height = left_factor;
		}
		height = 0;
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		height = 1;
	}
	else
	{
		height = 0;
	}
	if (height != 0)
	{
		return (1);
	}
	return (0);
}
