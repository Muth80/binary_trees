#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_print - Prints a binary tree using ASCII art
 * @tree: Pointer to the root node of the tree to print
 */
void binary_tree_print(const binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	printf("(%d)\n", tree->n);
	printf(".--");
	binary_tree_print(tree->left);
	printf("   .--");
	binary_tree_print(tree->right);
}
