#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "Node.h"

void InsertOnSubtree(int, struct Node*);
void PrintSubtree(struct Node*);
void DeleteSubTree(int, struct Node*, struct Node*);
struct Node* minValueNode(struct Node* node); 
struct Node* SearchSubTree(int num, struct Node* top);


struct Node* root = NULL;
struct Node* tmp = NULL;


struct Node* tmp2 = NULL;


struct Node* MakeNode(int num) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->Num = num;
    node->LeftChild = NULL;
    node->RightChild = NULL;
    return node;
}

void Insert(int num) {

    if (root == NULL) {
        root = MakeNode(num);
        return;
    }

   
    InsertOnSubtree(num, root);
}

void InsertOnSubtree(int num, struct Node* node) {
   
    if (num < node->Num) {
        
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










void Print(struct Node* top) {
    if (top->LeftChild != NULL) {
        Print(top->LeftChild); // not executed (skipped)
    }
    printf("%d ", top->Num); // 0
    if (top->RightChild != NULL) {
        Print(top->RightChild); // skipped
    }
}


void Print2(struct Node* top) {
    if (top == NULL) return;
    Print2(top->LeftChild);
    printf("%d ", top->Num);
    Print2(top->RightChild);
}





//Search
struct Node* Search(int num) {
    return SearchSubTree(num, root);
}



struct Node* SearchSubTree(int num, struct Node* top) {
    if (top == NULL) return NULL;

   
    if (top->Num == num) {
        return top;
    }



    struct Node* node = NULL;

   
    node = SearchSubTree(num, top->LeftChild);
    if (node != NULL) return node;



    node = SearchSubTree(num, top->RightChild);
    if (node != NULL) return node;



  
    return NULL;
}










//assignment4
struct Node* minValueNode(struct Node* top)
{

    while (top != NULL && top->LeftChild != NULL) {
        top = top->LeftChild;
    }

    return top;
}

struct Node* deleteNode(struct Node* top, int num)
{
    if (top == NULL) {

        return top;
    }
        


    if (num < top->Num)
        top->LeftChild = deleteNode(top->LeftChild, num);       

    else if (num > top->Num)
        top->RightChild = deleteNode(top->RightChild, num);     

    else {
        
        if (top->LeftChild == NULL) {
            struct Node* temp = top->RightChild;
            free(top);
           
            if (top == root) {//////////
                top = NULL;
                root = temp;

                if (root == NULL) {
                    printf("tree doesn't contain the number to be deleted\n");
                }
                
            }

            return temp;
        }
        else if (top->RightChild == NULL) {
            struct Node* temp = top->LeftChild;
            free(top);
      
            if (top == root) {//////////
                top = NULL; 
                root = temp; 
               
                if (root == NULL) {
                    printf("tree doesn't contain the number to be deleted anymore\n");
                }
            }

            return temp;
        }

        
        struct Node* temp = minValueNode(top->RightChild);          //top->RightChild 

       
        top->Num = temp->Num;

        
        top->RightChild = deleteNode(top->RightChild, temp->Num);
    }



    return top;        
}
