#include "binary_trees.h"
/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 * 
 */
void binary_tree_delete(binary_tree_t *tree)
{
        if (!tree)
            return;

        binary_delete_tree(tree->left);
        binary_delete_tree(tree->right);

        free(tree);
}