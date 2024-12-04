#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node on the right of another
 * @parent: where to insert the node
 * @value: The value
 *
 * Return: Pointer to created node, NULL in case of error
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *pr = NULL;
	binary_tree_t *new_node = NULL;

	if (!parent)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;

	pr = parent->right;
	parent->right = new_node;

	if (pr)
	{
		pr->parent = new_node;
		new_node->right = pr;
	}

	return (new_node);
}
