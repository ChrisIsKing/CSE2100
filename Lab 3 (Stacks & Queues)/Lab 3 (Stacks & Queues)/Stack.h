//
//  Stack.h
//  Lab 3 (Stacks & Queues)
//
//  Created by Christopher Clarke on 10/20/17.
//  Copyright © 2017 Christopher Clarke. All rights reserved.
//

#ifndef Stack_h
#define Stack_h

#include <stdio.h>
#include <stdbool.h>

// the capacity of the stack
#define CAPACITY 10

typedef struct
{
    // storage for the elements in the stack
    char* strings[CAPACITY];
    
    // the number of elements currently in the stack
    int size;
} stack;

/* function declarations */
bool push(char* str, stack s);
char* pop(stack s);

#endif /* Stack_h */
