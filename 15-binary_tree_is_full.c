#include "binary_trees.h"
/**
 * binary_tree_is_full - check if binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if tree is NULL or is not full else 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int right_full = 1;
	int left_full = 1;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree != NULL)
	{
		if (tree->left != NULL)
		{
			left_full = binary_tree_is_full(tree->left);
		}
		if (tree->right != NULL)
		{
			right_full = binary_tree_is_full(tree->right);
		}
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    (right_full == 0) || (left_full == 0))
		{
			return (0);
		}
	}
	return (1);
}
