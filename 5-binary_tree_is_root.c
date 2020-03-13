#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
* binary_tree_is_root - Entry point
* @node : The parent.
* Return: Always 0 (Success)
*/
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL)
return (0);
if (!node->parent)
return (1);
return (0);
}
