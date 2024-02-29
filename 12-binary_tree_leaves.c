#include "binary_trees.h"

/**
 * binary_tree_leaves - Measures the the leaves in a binary tree
 * @tree: A pointer to the root node of the tree to measure the height.
 * Return: the leaves of a binary tree, If tree is NULL return 0.
 **/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	else
		return (binary_tree_leaves(tree->left) +
				binary_tree_leaves(tree->right));
}
