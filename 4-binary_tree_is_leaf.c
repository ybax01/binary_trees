#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: The node to check
 *
 * Return: 1 if yes, 0 if no, NULL if node is empty
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
