#include "binary_trees.h"

/**
 * getHeight - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 * Return: the balance factor of a binary tree, If tree is NULL return 0.
 **/
int getHeight(const binary_tree_t *tree)
{
	int lDepth, rDepth;

	if (tree == NULL)
		return (0);

	lDepth = getHeight(tree->left);
	rDepth = getHeight(tree->right);

	return ((lDepth > rDepth) ? (lDepth + 1) : (rDepth + 1));
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 * Return: the balance factor of a binary tree, If tree is NULL return 0.
 **/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (getHeight(tree->left) - getHeight(tree->right));
}
