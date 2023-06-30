#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "Node.h"


struct Node* temp = NULL; 
struct Node* head = NULL; 


void AddNode(int n) {

	temp = (struct Node*)malloc(sizeof(struct Node));
	
	temp->num = n; 
	temp->next = head; 

	head = temp; 


}



void ShowList(struct Node* head) {

	struct Node* tmpPtr = head; 

	if (tmpPtr == NULL) {
		return; 
	}

	printf("%d ", tmpPtr->num);

	tmpPtr = tmpPtr->next; 

	
	ShowList(tmpPtr); 

}