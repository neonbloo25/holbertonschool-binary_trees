#include "binary_trees.h"
/**
 * binary_tree_insert_right - places leaf on theright
 * @parent: origin node
 * @value: content
 * Return: Right leaf/NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newR;

	if (parent == NULL)
		return (NULL);

	newR = binary_tree_node(parent, value);
	if (newR == NULL)
		return (NULL);

	newR->n = value;

	if (parent->right)
	{
		newR->right = parent->right;
		parent->right->parent = newR;
	}
	parent->right = newR;

	return (newR);
}
