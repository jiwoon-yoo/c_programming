#include <stdio.h>
#include "Stack.h"
#include "Queue.h"

int main()
{
    //printf("Stack demo\n");

    //Push(1);
    //Push(2); 
    //Push(3); 


    ////peek into the linked list and see what's in there
    //printf("peeking inside the linked list\n");
    //Show(); 
    //printf("\n");


    //printf("%d\n", Pop());
    //printf("%d\n", Pop());
    //printf("%d\n", Pop());


    ////What if the list is empty and the user call Pop() accidentally?
    //Pop(); 



    //assignment3 

    int inputNum = 0; 
    int count = 0; 

    printf("it'll add the integer number into the Queue(stop:-100)\n");
    while (inputNum != -100 ) {
        
        printf("enter the number:");
        scanf_s("%d", &inputNum);

        if (inputNum != -100) {
            EnQueue(inputNum);
            count++; 
        }
    }

    //peek into the linked list and see what's in there
    printf("peeking inside the linked list\n");
    Show();
    printf("\n");



    for (int i = 0; i < count; i++) {

        printf("%d is removed\n", DeQueue());
    }


    //peek into the linked list and see what's in there
    printf("peeking inside the linked list\n");
    Show(); 
    printf("\n");


}



//Main.cpp --> Stack.h --> LinkedList.h --> Node.h
