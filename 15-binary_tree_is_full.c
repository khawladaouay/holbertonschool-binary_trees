#include "binary_trees.h"
/**
 * binary_tree_is_full - insert a node as the left-child of another node
 * @tree: a pointer to the node to insert the left-child in
 * *Return: pointer
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if ((tree->left) && (tree->right))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
