#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
* binary_tree_delete - Entry point
* @tree : The parent.
* Return: Always 0 (Success)
*/
void binary_tree_delete(binary_tree_t *tree)
{
binary_tree_t *traversal;
traversal = tree;
if (!traversal)
return;
binary_tree_delete(traversal->left);
binary_tree_delete(traversal->right);
free(traversal);
}
