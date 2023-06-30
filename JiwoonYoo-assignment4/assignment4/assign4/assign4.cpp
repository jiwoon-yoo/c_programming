#include <stdio.h>
#include "BinaryTree.h"

int main()
{
    printf("Binary Tree Demo\n\n");

    int num;
    int num2;
    int num3; 

    while (true) {
        printf("Please enter a bunch of numbers. -100 to stop\n");
        scanf_s("%d", &num);
        if (num == -100) {
            break;
        }
        Insert(num);
    }
    Print(root);


    printf("\n\n");


    while (true) {
        printf("delete the number that you want in the tree -100 to stop\n");
        scanf_s("%d", &num2);

        if (num2 == -100) {
            break;
        }

        deleteNode(root, num2);
        Print(root);

        printf("\n");
    }
    Print(root);

}

