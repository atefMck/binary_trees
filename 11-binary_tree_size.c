#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
* binary_tree_size - Entry point
* @tree : The parent.
* Return: Always 0 (Success)
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
const binary_tree_t *traversal;
size_t size = 0;
traversal = tree;
if (!traversal)
return (0);
size = size + binary_tree_size(traversal->left);
size = size + binary_tree_size(traversal->right);
return (size + 1);
}
