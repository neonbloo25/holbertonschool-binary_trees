#include "binary_trees.h"
/**
 * binary_tree_inorder - sorts through the tree "in order"
 * @tree: node
 * @func: traversal type
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
