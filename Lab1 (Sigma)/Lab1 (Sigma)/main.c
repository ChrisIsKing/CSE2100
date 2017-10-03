//
//  main.c
//  Lab1 (Sigma)
//
//  Created by Christopher Clarke on 10/3/17.
//  Copyright © 2017 Christopher Clarke. All rights reserved.
// 1.	Write a recursive function called sigma with a prototype of
//      int sigma (int n);
//      that adds the numbers 1 through n and returns the sum.
//      e.g. Enter a positive integer: 5
//      Sigma = 15

#include <stdio.h>

// function declaration
int sigma(int);

int main(int argc, const char * argv[]) {
    // insert code here...
    int x = sigma(5);
    printf("Sigma = %i\n", x);
}

int sigma(int n) {
    // checks for base case
    if (n == 1) {
        return n;
    } else {
        // recursive call
        return n + sigma(n - 1);
    }
}
