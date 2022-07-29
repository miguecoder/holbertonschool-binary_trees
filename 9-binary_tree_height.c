#include "binary_trees.h"
/**
 * binary_tree_height -function that measures
 * the height of a binary tree
 * @tree: is a pointer to the root node of the
 * tree to measure the height.
 * Return: If node is NULL, return
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height = 0, r_height = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);
	if (l_height >= r_height)
		return (l_height + 1);
	return (r_height + 1);
}
