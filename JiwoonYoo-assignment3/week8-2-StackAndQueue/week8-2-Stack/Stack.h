#pragma once
#include "LinkedList.h"

/*
	STACK needs to support two types of operation 
	1. Push(int num) will put num into the stack  
	2. Pop()         will remove the item at the top and return it---

*/


void Push(int num) {

	//todo : add num into the stack 
	AddNode(num);

	printf("Pushed %d into stack\n", num);
}


int Pop() {

	int num = RemoveLastNode(); 

	return num; 
}