//
//  Sorting algorithms.c
//  Lab 5 Sorting
//
//  Created by Christopher Clarke on 11/8/17.
//  Copyright © 2017 Christopher Clarke. All rights reserved.
//

#include "Sorting_algorithms.h"

int temp_array[SIZE] = {0};

void insertion_sort(int array[], int size) {
    // TODO: Sort inputted array using Insertion Sort
}

void merge(int array[], int start_1, int end_1, int start_2, int end_2)
{
    // TODO: Merge sorted subarrays using the auxiliary array 'temp_array'
}

void merge_sort(int array[], int start, int end) {
    if (end > start)
    {
        int middle = (start + end) / 2;
        
        // sort left half
        merge_sort(array, start, middle);
        
        // sort right half
        merge_sort(array, middle + 1, end);
        
        // merge the two halves
        merge(array, start, middle, middle + 1, end);
    }
}
