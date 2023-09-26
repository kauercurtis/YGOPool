#include "databaseCollection.h"

//test prototypes
void testPrintCString();
void testAddDatabase(FILE *);
FILE * testOpenCollection();
void testCheckForDatabase(FILE *);
void testDeleteDatabase(FILE *);

int main(){

    testPrintCString();

    FILE *test = testOpenCollection();

    testAddDatabase(test);
    testCheckForDatabase(test);
    testDeleteDatabase(test);
    fclose(test);
    test = NULL;

    printf("tests complete\n");
    return 0;

}

void testDeleteDatabase(FILE *test){

    printf("testDeleteDatabase(test)\n");

    printf("string1 = Bananas\n");
    char string1[] = "Bananas";

    printf("string2 = na_na_na_na_BATMAN!\n");
    char string2[] = "na_na_na_na_BATMAN!";

    printf("string3 = So_this_one_time_my_buddy_Nikoli_was_writing_test_functions_for_this_wierd_trading_card_thingy\n");
    char string3[] = "So_this_one_time_my_buddy_Nikoli_was_writing_test_functions_for_this_wierd_trading_card_thingy";
        
    printf("deleteDatabase(test, string1) == 1\n");
    printf("%i\n", deleteDatabase(test, string1));

    printf("deleteDatabase(test, string2) == 1\n");
    printf("%i\n", deleteDatabase(test, string2));

    printf("deleteDatabase(test, string3) == 0\n");
    printf("%i\n", deleteDatabase(test, string3));
}

//cant test til addDatabase() is implemented
void testCheckForDatabase(FILE *test){

    printf("testCheckForDatabase(test)\n");

    int success = 0;

    printf("string1 = Oranges\n");
    char string1[] = "Oranges";

    printf("string2 = na_na_na_na_BATMAN!\n");
    char string2[] = "na_na_na_na_BATMAN!";

    printf("string3 = So_this_one_time_my_buddy_Nikoli_was_writing_test_functions_for_this_wierd_trading_card_thingy\n");
    char string3[] = "So_this_one_time_my_buddy_Nikoli_was_writing_test_functions_for_this_wierd_trading_card_thingy";

    rewind(test);

    printf("checkForDatabase(test, string1) == 0\n");
    success = checkForDatabase(test, string1);
    printf("%s results have returned\n", string1);
    printf("%i\n", success);

    checkForDatabase(test, string1);

    rewind(test);

    printf("checkForDatabase(test, string2) != 0\n");
    success = checkForDatabase(test, string2);
    printf("%i\n", success);

    rewind(test);

    printf("checkForDatabase(test, string3) == 0\n");
    success = checkForDatabase(test, string3);
    printf("%i\n", success);  

    rewind(test);
}

FILE * testOpenCollection(){

    printf("testOpenCollection()\n");
    printf("FILE *test = NULL\n");

    FILE *test = openCollection();

    if(test != NULL){

        printf("openCollection.txt opened\n");

    }
    else{

        printf("openCollection.txt NOT opened!\n");

    }

    return test;

}

void testAddDatabase(FILE *test){

    printf("testAddDatabase(test)\n");

    printf("string1 = Bananas\n");
    char string1[] = "Bananas";

    printf("string2 = na_na_na_na_BATMAN!\n");
    char string2[] = "na_na_na_na_BATMAN!";

    printf("string3 = So_this_one_time_my_buddy_Kieth_was_writing_test_functions_for_this_wierd_trading_card_thingy\n");
    char string3[] = "So_this_one_time_my_buddy_Kieth_was_writing_test_functions_for_this_wierd_trading_card_thingy";

    printf("addDatabase(test, string1) == 1\n");
    printf("%i\n", addDatabase(test, string1));
    
    printf("addDatabase(test, string2) == 1\n");
    printf("%i\n", addDatabase(test, string2));

    printf("addDatabase(test, string1) == 0\n");
    printf("%i\n", addDatabase(test, string1));

    printf("addDatabase(test, string3) == 1\n");
    printf("%i\n", addDatabase(test, string3));

    printf("addDatabase(test, string2) == 0\n");
    printf("%i\n", addDatabase(test, string2));
}

void testPrintCString(){

    printf("testPrintCString()\n");

    printf("string1 = Gabagool\n");
    char string1[] = "Gabagool";

    printf("string2 = fus ro da\n");
    char string2[] = "fus ro da";

    printf("string3 = This is a sentence to try and see if I can make something long to break this function\n");
    char string3[] = "This is a sentence to try and see if I can make something long to break this function";

    printf("printCString(string1)\n");
    printCString(string1);
    
    printf("printCString(string2)\n");
    printCString(string2);

    printf("printCString(string3)\n");
    printCString(string3);
}