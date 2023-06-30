
#include <stdio.h>


int main()
{
    int arr[1000];
    int count = 0;

    printf("enter UPTO 1000 integers\n");
    printf("enters - 1, the program will stop\n");

    for (int i = 0; i < 1000; i++) {
        printf("enter a non-negative number:");
        scanf_s("%d", &arr[i]);

        if (arr[i] < 0) {

            if (arr[i] == -1) {

                break;
            }

            i--;
            continue;
        }

        count++;
    }

    if (count > 0) {
        printf("print the numbers back out in forward : ");
        for (int i = 0; i < count; i++) {
            printf("%d ", arr[i]);

        }

        printf("print the numbers back out in reverse order");
        for (int i = count - 1; i >= 0; i--) {
            printf("%d ", arr[i]);

        }
    }
    else {
        printf("you didn't enter anything");
    }

}







