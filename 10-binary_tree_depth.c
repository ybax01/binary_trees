#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to node
 *
 * Return: Depth of node or 0 if NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t depth = 0;
	if (tree->parent)
		depth = 1 + binary_tree_depth(tree->parent);
	return (depth);
}
