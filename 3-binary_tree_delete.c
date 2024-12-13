#include "binary_trees.h"
/**
 * binary_tree_delete - no more tree
 * @tree: THE tree
 * Return: nuffin
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->right);

	binary_tree_delete(tree->left);

	free(tree);
}
