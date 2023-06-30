#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"


int main()
{

	while (true) {

		int keepGoing; 
		int userInput; 
		printf("enter number. it'll add it to the linkedlist\n");
		scanf_s("%d", &userInput);

		if (userInput > 0 && userInput % 2 == 0) {
			AddNode(userInput);
		}
			
		printf("keep going?(stop:enter -100 / going: enter 1)");
		scanf_s("%d", &keepGoing);
		if (keepGoing == -100)
			break;
	}

	
	printf("print list\n");
	ShowList(head);

}

