#include "binary_trees.h"

int binary_tree_is_full(const binary_tree_t *tree);
int binary_tree_is_full2(const binary_tree_t *tree);

/**
 * binary_tree_is_full - Checks if the binary tree is full
 *
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 0 if tree is NULL
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_is_full2(tree));
}

/**
 * binary_tree_is_full2 - Checks if binary tree is full recursively
 *
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 0 if tree is NULL
*/

int binary_tree_is_full2(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		(tree->left == NULL && tree->right != NULL) ||
		binary_tree_is_full2(tree->left) == 0 ||
		binary_tree_is_full2(tree->right) == 0)
			return (0);
	}

	return (1);
}
