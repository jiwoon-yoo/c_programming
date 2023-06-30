#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "Node.h"

void FindLength();
void ConvertToArray();
void ConvertToArray2();

struct Node* head = NULL;
struct Node* temp = NULL;

int* array; 
int* dataset; 
int DATA_SIZE; 


void LinkedListToArray() {
    FindLength(); 
    ConvertToArray();
    ConvertToArray2(); 


}


void AddNode(int num) {

    temp = (struct Node*)malloc(sizeof(struct Node));

    temp->n = num;
    temp->next = head;          

    head = temp;
}



void FindLength() {
    Node* temp = head;
    int length = 0;
    while (temp != NULL) {
        length++;
        temp = temp->next;
    }
    DATA_SIZE =  length;
}


void ConvertToArray() {
    
    Node* temp = head;
    int i = 0;
    
    array = new int[DATA_SIZE];
    while (temp != NULL) {
        array[i++] = temp->n;
        temp = temp->next;
    }
}

void ConvertToArray2() {

    dataset = new int[DATA_SIZE]; 
    int j = 0; 
    for (int i = DATA_SIZE - 1; i >= 0; i--) {
        dataset[j++] = array[i]; 
    }   


}




void PrintArray() {

    printf("\n-----------------------------------------");

    printf("\nThe data set that is not sorted yet\n");

    for (int i = 0; i < DATA_SIZE; i++) {
        printf("%d ", dataset[i]);
    }
}







