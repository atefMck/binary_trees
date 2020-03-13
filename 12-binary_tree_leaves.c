#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
* binary_tree_leaves - Entry point
* @tree : The parent.
* Return: Always 0 (Success)
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
const binary_tree_t *traversal;
size_t leaf = 0;
traversal = tree;
if (!traversal)
return (0);
if (traversal->left || traversal->right)
{
leaf = leaf + binary_tree_leaves(traversal->left);
leaf = leaf + binary_tree_leaves(traversal->right);
}
else
leaf++;
return (leaf);
}
