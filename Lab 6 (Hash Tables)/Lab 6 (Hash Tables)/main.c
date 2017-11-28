//
//  main.c
//  Lab 6 (Hash Tables)
//
//  Created by Christopher Clarke on 11/28/17.
//  Copyright © 2017 Christopher Clarke. All rights reserved.
//

#include <stdio.h>
#include "hash_table_chained.h"
#include "hash_functions.h"

node* hash_table[HASH_MAX] = {NULL};

void insert_person();
void get_person();

int main(int argc, const char * argv[]) {
    int response;
    while (true) {
        printf("Enter 1 to insert\n");
        printf("Enter 2 to lookup\n");
        scanf("%i", &response);
        switch (response) {
            case 1:
                insert_person();
                break;
                
            case 2:
                get_person();
                break;
                
            default:
                break;
        }
    }
}

void insert_person() {
    char fname[20];
    char lname[20];
    printf("Enter first name\n");
    scanf("%s", fname);
    printf("Enter last name\n");
    scanf("%s", lname);
    bool result = load(hash_table, fname, lname);
    if (result) {
        printf("Person loaded\n");
    }
    else {
        printf("Failure");
    }
}

void get_person() {
    node* person;
    char fname[20];
    char lname[20];
    printf("Enter first name\n");
    scanf("%s", fname);
    printf("Enter last name\n");
    scanf("%s", lname);
    char tmp[40];
    strcpy(tmp,fname);
    strcat(tmp, lname);
    person = lookup(hash_table, tmp, fname, lname);
    if (person != NULL) {
        printf("Person found firstname: %s, lastname: %s\n", person->fname, person->lname);
    }
    else {
        printf("Failure\n");
    }
}

