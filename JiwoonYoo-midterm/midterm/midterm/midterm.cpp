#include <stdio.h>
#include "LinkedList.h"

int main()
{
    int arr[1000];
    int count = 0; 
    int max = 0; 

    printf("enters - 100, the program will stop\n");

    for (int i = 0; i < 1000; i++) {
        printf("enter a number that is divisible by 3:");
        scanf_s("%d", &arr[i]);

      
        if (arr[i] == -100) {

            break;
        }

        

        if (arr[i] % 3 == 0) {
            
            AddNode(arr[i]);
           
        }

        count++; 
    }





    if (count > 0) {


        for (int i = 0; i < count; i++) {


            if (arr[i] > max && arr[i] % 3 == 0) {
                max = arr[i];
            }
                
        }


        printf("the biggest number:%d", max);


        printf("\n");

        printf("numbers inside the linked list\n");
        ShowList(head);

    }
    else {
        printf("you didnt' enter anything into the linkedlist");
    }


}







