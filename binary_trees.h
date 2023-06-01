#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>

// Basic Binary Tree
struct binary_tree_s {
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/* Function to print a binary tree */
void binary_tree_print(const binary_tree_t *tree);

// Binary Search Tree
typedef struct binary_tree_s bst_t;

// AVL Tree
typedef struct binary_tree_s avl_t;

// Max Binary Heap
typedef struct binary_tree_s heap_t;

// Function to create a new node with the given data
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

// Function to insert a left child node into the binary tree
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

// Function to insert a right child node into the binary tree
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

// Function to delete a binary tree
void binary_tree_delete(binary_tree_t *tree);

// Function to check if a node is a leaf
int binary_tree_is_leaf(const binary_tree_t *node);

// Function to check if a node is the root
int binary_tree_is_root(const binary_tree_t *node);

// Function to traverse the binary tree in preorder
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

// Function to traverse the binary tree in inorder
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

// Function to traverse the binary tree in postorder
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

// Function to get the height of the binary tree
size_t binary_tree_height(const binary_tree_t *tree);

// Function to get the depth of a node in the binary tree
size_t binary_tree_depth(const binary_tree_t *tree);

// Function to get the size (number of nodes) of the binary tree
size_t binary_tree_size(const binary_tree_t *tree);

// Function to get the number of leaves in the binary tree
size_t binary_tree_leaves(const binary_tree_t *tree);

// Function to get the number of non-leaf nodes in the binary tree
size_t binary_tree_nodes(const binary_tree_t *tree);

// Function to get the balance factor of the binary tree
int binary_tree_balance(const binary_tree_t *tree);

// Function to check if the binary tree is a full binary tree
int binary_tree_is_full(const binary_tree_t *tree);

// Function to check if the binary tree is a perfect binary tree
int binary_tree_is_perfect(const binary_tree_t *tree);

// Function to get the sibling of a node in the binary tree
binary_tree_t *binary_tree_sibling(binary_tree_t *node);

// Function to get the uncle of a node in the binary tree
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

// Function to find the lowest common ancestor of two nodes in the binary tree
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);

// Function to traverse the binary tree in level order
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));

// Function to check if the binary tree is a complete binary tree
int binary_tree_is_complete(const binary_tree_t *tree);

// Function to rotate the binary tree to the left
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);

// Function to rotate the binary tree to the right
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);

// Function to check if the binary tree is a binary search tree (BST)
int binary_tree_is_bst(const binary_tree_t *tree);

// Function to insert a value into a binary search tree (BST)
bst_t *bst_insert(bst_t **tree, int value);

// Function to create a binary search tree (BST) from an array
bst_t *array_to_bst(int *array, size_t size);

// Function to search for a value in a binary search tree (BST)
bst_t *bst_search(const bst_t *tree, int value);

// Function to remove a node with the given value from a binary search tree (BST)
bst_t *bst_remove(bst_t *root, int value);

// Function to check if the binary tree is an AVL tree
int binary_tree_is_avl(const binary_tree_t *tree);

// Function to insert a value into an AVL tree
avl_t *avl_insert(avl_t **tree, int value);

// Function to create an AVL tree from an array
avl_t *array_to_avl(int *array, size_t size);

// Function to remove a node with the given value from an AVL tree
avl_t *avl_remove(avl_t *root, int value);

// Function to create a sorted AVL tree from a sorted array
avl_t *sorted_array_to_avl(int *array, size_t size);

// Function to check if the binary tree is a max binary heap
int binary_tree_is_heap(const binary_tree_t *tree);

// Function to insert a value into a max binary heap
heap_t *heap_insert(heap_t **root, int value);

// Function to create a max binary heap from an array
heap_t *array_to_heap(int *array, size_t size);

// Function to extract the maximum value from a max binary heap
int heap_extract(heap_t **root);

// Function to convert a max binary heap to a sorted array
int *heap_to_sorted_array(heap_t *heap, size_t *size);

#endif // BINARY_TREES_H

