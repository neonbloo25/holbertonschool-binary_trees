#include "binary_trees.h"
/**
 * binary_tree_leaves - leaf count
 * @tree: target tree
 * Return: leafcount/0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 1;

	if (tree == NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (count);
	count = (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	return (count);
}
