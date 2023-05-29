#include "binary_trees.h"
#include <stdlib.h>

/*
 * binary_tree_node - Creates a binary tree node
 *
 * @parent: Pointer to the Parent of the node
 * @value: Data to be stored in the node
 * Return: Pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
	    return NULL;
        node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
