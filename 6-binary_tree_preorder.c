#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
* binary_tree_preorder - Entry point
* @tree : The parent.
* @func : func
* Return: Always 0 (Success)
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
const binary_tree_t *traversal;
traversal = tree;
if (!traversal || !func)
return;
func(traversal->n);
binary_tree_preorder(traversal->left, func);
binary_tree_preorder(traversal->right, func);
}
