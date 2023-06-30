#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "Node.h"
#include <stdbool.h>

void InsertOnSubtree(int, struct Node*);
void SearchSub(int, struct Node*);          //
void PrintSubtree(struct Node* node);


struct Node* root = NULL;
//struct Node* tmp = NULL;
int determineNum = -100;

struct Node* MakeNode(int num) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->Num = num;
    node->LeftChild = NULL;
    node->RightChild = NULL;
    return node;
}








void Insert(int num) {
    // The tree is empty, make a new node
    // place it at the root
    if (root == NULL) {
        root = MakeNode(num);
        return;
    }

    // If we reach here, the tree is not empty
    InsertOnSubtree(num, root);
}

void InsertOnSubtree(int num, struct Node* node) {
    // node is guaranteed to be non-null
    // so we decide whether to go left or go right
    if (num < node->Num) {
        // if LeftChild is empty, then
        // make a new node and make that node
        // the left child
        if (node->LeftChild == NULL) {
            node->LeftChild = MakeNode(num);
        }
        else {
            InsertOnSubtree(num, node->LeftChild);
        }
    }
    else {
        if (node->RightChild == NULL) {
            node->RightChild = MakeNode(num);
        }
        else {
            InsertOnSubtree(num, node->RightChild);
        }
    }
}





void PrintTree() {
    PrintSubtree(root);
}

void PrintSubtree(struct Node* node) {
    if (node == NULL) return;

    PrintSubtree(node->LeftChild);

    printf("%d ", node->Num);

    PrintSubtree(node->RightChild);

}



bool Search(int num) {
    SearchSub(num, root);

    if (determineNum == num) {
        return true; 
    }
    else {
        return false; 
    }
}


void SearchSub(int num,struct Node* node) {
    if (node == NULL) return;

    SearchSub(num, node->LeftChild);

    //printf("%d ", node->Num);

    if (node->Num == num) {
        determineNum = num; 
    }

    SearchSub(num, node->RightChild);

}