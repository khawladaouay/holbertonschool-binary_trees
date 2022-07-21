#include "binary_trees.h"
/**
 * binary_tree_nodes - insert a node as the left-child of another node
 * @tree: a pointer to the node to insert the left-child in
 * *Return: pointer
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (0);
	if (tree != NULL)
	{
		binary_tree_nodes(tree->left);
		count++;
		return (1 + binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left));
	}
	return (count);
}
