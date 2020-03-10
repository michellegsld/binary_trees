#ifndef BINARY_TREES_H
#define BINARY_TREES_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */

/* Basic Binary Tree */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/* Binary Search Tree */
typedef struct binary_tree_s bst_t;

/* AVL Tree */
typedef struct binary_tree_s avl_t;

/* Max Binary Heap */
typedef struct binary_tree_s heap_t;

/* TASK 0 PROTOYPE */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* Print function */
void binary_tree_print(const binary_tree_t *tree);

/* TASK 1 PROTOTYPE */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/* TASK 2 PROTOTYPE */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/* TASK 3 PROTOTYPE */
void binary_tree_delete(binary_tree_t *tree);

/* TASK 4 PROTOTYPE */
int binary_tree_is_leaf(const binary_tree_t *node);

/* TASK 5 PROTOTYPE */
int binary_tree_is_root(const binary_tree_t *node);

/* TASK 6 PROTOTYPE */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/* TASK 7 PROTOTYPE */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/* TASK 8 PROTOTYPE */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/* TASK 9 PROTOTYPE */
size_t binary_tree_height(const binary_tree_t *tree);

/* TASK 10 PROTOTYPE */
size_t binary_tree_depth(const binary_tree_t *tree);

/* TASK 11 PROTOTYPE */
size_t binary_tree_size(const binary_tree_t *tree);

/* TASK 12 PROTOTYPE */
size_t binary_tree_leaves(const binary_tree_t *tree);

/* TASK 13 PROTOTYPE */
size_t binary_tree_nodes(const binary_tree_t *tree);

/* TASK 14 PROTOTYPE */
int binary_tree_balance(const binary_tree_t *tree);

/* TASK 15 PROTOTYPE */
int binary_tree_is_full(const binary_tree_t *tree);

/* TASK 16 PROTOTYPE */
int binary_tree_is_perfect(const binary_tree_t *tree);

/* TASK 17 PROTOTYPE */
binary_tree_t *binary_tree_sibling(binary_tree_t *node);

/* TASK 18 PROTOTYPE */
binary_tree_t *binary_tree_uncle(binary_tree_t *node);



/* TASK 19 PROTOTYPE */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);

/* TASK 20 PROTOTYPE */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));

/* TASK 21 PROTOTYPE */
int binary_tree_is_complete(const binary_tree_t *tree);

/* TASK 22 PROTOTYPE */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);

/* TASK 23 PROTOTYPE */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);

/* TASK 24 PROTOTYPE */
int binary_tree_is_bst(const binary_tree_t *tree);

/* TASK 25 PROTOTYPE */
bst_t *bst_insert(bst_t **tree, int value);

/* TASK 26 PROTOTYPE */
bst_t *array_to_bst(int *array, size_t size);

/* TASK 27 PROTOTYPE */
bst_t *bst_search(const bst_t *tree, int value);

/* TASK 28 PROTOTYPE */
bst_t *bst_remove(bst_t *root, int value);

/* TASK 30 PROTOTYPE */
int binary_tree_is_avl(const binary_tree_t *tree);

/* TASK 31 PROTOTYPE */
avl_t *avl_insert(avl_t **tree, int value);

/* TASK 32 PROTOTYPE */
avl_t *array_to_avl(int *array, size_t size);

/* TASK 33 PROTOTYPE */
avl_t *avl_remove(avl_t *root, int value);

/* TASK 34 PROTOTYPE */
avl_t *sorted_array_to_avl(int *array, size_t size);

/* TASK 36 PROTOTYPE */
int binary_tree_is_heap(const binary_tree_t *tree);

/* TASK 37 PROTOTYPE */
heap_t *heap_insert(heap_t **root, int value)

/* TASK 38 PROTOTYPE */
heap_t *array_to_heap(int *array, size_t size);

/* TASK 39 PROTOTYPE */
int heap_extract(heap_t **root);

/* TASK 40 PROTOTYPE */
int *heap_to_sorted_array(heap_t *heap, size_t *size);
#endif
