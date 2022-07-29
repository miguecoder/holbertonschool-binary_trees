#include "binary_trees.h"
/**
* *binary_tree_insert_right - Function that inserts a node as the
* right-child of another node
* @parent: is a pointer to the node to insert the right-child in
* @value: is the value to put in the new node
* Return: a pointer to the created node, or NULL on
* failure or if parent is NULL
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	new_node->right = parent->right;
	parent->right = new_node;
	if (new_node->right)
		new_node->right->parent = new_node;
	return (new_node);
}
