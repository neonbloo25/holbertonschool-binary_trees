#include "binary_trees.h"
binary_tree_t *sibling(binary_tree_t *node);
/**
 * binary_tree_uncle - which are you, Jesse or Joey?
 * @node: source node
 * Return: Calling McDuck!!! Calling Scrooge McDuck!!!
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);

	return (sibling(node->parent));
}
/**
 * sibling - sibling has uncles phone number
 * @node: subject
 * Return: sistahhh
 */
binary_tree_t *sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);

	else
		return (node->parent->left);
}
