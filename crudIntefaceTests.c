#include "crudInterface.h"

void testPrintCString();
void testAddDatabase();
void testOpenDatabase();

int main(){

    testPrintCString();
    testAddDatabase();
    testOpenDatabase();

    return 0;

}

void testOpenDatabase(){

    printf("testOpenDatabase()\n");

    printf("string1 = Gabagool\n");
    char string1[] = "Gabagool";

    printf("string2 = fus ro da\n");
    char string2[] = "fus ro da";

    printf("string3 = This is a sentence to try and see if I can make something long to break this function\n");
    char string3[] = "This is a sentence to try and see if I can make something long to break this function";

    printf("openDatabase(string1) == 1\n");
    printf("%i\n", openDatabase(string1));
    
    printf("openDatabase(string2) == 1\n");
    printf("%i\n", openDatabase(string2));

    printf("addDatabase(string3) == 1\n");
    printf("%i\n", addDatabase(string3));    
}

void testAddDatabase(){

    printf("testAddDatabase()\n");

    printf("string1 = Bananas\n");
    char string1[] = "Bananas";

    printf("string2 = na na na na BATMAN!\n");
    char string2[] = "na na na na BATMAN!";

    printf("string3 = So this one time my buddy Kieth was writing test functions for this wierd trading card thingy\n");
    char string3[] = "So this one time my buddy Kieth was writing test functions for this wierd trading card thingy";

    printf("addDatabase(string1) == 1\n");
    printf("%i\n", addDatabase(string1));
    
    printf("addDatabase(string2) == 1\n");
    printf("%i\n", addDatabase(string2));

    printf("addDatabase(string3) == 1\n");
    printf("%i\n", addDatabase(string3));
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