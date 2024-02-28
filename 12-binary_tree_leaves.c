#include "binary_trees.h"
/**
 * binary_tree_leaves - count leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the leaves of
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			leaves++;
		}
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
