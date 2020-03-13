#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
* binary_tree_inorder - Entry point
* @tree : The parent.
* @func : func
* Return: Always 0 (Success)
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
const binary_tree_t *traversal;
traversal = tree;
if (!traversal || !func)
return;
binary_tree_inorder(traversal->left, func);
func(traversal->n);
binary_tree_inorder(traversal->right, func);
}
