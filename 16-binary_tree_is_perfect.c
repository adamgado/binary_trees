#include "binary_trees.h"
/**
 * binary_tree_is_perfect - check if binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree perfect else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int full_factor;
	int balance_factor;

	if (tree == NULL)
	{
		return (0);
	}
	full_factor = binary_tree_is_full(tree);
	balance_factor = binary_tree_balance(tree);
	if (full_factor == 1 && balance_factor == 1)
	{
		return (1);
	}
	return (0);
}
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
		    right_full == 0 || left_full == 0)
		{
			return (0);
		}
	}
	return (1);
}
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
		if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
		{
			return (1);
		}
		return (0);
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
