#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to root
 *
 * Return: Height or 0 if NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t hlf = 0, hrg = 0;

	if (!tree)
		return (0);

	if (tree->left)
		hlf = 1 + binary_tree_height(tree->left);
	if (tree->right)
		hrg = 1 + binary_tree_height(tree->right);

	if (hlf > hrg)
		return (hlf);
	return (hrg);
}
