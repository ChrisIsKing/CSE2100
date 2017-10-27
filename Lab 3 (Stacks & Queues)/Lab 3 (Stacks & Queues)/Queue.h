//
//  Queue.h
//  Lab 3 (Stacks & Queues)
//
//  Created by Christopher Clarke on 10/20/17.
//  Copyright © 2017 Christopher Clarke. All rights reserved.
//

#ifndef Queue_h
#define Queue_h

#include <stdio.h>
#include <stdbool.h>

// the capacity of the queue
#define CAPACITY 10

// a queue
typedef struct
{
    // the index of the first element in the queue
    int head;
    
    // storage for the elements in the queue
    char* strings[CAPACITY];
    
    // the size of the queue
    int size;
} queue;

/* function declarations */
bool enqueue(char* str, queue* q);
char* dequeue(queue* q);

#endif /* Queue_h */
