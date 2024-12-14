#include "binary_trees.h"
/**
 * binary_tree_preorder - toggles through nodes in preorder fashion
 * @func
 * @int
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
/*here's where im guessing its best to have left first then right*/
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
