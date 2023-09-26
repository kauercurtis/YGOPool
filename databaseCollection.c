#include "databaseCollection.h"

//wrapper for opening the databaseCollection text file
//closes the file FILE pointer is pointing too if not NULL
FILE * openCollection(){

    FILE *collection = fopen("databaseCollection.txt", "r+");

    return collection;
}

//returns reading position if database is in the text file
//returns 0 if the database is NOT in the text file OR FILE pointer is NULL
//does NOT rewind to beginning of text file
short int checkForDatabase(FILE *collection, char *name){

    if(collection == NULL){

        return 0;

    }

    char line[300];
    int flag = -1;

    printf("Scanning each line of database text file to see if %s exists\n", name);
    while((flag != 0) && (fscanf(collection, "%s", line) != -1)){

        printf("comparing %s with %s\n", line, name);

        flag = strcmp(line, name);

        printf("flag is %i\n", flag);
    }

    //if the flag is not 0 then that means EOF reached
    if(flag != 0){

        fseek(collection, 0, SEEK_SET);

    }
    
    printf("%i\n", ftell(collection));

    return ftell(collection);

}

//adds a database to list of databases
//1 is created successfully and 0 is not successfully
//rewinds back to beginning of text file
int addDatabase(FILE *collection, char *name){

    printf("Attempting to add: %s\n", name);

    //if FILE pointer is NULL OR database is already on file OR cannot point to the end of the file
    if(collection == NULL || checkForDatabase(collection, name) > 0 || fseek(collection, 0, SEEK_END) != 0){

        printf("collection is NULL or the database already is included or unable to get to the end of file\n");

        rewind(collection);
        return 0;

    }

    printf("Adding %s\n", name);

    fprintf(collection, "%s\n", name);
    rewind(collection);

    return 1;

}

//deletes a database name from the databaseCollection text file
//if the collection is NULL or the name c string is not in the file, returns 0
//otherwise returns 1 indicating success
int deleteDatabase(FILE *collection, char *name){
    
    if(collection == NULL || checkForDatabase(collection, name) == 0){

        rewind(collection);
        return 0;

    }

    printf("current position in file: %i\n", ftell(collection));

    int counter = sizeof(name) / sizeof(char);
    //keep backspacing until previous line
    //while(counter != -1){

        printf("success on backspace: %i\n", fputs("", collection));
    //    --counter;

    //}

    rewind(collection);
    return 1;

}

//prints the entirety of a C string
void printCString(char *string){

    for(int index = 0; string[index] != '\0'; index++){

        printf("%c", string[index]);

    }

    printf("\n");
}




