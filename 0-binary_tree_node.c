#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a node
 * @parent: Pointer to the parent node
 * @value: is the value to put in the new node
 * Return: Pointer to new node or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new;

    new = malloc(siezof(binary_tree_t));
    if (new == NULL)
        return (NULL);

    new->n = value;
    new->parent = parent;
    new->left = NULL;
    new->right = NULL;

    return (new);
}