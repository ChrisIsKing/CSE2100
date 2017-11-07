//
//  main.c
//  Lab 5 Sorting
//
//  Created by Christopher Clarke on 11/8/17.
//  Copyright © 2017 Christopher Clarke. All rights reserved.
//

#include <stdio.h>
#include "Sorting_algorithms.h"
#include "Searching_Algorithms.h"


int temp[SIZE] = {0};

int main(void)
{
    int numbers[SIZE] = { 4, 15, 16, 50, 8, 23, 42, 108};
    for (int i = 0; i < SIZE; i++)
    {
        printf("%i ", numbers[i]);
    }
    printf("\n");
    merge_sort(numbers, 0, SIZE - 1);
    for (int i = 0; i < SIZE; i++)
    {
        printf("%i ", numbers[i]);
    }
    printf("\n");
    if (binary_search(numbers, 50, 0, 8))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
