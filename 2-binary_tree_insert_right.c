#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
* binary_tree_insert_right - Entry point
* @parent : The parent.
* @value : The value of the node.
* Return: Always 0 (Success)
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new;
if (!parent)
return (NULL);
new = malloc(sizeof(binary_tree_t));
if (!new)
return (NULL);
new->n = value;
new->parent = parent;
new->right = parent->right;
new->left = NULL;
parent->right = new;
if (new->right)
new->right->parent = new;
return (new);
}
