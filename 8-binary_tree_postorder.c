#include "binary_trees.h"
/**
 * binary_tree_postorder - Performs post-order traversal on a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to the function to call for each node
 *
 * Description: This function traverses the binary tree using post-order
 *              traversal and calls the provided function for each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;

    binary_tree_postorder(tree->left, func);    /* Traverse left subtree */
    binary_tree_postorder(tree->right, func);   /* Traverse right subtree */
    func(tree->n);                              /* Call function for current node */
}
