#include "binary_trees.h"

/**
 * binary_tree_node - Function that creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to pút in the new node
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root = NULL;

	root = (void *)malloc(sizeof(binary_tree_t));
	if (!root)
		return (NULL);

	root->n = value;
	root->parent = parent;
	root->left = NULL;
	root->right = NULL;

	return (root);
}