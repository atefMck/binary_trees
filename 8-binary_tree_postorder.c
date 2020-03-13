#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
* binary_tree_postorder - Entry point
* @tree : The parent.
* @func : func
* Return: Always 0 (Success)
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
const binary_tree_t *traversal;
traversal = tree;
if (!traversal || !func)
return;
binary_tree_postorder(traversal->left, func);
binary_tree_postorder(traversal->right, func);
func(traversal->n);
}
