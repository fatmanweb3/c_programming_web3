#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void countCalls(){
    static int callCount = 0;  // initializing only once whent he porgram starts.

    int calloff = 0; //using a normal int for reference.

    calloff++;
    callCount++;
    printf(" this function has been called %d time(s). \n", callCount);
    printf(" this function has been called for calloff %d time(s). \n", calloff);
}

static int modulePrivateData = 50; // Only accessible within this file // this is global declaration.

int modulePublicData = 100; // Accessible from other files via 'extern'

void printModuleData() {
    printf("Module Private Data: %d\n", modulePrivateData);
    printf("Module Public Data: %d\n", modulePublicData);
}

static void internalHelper() { // Only callable within utility_helpers.c
    printf("This is an internal helper function.\n");
}

void publicApiFunction() { // Callable from other files
    printf("This is a public API function.\n");
    internalHelper(); // Can call the static helper function
}

int main(){
    countCalls();
    countCalls();
    countCalls();
    printModuleData();
    // If this were another file, you could NOT do: extern int modulePrivateData;

    publicApiFunction();
    // internalHelper(); // If this were another file, this would be a compile-time error

    return 0;

}