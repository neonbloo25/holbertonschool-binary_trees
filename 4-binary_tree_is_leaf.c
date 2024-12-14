#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Checks if the node is a leaf
 * @node: subject of check
 * Return: 1/0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
