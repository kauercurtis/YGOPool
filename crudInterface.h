#ifndef _CRUDINTERFACE_H_
#define _CRUDINTERFACE_H_
#include <stdio.h>


//printCString - outputs a string
//param1 - char * - the string to output
//return - void - returns nothing
void printCString(char *);


//addDatabase - adds a database to list of databases
//param1 - char * - the name of the database
//return - int - returns 1 if created successfully and 0 if not successfully
int addDatabase(char *);

//openDatabase - opens a database connection handle
//param1 - char * - the name of the database to open a connection handle
//return - int - returns 1 if created successfully and 0 if not successfully
int openDatabase(char *);

#endif