#pragma once
#include <stdlib.h>
#include "Node.h"


// To pointers to build a linked list
struct Node* head = NULL;
struct Node* temp = NULL;

void AddNode(int n) {
    /*
    * In this function, we will use the 3-step process/technique
    * we discussed in previous classes to add the number n into
    * the linked list as a node
    */

    // Do you remember the 3-step process?
    //1. Is to create a new node using malloc()
    temp = (struct Node*)malloc(sizeof(struct Node));

    //2. Is to initialize the newly created node
    temp->num = n;
    temp->next = head;

    //3. Is to add the node into the list
    head = temp;
}

void ShowList(struct Node* start) {
    struct Node* tmpPtr = start;                                                            //notice. do not modify head variable itself, so 
    if (tmpPtr == NULL) {
        // tmpPtr is pointing to NULL, meaning we don't have any
        // thing left to print
        return;
    }

    // If you reach this point without returning, then the list is
    // is not empty, so we 
    // 
    // a. print the current node 
    printf("%d ", tmpPtr->num);

    // b. move tmpPtr to the next node in the list 
    tmpPtr = tmpPtr->next;

    // c. repeat the process with a recursive call
    ShowList(tmpPtr);
}