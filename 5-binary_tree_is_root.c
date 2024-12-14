#include "binary_trees.h"
/**
 * binary_tree_is_root - check if node is the topmost
 * @node: subject of check
 * Return: 1/0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && node->parent == NULL)
		return (1);
	return (0);
}
