#include "binary_trees.h"

/**
 * binary_tree_nodes - Measure the nodes with at least 1 child in a binary tree
 * @tree: A pointer to the root node of the tree to measure the height.
 * Return: the nodes of a binary tree, If tree is NULL return 0.
 **/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int lNodes, rNodes;

	if (tree == NULL)
		return (0);

	lNodes = binary_tree_nodes(tree->left);
	rNodes = binary_tree_nodes(tree->right);

	return (lNodes + rNodes + (tree->left || tree->right));
}
