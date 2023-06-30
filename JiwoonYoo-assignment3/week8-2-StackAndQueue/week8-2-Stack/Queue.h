#pragma once
#include "LinkedList.h"

//add the number num into a queue
void EnQueue(int num) {

	AddNode(num);

}


// retrieve a number from the queue 
//1. find the last node in the chain
//2. make the node right before the last node points to NULL 
int DeQueue() {

	int num = RemoveFirstNode();

	return num;
}