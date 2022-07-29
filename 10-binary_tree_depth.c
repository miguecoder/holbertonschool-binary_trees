#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures
 * the depth of a node in a binary tree
 * @tree: is a pointer to measure the depth
 * Return: If node is NULL, return
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree->parent)
		return (0);
	depth = binary_tree_depth(tree->parent);
	return (depth + 1);
}
