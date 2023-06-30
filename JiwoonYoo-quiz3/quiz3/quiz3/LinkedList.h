#pragma once
#include "Node.h"


struct Node* head = NULL;
struct Node* tmp = NULL; 

/*
 * Create a new "House", put num inside, and then add it to the List
 */
void Add(int num) {

	tmp = (struct Node*)malloc(sizeof(struct Node));
	
	tmp->num = num;

	// QUIZ 3 
	// Please implement the 3-Step technique here

	tmp->next = head;

	head = tmp;

	printf("Node created\n");

}



void ShowList(struct Node* head) {

	struct Node* tmpPtr = head; 


	printf("%d ", tmpPtr->num);

	tmpPtr = tmpPtr->next; 

	ShowList(tmpPtr); 


}




