#include <stdio.h>
#include <stdlib.h>
#include "Circle.h"


int main()
{

	int x = 0;
	int y = 0;
	int r = 0;
	struct Circle* ptr[5]; 
	int maxRadius = 0;

	
	//make a struct 
	for (int i = 0; i < 5; i ++) {

		printf("circle %d\n", i + 1);
		printf("enter x:");
		scanf_s("%d", &x);
		printf("enter y:");
		scanf_s("%d", &y);
		printf("enter r:");
		scanf_s("%d", &r);
		if (x <= 0 || y <= 0 || r <= 0) {
			printf("x, y and r have to be lager than 0.try it again\n");
			i--; 
			continue; 
		}

	    ptr[i] = (struct Circle*)malloc(sizeof(struct Circle));
		ptr[i]->x = x;
		ptr[i]->y = y;
		ptr[i]->r = r;

	}


	//biggest radius
	for (int i = 0; i < 5; i++) {

		if (maxRadius < ptr[i]->r) {
			maxRadius = ptr[i]->r; 
		}
	}

	printf("the biggest radius is %d\n", maxRadius);


	//free up 
	for (int i = 0; i < 5; i ++) {

		free(ptr[i]);


	}



}

