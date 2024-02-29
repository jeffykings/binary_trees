#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: A Pointer to the parent node of the node to create.
 * @value: The value to put in the new node.
 * Return: A pointer to the created node, or NULL on failure or if parent is
 * NULL
 **/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;
	int tempVal;

	if (parent == NULL)
		return (NULL);

	if (!parent->right)
	{
		newNode = binary_tree_node(parent, value);
		parent->right = newNode;
		return (newNode);
	}

	newNode = binary_tree_node(parent->right, value);
	parent->right->right = newNode;

	tempVal = parent->right->right->n;
	parent->right->right->n = parent->right->n;
	parent->right->n = tempVal;

	return (newNode);
}
