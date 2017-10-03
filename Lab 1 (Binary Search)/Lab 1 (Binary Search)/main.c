//
//  main.c
//  Lab 1 (Binary Search)
//
//  Created by Christopher Clarke on 10/3/17.
//  Copyright © 2017 Christopher Clarke. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>

// function declaration
bool binary_search(int array[], int key, int min, int max);

int main(int argc, const char * argv[]) {
    
    
    // sorted test array
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    bool found =  binary_search(array, 10, 0, 9);
    if (found) {
        printf("Element found\n");
    } else
        printf("Element not found\n");
    
}

bool binary_search(int array[], int key, int min, int max) {
    
    // check if element not found
    if (min > max) {
        return false;
    }
    
    // split array in half
    int mid_point = (min + max) / 2;
    
    // check for element
    if (array[mid_point] == key) {
        return true;
    }
    
    // recursive call on left side
    if (array[mid_point] < key) {
        return binary_search(array, key, mid_point+1, max);
    }
    else {
        // recursive call on right side
        return binary_search(array, key, min, mid_point-1);
    }
}
