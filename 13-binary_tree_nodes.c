#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
* binary_tree_nodes - Entry point
* @tree : The parent.
* Return: Always 0 (Success)
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
const binary_tree_t *traversal;
size_t node = 0;
traversal = tree;
if (!traversal)
return (0);
if (traversal->left || traversal->right)
{
node++;
node = node + binary_tree_nodes(traversal->left);
node = node + binary_tree_nodes(traversal->right);
}
return (node);
}
