#include "binary_trees.h"
/**
 * binary_tree_height - scans thru n checks height
 * @tree: node
 * Return: height/0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	left = 0, right = 0;

	if (tree == NULL ||(tree->left == NULL && tree->right == NULL))
		return (0);

	left = binary_tree_height(tree->left) + 1;
	right = binary_tree_height(tree->right) + 1;

	if (left > right)
		return (left);

	return (right);
}
