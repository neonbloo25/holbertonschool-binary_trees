#include "binary_trees.h"
/**
 * binary_tree_size - measures size of tree
 * @tree: source node
 * Return: measurement/0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t root_size = 1;
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	return (root_size + left + right);
}
