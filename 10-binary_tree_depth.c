#include "binary_trees.h"
/**
 * binary_tree_depth- insert a node as the left-child of another node
 * @tree: a pointer to the node to insert the left-child in
 * *Return: pointer
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int left = 0;

	if (tree == NULL)
		return (0);
	left = binary_tree_depth(tree->left) + binary_tree_depth(tree->right);
	return (left  + 1);
}
