#ifndef _CRUDINTERFACE_H_
#define _CRUDINTERFACE_H_
#include <stdio.h>
#include <string.h>


FILE * openCollection();

short int checkForDatabase(FILE *, char *);

//addDatabase - adds a database to list of databases
//param1 - char * - the name of the database
//return - int - returns 1 if added successfully and 0 if not successfully
int addDatabase(FILE *, char *);

int deleteDatabase(FILE *, char *);

//printCString - outputs a string
//param1 - char * - the string to output
//return - void - returns nothing
void printCString(char *);






#endif