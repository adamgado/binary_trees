#include "binary_trees.h"
/**
 * binary_tree_is_perfect - perfect or not a tree
 * @tree: tree to check
 * Return: 1 is it is or 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_factor = 0, right_factor = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL && tree->right != NULL)
	{
		left_factor = 1 + binary_tree_is_perfect(tree->left);
		right_factor = 1 + binary_tree_is_perfect(tree->right);
		if (right_factor == left_factor &&
		    right_factor != 0 && left_factor != 0)
		{
			return (1);
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
