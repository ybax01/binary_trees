#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert a node on the left of another
 * @parent: where to insert the node
 * @value: The value
 *
 * Return: Pointer to created node, NULL in case of error
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *pl = NULL;
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

	pl = parent->left;
	parent->left = new_node;

	if (pl)
	{
		pl->parent = new_node;
		new_node->left = pl;
	}

	return (new_node);
}
