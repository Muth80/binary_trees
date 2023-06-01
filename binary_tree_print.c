#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_print_helper - Helper function to print a binary tree
 * @tree: Pointer to the current node
 * @prefix: Prefix string for indentation
 * @is_left: Flag indicating if the current node is the left child
 */
static void binary_tree_print_helper(const binary_tree_t *tree,
		const char *prefix, int is_left)
{
	if (tree == NULL)
		return;

	printf("%s", prefix);
	printf(is_left ? "├──" : "└──");
	printf("(%d)\n", tree->n);

	binary_tree_print_helper(tree->left, prefix, 1);
	binary_tree_print_helper(tree->right, prefix, 0);
}

/**
 * binary_tree_print - Prints a binary tree
 * @tree: Pointer to the root node of the tree to print
 */
void binary_tree_print(const binary_tree_t *tree)
{
	binary_tree_print_helper(tree, "", 0);
}
