#include <stddef.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * print_tree - Recursively prints a binary tree
 * @tree: Pointer to the root node of the tree to print
 * @space: Space value for indentation
 * @is_right: Flag to indicate if the current node is the right child
 */
void print_tree(const binary_tree_t *tree, int space, int is_right)
{
	if (tree == NULL)
		return;

	space += 4;

	print_tree(tree->right, space, 1);

	for (int i = 4; i < space; i++)
		printf(" ");

	if (is_right)
		printf("┌───");
	else
		printf("└───");

	printf("%d\n", tree->n);

	print_tree(tree->left, space, 0);
}

/**
 * binary_tree_print - Prints a binary tree
 * @tree: Pointer to the root node of the tree to print
 */
void binary_tree_print(const binary_tree_t *tree)
{
	print_tree(tree, 0, 0);
}
