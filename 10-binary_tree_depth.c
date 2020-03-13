#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
* binary_tree_depth - Entry point
* @tree : The parent.
* Return: Always 0 (Success)
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t i = 0;
const binary_tree_t *traversal = tree;
if (!tree || !tree->parent)
return (0);
while (traversal->parent)
{
traversal = traversal->parent;
i = i + 1;
}
return (i);
}
