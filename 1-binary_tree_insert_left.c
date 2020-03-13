#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
* binary_tree_insert_left - Entry point
* @parent : The parent.
* @value : The value of the node.
* Return: Always 0 (Success)
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new;
if (!parent)
return (NULL);
new = malloc(sizeof(binary_tree_t));
if (!new)
return (NULL);
new->n = value;
new->parent = parent;
new->left = parent->left;
new->right = NULL;
parent->left = new;
if (new->left)
new->left->parent = new;
return (new);
}
