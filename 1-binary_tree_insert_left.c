#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts leaf in left position of node
 * @parent: origin node
 * @value: content
 * @return: leaf/NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newL;

	if (parent == NULL)
		return (NULL);

	newL = binary_tree_node(parent, value);
	if (newL == NULL)
		return (NULL);

	newL->n = value;

	if (parent->left)
	{
		newL->left = parent->left;
		parent->left->parent = newL;
	}
	parent->left = newL;

	return (newL);
}
