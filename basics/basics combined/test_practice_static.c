#include <stdio.h>

int generateID(){
    static int currentID = 1000;

    currentID++;
    printf(" the incremented value is %d\n", currentID);

    return currentID;
}

int main(){
    generateID();

    int id1 = generateID();
    printf("Generated ID 1: %d\n", id1); // Expected: 1001

    int id2 = generateID();
    printf("Generated ID 2: %d\n", id2); // Expected: 1002

    int id3 = generateID();
    printf("Generated ID 3: %d\n", id3); // Expected: 1003

    printf("\nCalling generateID() again after some other operations...\n");

    int id4 = generateID();
    printf("Generated ID 4: %d\n", id4); // Expected: 1004

    int id5 = generateID();
    printf("Generated ID 5: %d\n", id5); // Expected: 1005

    return 0;
}