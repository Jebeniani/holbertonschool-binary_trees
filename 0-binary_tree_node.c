#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a node
 * @parent: Pointer to the parent node
 * @value: is the value to put in the new node
 * Return: Pointer to new node or NULL on failure.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    new_node = malloc(siezof(binary_tree_t));

    if (!new_node)
        return (NULL);
    new_node->n = value;
    new_node->left = NULL;
    new_node->right = NULL;
    new_node->parent = parent;
    return (new_node);
}
