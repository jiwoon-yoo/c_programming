
#include <stdio.h>
void Min();

int main()
{
    Min();
}


void Min() {

    int myarr[5];       //------int[] myarr = new int[5] 

    printf("please enter 5 numbers:\n");

    for (int i = 0; i < 5; i++) {
        scanf_s("%d", &myarr[i]);        //enter key     //\n(x) inside scanf_s 
    }

    int min = myarr[0];

    //print the 5 numbers in the array to the screen
    printf("You entered:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", myarr[i]);
    }

    //print the min out 
    for (int i = 1; i < 5; i++) {

        if (myarr[i] < min)
            min = myarr[i];
    }

    printf("min number is %d\n", min);
}





