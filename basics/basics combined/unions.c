#include <stdio.h>
#include <string.h>

typedef union 
{
    int input_t;
    float data_t;
    char name[35];
}sensor;

int main(){

    sensor data1;
    sensor *ptr_data1;
    ptr_data1 = &data1;

    sensor data2;
    sensor *ptr_data2;
    ptr_data2 = &data2;

    ptr_data1->input_t = 5;
    ptr_data1->data_t = 55.5;
    strcpy(ptr_data1->name, " temperature sensor");

    printf(" the value of int %d\n the value of floar: %f\n the name of sensor: %s", data1.input_t, data1.data_t, data1.name);

    
    printf("\nSize of union Data: %zu bytes\n", sizeof(sensor));
    // ... (inside main) ...

    ptr_data1->input_t = 5;
    printf("The value of int (after int assignment): %d\n", data1.input_t); // This will correctly print 5

    ptr_data1->data_t = 55.5;
    printf("The value of float (after float assignment): %f\n", data1.data_t); // This will correctly print 55.5

    strcpy(ptr_data1->name, "temperature sensor");
    printf("The name of sensor (after string assignment): %s\n", data1.name); // This will correctly print "temperature sensor"

// ... (rest of your code) ...

    return 0;
}
