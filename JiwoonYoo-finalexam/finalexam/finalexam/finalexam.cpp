#include <stdio.h>
#include "LinkedList.h"
#include "MergeSort.h"

int main()
{

    int num;

    while (true) {
        printf("Please enter a series of integers. -100 to stop\n");
        scanf_s("%d", &num);
        if (num == -100) {
            break;
            
        }
        AddNode(num); 
    }

    //before merge sorting 
    LinkedListToArray();
    PrintArray();


    //after merge sorting  
    mergeSort(0, DATA_SIZE - 1);
    ShowDataset(); 

}








