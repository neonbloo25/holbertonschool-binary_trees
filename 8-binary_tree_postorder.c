#include"binary_trees.h"
/**
 * binary_tree_postorder - toggles through nodes in postorder fashion
 * @tree: pointer
 * @func: preorder function
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/*here's where im guessing its best to have left first then right*/
	binary_tree_postorder(tree->right, func);
	binary_tree_postorder(tree->left, func);
	func(tree->n);
}
