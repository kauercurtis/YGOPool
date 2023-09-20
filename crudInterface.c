#include "crudInterface.h"

//prints the entirety of a C string
void printCString(char *string){

    for(int index = 0; string[index] != '\0'; index++){

        printf("%c", string[index]);

    }

    printf("\n");
}

//adds a database to list of databases
//1 is created successfully and 0 is not successfully
int addDatabase(char *name){

    printf("Checking if ");
    printCString(name);
    printf("Already exists\n");

    printCString(name);
    printf("Added to list of Databases\n");

    return 1;

}

//opens a database connection handle
//1 is opened successfully and 0 is not successfully
int openDatabase(char *name){

    printf("Checking if ");
    printCString(name);
    printf("Exists!\n");

    printCString(name);
    printf("Being opened\n");

    return 1;
}

