#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "Node.h"


struct Node* head = NULL;
struct Node* temp = NULL;
struct Node* second_last_temp = NULL;

void AddNode(int n) {

    temp = (struct Node*)malloc(sizeof(struct Node));

    temp->num = n;
    temp->next = head;
    head = temp;
}

void ShowList(struct Node* start) {

    struct Node* tmpPtr = start;

    if (tmpPtr == NULL) {
        return;
    }

    printf("%d ", tmpPtr->num);

    tmpPtr = tmpPtr->next;

    ShowList(tmpPtr);
}

void Show() {

    ShowList(head);
}






//
int RemoveLastNode() {

	//todo : remove the item at the top and return it ---- 
    //step1 : extract the number from the node, so that we can return it  
    //step2 : save the position of the next node  
    //step3 : update the head to point to a next node 
    //step4 : delete the node  

    //What if the list is empty and the user call Pop() accidentally?
	if (head == NULL) {
		return NULL;																		//not error. leave it empty
	}

	int saveNumber = head->num;

	temp = head;
	head = head->next;

	free(temp);



	return saveNumber;
}




//assignment3
int RemoveFirstNode() {

    int returnNumber = 0;

    //your Dequeue() method inside Queue.h will need to call 
    if (head == NULL) {
        return NULL;																		//not error. leave it empty
    }
    if (head->next == NULL) {

        returnNumber = head->num; 
        free(head);

        head = NULL; 

        return returnNumber;
    }



    second_last_temp = head;

    while (second_last_temp-> next->next != NULL) {

        second_last_temp = second_last_temp->next;
    }



    returnNumber = second_last_temp->next->num; 

    free(second_last_temp->next);
     
    second_last_temp->next = NULL;


    

    return returnNumber; 
}


