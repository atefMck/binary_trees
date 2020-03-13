#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
* binary_tree_height - Entry point
* @tree : The parent.
* Return: Always 0 (Success)
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
const binary_tree_t *traversal;
int leftH = 0;
int rightH = 0;
traversal = tree;
if (!traversal)
return (0);
if (traversal->left)
leftH = 1 + binary_tree_height(traversal->left);
if (traversal->right)
rightH = 1 + binary_tree_height(traversal->right);
if (leftH > rightH)
return (leftH);
else
return (rightH);
}
