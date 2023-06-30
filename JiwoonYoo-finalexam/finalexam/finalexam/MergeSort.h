#pragma once
#include "LinkedList.h"

void merge(int l, int m, int r); 


void mergeSort(int l, int r)
{
    if (l >= r)
        return;

    int m = l + (r - l) / 2;
    mergeSort(l, m);
    mergeSort(m + 1, r);
    merge(l, m, r);
}



void merge(int l, int m, int r)
{
    auto const left_length = m - l + 1;
    auto const right_length = r - m;

    // Create temp arrays
    auto* temp_left = new int[left_length];
    auto* temp_right = new int[right_length];

    // Copy data to temp arrays leftArray[] and rightArray[]
    for (int i = 0; i < left_length; i++)
        temp_left[i] = dataset[l + i];
    for (int j = 0; j < right_length; j++)
        temp_right[j] = dataset[m + 1 + j];

    int i = 0;
    int j = 0;
    int k = l;


    for (i = 0, j = 0, k = l; k <= r; k++)
    {

        if ((i < left_length) &&
            (j >= right_length || temp_left[i] <= temp_right[j]))
        {
            dataset[k] = temp_left[i];
            i++;
        }

        else
        {
            dataset[k] = temp_right[j];
            j++;
        }
    }




    delete[] temp_left;
    delete[] temp_right;
}




void ShowDataset() {

    printf("\n-----------------------------------------");

    printf("\nThe data set that is sorted with merge sort\n");

    for (int i = 0; i < DATA_SIZE; i++)

    {

        printf("%d ", dataset[i]);

    }

}