#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Checks if the node is a leaf
 * @node: subject of check
 * Return 1/0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (0);
	else if (node->parent != NULL)
		return (1);
	else
		return (0);
}
