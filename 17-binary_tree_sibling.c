#include "binary_trees.h"
/**
 * binary_tree_sibling - checks if they related
 * @node: target node
 * Return: sib pointer
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);

	else
		return (node->parent->left);
}

