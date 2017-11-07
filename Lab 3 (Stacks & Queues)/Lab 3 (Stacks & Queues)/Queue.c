//
//  Queue.c
//  Lab 3 (Stacks & Queues)
//
//  Created by Christopher Clarke on 10/20/17.
//  Copyright © 2017 Christopher Clarke. All rights reserved.
//

#include "Queue.h"

/**
 * Puts a new element into the queue into the "end" of the data structure
 * so that it will be retrived after the other elements already in the
 * queue.
 */
bool enqueue(char* str, queue* q)
{
    // Check if queue is full
    if (q->size == CAPACITY) {
        return false;
    }
    // add element to queue
    q->strings[q->size] = str;
    // increment size
    q->size++;
    return true;
}

/**
 * Retrieves ("dequeues") the first element in the queue, following the
 * the "first-in, first-out" (FIFO) ordering of the data structure.
 * Reduces the size of the queue and adjusts the head to the next element.
 */
char* dequeue(queue* q)
{
    // Checks if queque is empty
    if (q->size == 0) {
        return NULL;
    }
    // collects string
    char* str = q->strings[q->head];
    // increments head
    q->head++;
    // decrements size
    q->size--;
    // resets head so beginning of queue
    if (q->head == CAPACITY) {
        q->head = 0;
    }
    return str;
}
