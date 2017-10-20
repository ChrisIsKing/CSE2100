//
//  main.c
//  Lab 3 (Stacks & Queues)
//
//  Created by Christopher Clarke on 10/20/17.
//  Copyright © 2017 Christopher Clarke. All rights reserved.
//

// for strdup() in the testing code
#define _XOPEN_SOURCE 500

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Stack.h"
#include "Queue.h"

// declare a stack (as a global variable)
stack s;

// declare a queue (as a global variable)
queue q;

// testing functions decleration
void test_push();
void test_pop();
void test_queue();

/**
 * Implements some simple test code for our stack
 */
int main(void)
{
    test_push();
    //test_pop();
    //test_queue();
}

void test_push() {
    // initialize the stack
    s.size = 0;
    
    printf("Pushing %i strings onto the stack...\n", CAPACITY);
    for (int i = 0; i < CAPACITY; i++)
    {
        char str[12];
        sprintf(str, "%i", i);
        push(strdup(str), s);
        printf("%s\n", str);
    }
    printf("done!\n");
    
    printf("Making sure that the stack size is indeed %i...", CAPACITY);
    assert(s.size == CAPACITY);
    printf("good!\n");
    
    printf("Making sure that push() now returns false...");
    assert(!push("too much!", s));
    printf("good!\n");
    
    printf("\n********\nSuccess!\n********\n");
    
}

void test_pop() {
    // initialize the stack
    s.size = 10;
    
    printf("Pushing %i strings onto the stack...", CAPACITY);
    for (int i = 0; i < CAPACITY; i++)
    {
        char str[12];
        sprintf(str, "%i", i);
        s.strings[i] = strdup(str);
    }
    
    printf("done!\n");
    
    printf("Popping everything off of the stack...");
    char* str_array[CAPACITY];
    for (int i = 0; i < CAPACITY; i++)
    {
        str_array[i] = pop(s);
    }
    printf("done!\n");
    
    printf("Making sure that pop() returned values in LIFO order...");
    for (int i = 0; i < CAPACITY; i++)
    {
        char str[12];
        sprintf(str, "%i", CAPACITY - i - 1);
        assert(strcmp(str_array[i], str) == 0);
        free(str_array[i]);
    }
    printf("good!\n");
    
    printf("Making sure that the stack is now empty...");
    assert(s.size == 0);
    printf("good!\n");
    
    printf("Making sure that pop() now returns NULL...");
    assert(pop(s) == NULL);
    printf("good!\n");
    
    printf("\n********\nSuccess!\n********\n");
    
}

void test_queue() {
    // initialize the queue
    q.head = 0;
    q.size = 0;
    
    printf("Enqueueing %i strings...", CAPACITY);
    for (int i = 0; i < CAPACITY; i++)
    {
        char str[12];
        sprintf(str, "%i", i);
        enqueue(strdup(str), q);
    }
    printf("done!\n");
    
    printf("Making sure that the queue size is indeed %i...", CAPACITY);
    assert(q.size == CAPACITY);
    printf("good!\n");
    
    printf("Making sure that enqueue() now returns false...");
    assert(!enqueue("too much!", q));
    printf("good!\n");
    
    printf("Dequeueing everything...");
    char* str_array[CAPACITY];
    for (int i = 0; i < CAPACITY; i++)
    {
        str_array[i] = dequeue(q);
    }
    printf("done!\n");
    
    printf("Making sure that dequeue() returned values in FIFO order...");
    for (int i = 0; i < CAPACITY; i++)
    {
        char str[12];
        sprintf(str, "%i", i);
        assert(strcmp(str_array[i], str) == 0);
        free(str_array[i]);
    }
    printf("good!\n");
    
    printf("Making sure that the queue is now empty...");
    assert(q.size == 0);
    printf("good!\n");
    
    printf("Making sure that dequeue() now returns NULL...");
    assert(dequeue(q) == NULL);
    printf("good!\n");
    
    printf("Making sure that the head wraps around appropriately...");
    for (int i = 0; i < CAPACITY; i++)
    {
        assert(enqueue("cse2100!", q));
    }
    
    // to make sure that they adjust the head pointer appropriately, we'll
    // enqueue and dequeue a bunch of times to make sure they don't just
    // walk off the end of the char* strings[] array
    for (int i = 0; i < CAPACITY * 10; i++)
    {
        for (int j = 0; j < CAPACITY / 2; j++)
        {
            assert(dequeue(q));
        }
        for (int j = 0; j < CAPACITY / 2; j++)
        {
            assert(enqueue("cse2100!", q));
        }
    }
    printf("good!\n");
    
    printf("\n********\nSuccess!\n********\n");
}
