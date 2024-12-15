#include "binary_trees.h"
/**
 * binary_tree_depth - measures node depth
 * @tree: node source
 * Return Depth/Zero
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t parent;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	parent = binary_tree_depth(tree->parent) + 1;
	return (parent);
}
