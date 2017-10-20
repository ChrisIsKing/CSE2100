//
//  Stack.c
//  Lab 3 (Stacks & Queues)
//
//  Created by Christopher Clarke on 10/20/17.
//  Copyright © 2017 Christopher Clarke. All rights reserved.
//

#include "Stack.h"

/**
 * Puts a new element into the stack onto the "top" of the data structure
 * so that it will be retrived prior to the elements already in the stack.
 */
bool push(char* str, stack s)
{
    // TODO
    
    // check if stack is at CAPACITY
    // store element at tail
    // increment size
    return true;
}

/**
 * Retrieves ("pops") the last ("top") element off of the stack, following
 * the "last-in, first-out" (LIFO) ordering of the data structure. Reduces
 * the size of the stack.
 */
char* pop(stack s)
{
    // TODO
    
    // check if there are elements to pop
    // decrement size
    // return last element
    
    return s.strings[0];
}
