#include "binary_trees.h"
/**
 * binary_tree_node - a function that creates a binary tree node
 * @parent: a pointer to parent node
 * @value: to put in the new node
 * Return: pointer to the new node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
struct binary_tree_s *node = malloc(sizeof(binary_tree_t));

if (node == NULL)
{
	return (NULL);
}

node->n = value;
node->parent = parent;
node->left = NULL;
node->right = NULL;
return (node);
}
