#include "binary_trees.h"
/**
 * binary_tree_inorder - Performs in-order traversal on a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to the function to call for each node
 *
 * Description: This function traverses the binary tree using in-order
 *              traversal and calls the provided function for each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);   /* Traverse left subtree */
	func(tree->n);                           /* Call function for current node */
	binary_tree_inorder(tree->right, func);  /* Traverse right subtree */
}
