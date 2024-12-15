#include "binary_trees.h"
/**
 * binary_tree_nodes - checks nodes with at least 1 child
 * @tree: source node
 * Return: target nodes/0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int singles = 0;

	if (tree == NULL)
		return (0);

	if ((tree->left == NULL && tree->right)
		||
		(tree->left && tree->right == NULL)
		||
		(tree->left && tree->right))
			singles = 1;

	return (singles +
			binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right));
}
