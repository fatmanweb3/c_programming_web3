#include <stdio.h>

int main(){
    // first example i can change the address linking to pointers, but cannot change the value inside it
    int gold_chest_A = 100; // A normal chest with 100 gold
    int gold_chest_B = 200; // Another normal chest with 200 gold

    const int *map_to_locked_chest; // This map points to a chest that you CANNOT change its contents

    map_to_locked_chest = &gold_chest_A; // Valid: The map now points to Chest A
    printf("Gold in Chest A (via map): %d\n", *map_to_locked_chest); // Output: 100

    // *map_to_locked_chest = 150; // ERROR! You cannot change the gold in Chest A using THIS map.
                                // (Even though Chest A itself is not locked, this specific map treats it as locked).

    map_to_locked_chest = &gold_chest_B; // Valid: You can move the map to point to Chest B
    printf("Gold in Chest B (via map): %d\n", *map_to_locked_chest); // Output: 200                           
    

    // here i can change the value linking to pointer but cannot change address
    int silver_chest = 50; // A normal chest with 50 silver
    int bronze_chest = 75; // Another normal chest

    int *const map_glued_to_chest = &silver_chest; // This map is GLUED to silver_chest from the start.
                                                // You MUST initialize it immediately.

    printf("Silver in chest (via map): %d\n", *map_glued_to_chest); // Output: 50

    *map_glued_to_chest = 60; // Valid: You CAN change the silver inside the chest.
    printf("New silver in chest (via map): %d\n", *map_glued_to_chest); // Output: 60
    printf("Actual silver_chest value: %d\n", silver_chest); // Output: 60 (it changed!)

    // map_glued_to_chest = &bronze_chest; // ERROR! You cannot move this map to point to bronze_chest.
                                        // It's glued to silver_chest. 

    int diamond_chest = 1000; // A normal chest

    const int *const map_glued_to_locked_chest = &diamond_chest; // Map is glued to this chest,
                                                                // and it treats the chest as locked.

    printf("Diamonds in chest (via map): %d\n", *map_glued_to_locked_chest); // Output: 1000

    // *map_glued_to_locked_chest = 1200; // ERROR! Cannot change contents (chest locked by this map).
    // map_glued_to_locked_chest = &another_chest; // ERROR! Cannot move the map (map is glued).    
    
    return 0;
}
