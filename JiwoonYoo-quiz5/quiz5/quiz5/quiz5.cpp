#include <stdio.h>
#include "BinaryTree.h"

int main()
{
    printf("Binary Tree Demo\n\n");

    int num;
    int searchNum;

    while (true) {
        printf("Please enter a bunch of numbers. -100 to stop\n");
        scanf_s("%d", &num);
        
        if (num == -100) {
            break;
        }
        
        Insert(num);
    }
    PrintTree(); 

    printf("\n\n");

    //quiz5
    while (true) {

        printf("enter the number that you want to search in binary tree. -100 to stop\n");
        scanf_s("%d", &searchNum);

        if (searchNum == -100) {
            break;
        }

        if (Search(searchNum)) {
            printf("Yes, the number %d is contained in the tree\n\n", searchNum);
        }
        else {
            printf("No, the tree does not contain the number \n\n", searchNum);
        }


    }
 


}